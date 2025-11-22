#ifndef PERSONNEL_H
#define PERSONNEL_H

#include "Personne.h"

class Personnel : public Personne {
    private:
        float salaire;

    public:
        Personnel() : Personne() { salaire = 0; };

        Personnel(string nom, string prenom, float salaire = 0.0);

        void setSalaire(float new_salaire);
        float getSalaire();

        virtual void affiche();

        virtual float calculSalaire();
};

#endif