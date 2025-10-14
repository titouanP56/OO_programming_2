#pragma once

#include "noeud.h" 


class Agenda {
    private:
        NoeudRDV* tete;

    public:
        Agenda();

        Agenda(const Agenda& autre);

        ~Agenda();


        void ajouteRDV(const RDV & new_rdv);
};