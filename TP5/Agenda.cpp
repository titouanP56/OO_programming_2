#include "Agenda.h"
#include <iostream>


Agenda::Agenda() {
    tete = nullptr;
}


Agenda::~Agenda() {
    NoeudRDV* courant = tete;
    NoeudRDV* suivant = nullptr;

    while (courant != nullptr) {
        suivant = courant->getSuivant(); 
        delete courant;                 
        courant = suivant;
    }
}


Agenda::Agenda(const Agenda& autre) {

    this->tete = nullptr;

    if (autre.tete == nullptr) {
        return;
    }

    this->tete = new NoeudRDV(autre.tete->getRDV());

    NoeudRDV* courant_this = this->tete;
    NoeudRDV* courant_autre = autre.tete->getSuivant();

    while (courant_autre != nullptr) {
        NoeudRDV* nouveau_noeud = new NoeudRDV(courant_autre->getRDV());

        courant_this->setSuivant(nouveau_noeud);

        courant_this = courant_this->getSuivant();
        courant_autre = courant_autre->getSuivant();
    }
}


void Agenda::ajouteRDV(const RDV& new_rdv) {
    NoeudRDV* new_noeud = new NoeudRDV(new_rdv);

    NoeudRDV* courant = tete;
    NoeudRDV* suivant = courant->getSuivant();
    bool check = false;

    while(not(check)){

        if (new_rdv.getDate().supp(courant->getRDV().getDate())){

            new_noeud->setSuivant(courant);

        }

        else if(courant->getRDV().getDate().supp(new_rdv.getDate())){
            courant = suivant;
            suivant = courant->getSuivant();
        }
    }

}