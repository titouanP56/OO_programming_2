#include <iostream>
#include <limits>
#include <cmath>

#include "heure.cpp"
#include "date.cpp"


int main(int argc, char const *argv[]){

    d1.afficher();
    d2.afficher();

    d1.setJour(30);
    d1.setMois(11);
    d1.setAnnee(2025);

    std::cout << "d1 (nouvelles valeurs) : (" 
              << d1.getJour() << ", " 
              << d1.getMois() << ", " 
              << d1.getAnnee() << ")" 
              << std::endl; 



    h1.afficher();
    h2.afficher();
    h3.afficher();

    h1.setHeure(1);
    h1.setMinute(59);

    std::cout << "d1 (nouvelles valeurs) : (" 
              << h1.getHeure() << ", " 
              << h1.getMinute() << ")" 
              << std::endl; 



}