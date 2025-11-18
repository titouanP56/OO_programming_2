
#include <string>
using namespace std;

#include "Personne.h"


#pragma once


class Eleve : public Personne{

    private : 
        string promotion;
        string TD;
        float GPA;

    public:
        Eleve(string nom, string prenom, string promo = "", float gpa = 0.0, string td = "");

        void setPromotion(std::string new_promo);
        void setGroupeDeTD(std::string new_td);
        void setGPA(float new_gpa);

        string getPromotion() const;
        string getGroupeDeTD() const;
        float getGPA() const;

        void affiche();

};