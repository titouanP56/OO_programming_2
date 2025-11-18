#ifndef ENSEIGNANT_VACATAIRE_H
#define ENSEIGNANT_VACATAIRE_H

#include "Personnel.h"
#include <string>

class EnseignantVacataire : public Personnel {
private:
    std::string casier;
    int nbreHeures;
    float taux;

public:

    EnseignantVacataire(string nom,string prenom, string casier = "", int heures = 0, float taux_horaire = 0.0);


    void setCasier(string c);
    string getCasier() const;

    void setNbreHeures(int h);
    int getNbreHeures() const;

    void setTaux(float t);
    float getTaux() const;

    float calculSalaire();
    
    void affiche();
};

#endif