#ifndef ENSEIGNANT_PERMANENT_H
#define ENSEIGNANT_PERMANENT_H

#include "Personnel.h"
#include <string>

class EnseignantPermanent : public Personnel {
private:
    std::string bureau;
    int grade;
    float primeMensuelle;

public:

    EnseignantPermanent(string nom, string prenom, float salaire_base,
                        string bureau = "", int grade = 1, float prime = 0.0f);

    void setBureau(string b);
    string getBureau() const;

    void setGrade(int g);
    int getGrade() const;

    void setPrimeMensuelle(float p);
    float getPrimeMensuelle() const;

    float calculSalaire();
    void affiche();
};

#endif