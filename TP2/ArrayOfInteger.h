#include <iostream>
#include <limits>
#include <cmath>

class ArrayOfInteger {

    private:

        int* table;
        int size;

    public:

        ArrayOfInteger :: ArrayOfInteger(){
            size = 10;
            table = new int[size];

            for(int i = 0; i<size; i++){
                table[i] = 0;
            }
        }


};