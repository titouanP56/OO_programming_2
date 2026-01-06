#include "Vecteur.h"
#include "Vecteur_limite.h"
#include "Vecteur_creation.h"

#include <iostream>
using namespace std;

Vecteur::Vecteur(int n) {
    if(n<=0){
        throw(Vecteur_creation(n));
    }
    nombreElements = n;
    elements = new int[n];
}

Vecteur::~Vecteur() {
    delete[] elements;
}

int& Vecteur::operator[](int i){
    if (i<0 || i>= nombreElements){
        throw(Vecteur_limite(i));
    }
    return elements[i];
}