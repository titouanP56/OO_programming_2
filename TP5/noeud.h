#include <iostream>
#include <limits>
#include <cmath>

#include "RDV.h"


#pragma once

class NoeudRDV {

    private :

        RDV rdv;
        NoeudRDV* suivant;

    public :

        NoeudRDV (const RDV & new_rdv){
            rdv = new_rdv;
            suivant = nullptr;
        }

        NoeudRDV(const RDV& new_rdv, NoeudRDV* noeud_suivant) : rdv(new_rdv), suivant(noeud_suivant) {}

        RDV getRDV() const{
            return rdv;
        }
        NoeudRDV* getSuivant() const{
            return suivant;
        }

        void setRDV(const RDV& new_rdv) {
            rdv = new_rdv;
        }
        void setSuivant(NoeudRDV* new_suivant) {
            suivant = new_suivant;
        }       

};