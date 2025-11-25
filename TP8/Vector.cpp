#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector(){
    n = 0;
    table = nullptr;
}

Vector::Vector(int taille){
    n = taille;
    if (n > 0) {
        table = new double[n];
        for (int i = 0; i < n; i++) {
            table[i] = 0.0;
        }
    } else {
        table = nullptr;
    }
}

Vector::Vector(int taille, double* table2){ 
    n = taille;
    if (n > 0) {
        table = new double[n]; 
        for (int i = 0; i < n; i++){
            table[i] = table2[i];
        }
    } else {
        table = nullptr;
    }
}

Vector::Vector(const Vector& autre) {
    n = autre.n;
    if (n > 0) {
        table = new double[n];
        for (int i = 0; i < n; i++) {
            table[i] = autre.table[i];
        }
    } else {
        table = nullptr;
    }
}

Vector::~Vector() {
    if (table != nullptr) {
        delete[] table;
        table = nullptr;
    }
}

void Vector::affichage(){
    if (table != nullptr) {
        cout << "Ce vecteur est de taille :" << n << " ses coordonnees sont :" << endl;
        for (int i = 0; i < n; i++){
            cout << table[i] << endl;
        }
    } else {
        cout << "Vecteur vide." << endl;
    }
}

Vector Vector::operator+(const Vector& autre) const {
    if (this->n != autre.n) {
        std::cout << "Erreur : Addition de vecteurs de tailles differentes !" << std::endl;
        return Vector(0);
    }

    Vector resultat(this->n);

    for (int i = 0; i < n; i++) {
        resultat.table[i] = this->table[i] + autre.table[i];
    }
    return resultat;
}

void Vector::operator+=(const Vector& autre) {
    if (this->n != autre.n) {
        std::cout << "Erreur : Addition de vecteurs de tailles differentes !" << std::endl;
        return;
    } 

    for (int i = 0; i < n; i++) {
        this->table[i] += autre.table[i];
    }
}

bool Vector::operator==(const Vector& autre) const {
    if(this->n != autre.n){
        return false;
    }
    for (int i = 0; i < n; i++) {
        if(this->table[i] != autre.table[i]){
            return false;
        }
    }
    return true;
}

Vector& Vector::operator=(const Vector& autre){
    if (this == &autre) {
        return *this;
    }

    if (this->table != nullptr) {
        delete[] this->table;
        this->table = nullptr;
    }

    this->n = autre.n;
    
    if (this->n > 0) {
        this->table = new double[this->n];
        for (int i = 0; i < this->n; i++) {
            this->table[i] = autre.table[i];
        }
    } else {
        this->table = nullptr;
    }

    return *this;
}

bool Vector::operator!=(const Vector& autre) const {
    return !(*this == autre);
}

double Vector::operator*(const Vector& autre) const{
    double somme = 0;
    if (this->n != autre.n){
        std::cout << "Erreur : Produit scalaire de vecteurs de tailles differentes !" << std::endl;
        return 0.0;
    }

    for (int i = 0; i<n; i++){
        somme += this->table[i] * autre.table[i];
    }

    return somme;
}

Vector Vector::operator*(double a) const { 
    Vector res(this->n); 

    for(int i = 0; i < this->n; i++){
        res.table[i] = a * this->table[i]; 
    }

    return res;
}

Vector operator*(double s, const Vector& v){
    return v * s;
}