#ifndef LISTEPERSONNEL_H
#define LISTEPERSONNEL_H

#include "Personnel.h"
#include <string>


class ListePersonnel {
    private :
        Personnel** tab;
        int nb;
        int taille;

        void doubleTableau();

    public :

        ListePersonnel();

        ~ListePersonnel();

        void ajoutPersonnel(Personnel* new_personnel);

        void afficherSalaire();

};


#endif