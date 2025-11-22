#ifndef LISTEPERSONNELVALEUR_H
#define LISTEPERSONNELVALEUR_H

#include "Personnel.h"

class ListePersonnelValeur {
    private:
        Personnel* tab; 
        int nb;
        int taille;
        
        void doubleTableau();

    public:
        ListePersonnelValeur();
        ~ListePersonnelValeur();

        void ajoutPersonnel(const Personnel& p);

        void afficherSalaire();
};

#endif