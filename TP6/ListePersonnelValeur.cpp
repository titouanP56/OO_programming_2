#include "ListePersonnelValeur.h"
#include <iostream>
#include "Personnel.h"

ListePersonnelValeur::ListePersonnelValeur() {
    nb = 0;
    taille = 10;
    tab = new Personnel[taille]; 
}

ListePersonnelValeur::~ListePersonnelValeur() {
    delete[] tab;
}

void ListePersonnelValeur::doubleTableau() {
    int nouvelleTaille = taille * 2;
    Personnel* nouveauTab = new Personnel[nouvelleTaille];

    for (int i = 0; i < nb; i++) {
        nouveauTab[i] = tab[i];
    }

    delete[] tab;
    tab = nouveauTab;
    taille = nouvelleTaille;
}

void ListePersonnelValeur::ajoutPersonnel(const Personnel& p) {
    if (nb >= taille) {
        doubleTableau();
    }
    tab[nb] = p; 
    nb++;
}

void ListePersonnelValeur::afficherSalaire() {
    std::cout << "Liste (Version OBJETS / SANS POINTEURS)" << std::endl;
    for (int i = 0; i < nb; i++) {
        tab[i].affiche(); 
    }
}