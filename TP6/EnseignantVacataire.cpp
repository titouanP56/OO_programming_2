#include "EnseignantVacataire.h"
#include <iostream>



EnseignantVacataire::EnseignantVacataire(string nom, string prenom, string casier, int heures, float taux_horaire)
    : Personnel::Personnel(nom, prenom, 0.0), casier(casier), nbreHeures(heures), taux(taux_horaire){

    };


void EnseignantVacataire::setCasier(std::string c) { casier = c; }
string EnseignantVacataire::getCasier() const { return casier; }

void EnseignantVacataire::setNbreHeures(int h) { nbreHeures = h; }
int EnseignantVacataire::getNbreHeures() const { return nbreHeures; }

void EnseignantVacataire::setTaux(float t) { taux = t; }
float EnseignantVacataire::getTaux() const { return taux; }



float EnseignantVacataire::calculSalaire(){
    return taux*nbreHeures;
}


void EnseignantVacataire::affiche(){
    Personne::affiche();
    
    std::cout << "    Statut : Enseignant Vacataire" << std::endl;
    std::cout << "    Casier : " << casier
              << ", Heures : " << nbreHeures
              << ", Taux : " << taux << " EUR/h" << std::endl;

    std::cout << "  > Salaire Total Calcule : " << this->calculSalaire() << " EUR" << std::endl;
}