#include "Eleve.h"
#include <iostream>



Eleve::Eleve(string nom, string prenom, std::string promo, float gpa, std::string td) : Personne(nom, prenom), promotion(promo), GPA(gpa), TD(td) {

}


void Eleve::setPromotion(std::string new_promo) {
    promotion = new_promo;
}

void Eleve::setGroupeDeTD(std::string new_td) {
    TD = new_td;
}

void Eleve::setGPA(float new_gpa) {
    GPA = new_gpa;
}

string Eleve::getPromotion() const {
    return promotion;
}

string Eleve::getGroupeDeTD() const {
    return TD;
}

float Eleve::getGPA() const {
    return GPA;
}

void Eleve::affiche() {
    Personne::affiche();
    std::cout << "  Promotion : " << promotion << ", "
        << "Groupe TD : " << TD << ", "
        << "GPA : " << GPA
        << std::endl;
}