#include <iostream>
using namespace std;


class HorsLimite :public exception{

    private :
        char* message;

    public :
        HorsLimite(const char* txt) throw();

        virtual const char* what() const throw();
};