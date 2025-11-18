#ifndef PERSONNEL_H
#define PERSONNEL_H

#include "Personne.h"
#include <string>

class Personnel : public Personne {
    private:
        float salaire;

    public:
        Personnel(string nom, string prenom, float salaire = 0.0);

        void setSalaire(float new_salaire);

        void affiche();

        float calculSalaire();

};

#endif
