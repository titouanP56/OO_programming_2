#include "PersonnelAdmin.h"
#include <iostream>


PersonnelAdmin::PersonnelAdmin(string nom, string prenom, float salaire_base, int hs, float taux_hs)
    : Personnel(nom, prenom, salaire_base), heuresSup(hs), taux(taux_hs) {

}


void PersonnelAdmin::setHeuresSup(int hs) {
    heuresSup = hs;
}

void PersonnelAdmin::setTaux(float t) {
    taux = t;
}

int PersonnelAdmin::getHeuresSup() const {
    return heuresSup;
}

float PersonnelAdmin::getTaux() const {
    return taux;
}



float PersonnelAdmin::calculSalaire() {
    float salaire_base = Personnel::calculSalaire();
    return salaire_base + (heuresSup * taux);
}

void PersonnelAdmin::affiche() {
    Personnel::affiche();
    
    std::cout << "    Heures Sup. : " << heuresSup 
              << "h (au taux de " << taux << ")" << std::endl;
    std::cout << "  > Salaire Total Calcule : " << this->calculSalaire() << " EUR" << std::endl;
}