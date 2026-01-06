#include "HorsLimite.h"
#include <exception>


HorsLimite::HorsLimite(const char* mess) throw(){
    int taille = 0;
    while (mess[taille] != '\0') {
        taille++;
    }

    message = new char[taille + 1];
    for (int i = 0; i < taille; i++) {
        message[i] = mess[i];
    }

    message[taille] = '\0';
}

const char* HorsLimite::what() const throw(){
    return message;
}
