#include "EnseignantPermanent.h"
#include <iostream>


EnseignantPermanent::EnseignantPermanent(string nom, string prenom, float salaire_base,
                                         string b, int g, float p)
    : Personnel(nom, prenom, salaire_base),
      bureau(b),
      grade(g),
      primeMensuelle(p) {

    }


void EnseignantPermanent::setBureau(string b) { bureau = b; }
string EnseignantPermanent::getBureau() const { return bureau; }

void EnseignantPermanent::setGrade(int g) { grade = g; }
int EnseignantPermanent::getGrade() const { return grade; }

void EnseignantPermanent::setPrimeMensuelle(float p) { primeMensuelle = p; }
float EnseignantPermanent::getPrimeMensuelle() const { return primeMensuelle; }


#include "EnseignantPermanent.h"
#include <iostream>


float EnseignantPermanent::calculSalaire(){
    return getSalaire() + (grade * primeMensuelle) / 100.0f;
}

void EnseignantPermanent::affiche() {
    Personnel::affiche();
    std::cout << "    Statut : Enseignant Permanent" << std::endl;
    std::cout << "    Bureau : " << bureau
              << ", Grade : " << grade
              << ", Prime : " << primeMensuelle << " EUR" << std::endl;
    std::cout << "  > Salaire Total Calcule : " << this->calculSalaire() << " EUR" << std::endl;
}