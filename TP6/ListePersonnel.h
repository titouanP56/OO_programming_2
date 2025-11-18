#ifndef LISTEPERSONNEL_H
#define LISTEPERSONNEL_H

#include "Personnel.h"
#include <string>


class ListePersonnel {
    private :
        Personnel* tab[100];
        int nb;

    public :

        ListePersonnel();

        void ajoutPersonnel(Personnel* new_personnel);

        void afficherSalaire();

};


#endif