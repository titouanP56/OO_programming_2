#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
using namespace std;

class Vector{
    private :
        double* table;
        int n;
        
    public :
        Vector();
        Vector(int taille);
        Vector(int taille, double* table);
        Vector(const Vector& autre);
        ~Vector();

        void affichage();

        Vector operator+(const Vector& autre) const;

        void operator+=(const Vector& autre);

        bool operator==(const Vector& autre) const;

        Vector& operator=(const Vector& autre);

        bool operator!=(const Vector& autre) const;

        double operator*(const Vector& autre) const;

        Vector operator*(double a) const;
};

Vector operator*(double s, const Vector& v);

#endif