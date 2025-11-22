#include "Personnel.h"
#include <iostream>


Personnel::Personnel(string nom, string prenom, float s)
    : Personne(nom, prenom), salaire(s) {
}


void Personnel::setSalaire(float new_salaire) {
    salaire = new_salaire;
}

float Personnel::calculSalaire() {
    return 0.0f;
}

float Personnel::getSalaire(){
    return salaire;
}

void Personnel::affiche() {
    Personne::affiche();
    std::cout << "  Salaire de base : " << salaire << " EUR" << std::endl;
}