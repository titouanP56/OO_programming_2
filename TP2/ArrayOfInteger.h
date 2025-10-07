#include <iostream>
#include <limits>
#include <cmath>

class ArrayOfInteger {

    private:

        int* table;
        int size;
        static int _nombreInstances;

    public:

        ArrayOfInteger :: ArrayOfInteger(){
            size = 10;
            table = new int[size];

            for(int i = 0; i<size; i++){
                table[i] = 0;
            }
            _nombreInstances++;
        }

        ArrayOfInteger::ArrayOfInteger(int size){
            this->size = size;
                        table = new int[size];

            for(int i = 0; i<size; i++){
                table[i] = 0;
            }
            _nombreInstances++;
        }

        ArrayOfInteger::ArrayOfInteger(const ArrayOfInteger & array){
            this->size = array.size;
            table = new int[size];

            for(int i = 0; i<size; i++){
                table[i] = array.table[i];
            }
            _nombreInstances++;
        }

        ~ArrayOfInteger(){
            _nombreInstances--;
        }


        void afficher(char separator = ' ') const {
            std::cout << "ArrayOfInteger [" << size << "] : {";
            
            for(int i = 0; i<size; i++){
                std::cout << table[i];

                if(i != size-1){
                    std::cout << ", ";
                }
            }

            std::cout << "}";
        }

        bool isInstance (int x) const {
            for (int i=0; i<size; i++){
                if (table[i] == x){
                    return true;
                }
            }
            return false;
        }



        bool retirer (int x) {
            if (size <= 0) {
                return false;
            }
            int index_to_remove = -1;

            for (int i = 0; i < size; i++) {
                if (table[i] == x) {
                    index_to_remove = i;
                    break;
                }
            }

            if (index_to_remove == -1) {
                return false;
            }

            int new_size = size - 1;

            int* new_table = nullptr;
            if (new_size > 0) {
                new_table = new int[new_size];
            }

            for (int i = 0; i < index_to_remove; i++) {
                new_table[i] = table[i];
            }

            for (int i = index_to_remove; i < new_size; i++) {
                new_table[i] = table[i + 1];
            }

            delete[] table;

            table = new_table;
            size = new_size;

            return true;
        }


        bool ajouter (int x){
            int new_size = size + 1;
            int* new_table = new int[new_size];
            

            for(int i = 0; i<size; i++){
                new_table[i] = table[i];
            }
            new_table[new_size-1] = x;

            delete[] table;

            table = new_table;
            size = new_size;

            return true;
        }


        bool egal(const ArrayOfInteger & array) const {
            if(size != array.size){
                return false;
            }

            for (int i = 0; i<size; i++){
                if(table[i] != array.table[i]){
                    return false;
                }
            }
            return true;
        }
};