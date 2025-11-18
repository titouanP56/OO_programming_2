#include "ListePersonnel.h"
#include <iostream>



ListePersonnel::ListePersonnel(){
    nb = 0;
    taille = 10;

    tab = new Personnel*[taille];
}


ListePersonnel::~ListePersonnel(){
    delete[] tab;
}


void ListePersonnel::doubleTableau(){
    int nouvelleTaille = taille * 2;

    Personnel** nouveauTab = new Personnel*[nouvelleTaille];

    for (int i = 0; i < nb; i++) {
        nouveauTab[i] = tab[i];
    }

    delete[] tab;

    tab = nouveauTab;
    taille = nouvelleTaille;
}



void ListePersonnel::ajoutPersonnel(Personnel* p) {
    if (nb >= taille) {
        doubleTableau();
    }

    tab[nb] = p;
    nb++;
}


void ListePersonnel::afficherSalaire(){
    cout<<"Liste du personnel ( "<<nb<<" personnes)"<<endl;
    cout<<"--------------"<<endl;   
    for (int i = 0; i<nb; i++){
        tab[i]->affiche();
        cout<<"--------------"<<endl;   
    }
}