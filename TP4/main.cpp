#include <iostream>
#include <limits>
#include <cmath>

#include "heure.h" 
#include "date.h"
#include "RDV.h"


int main(int argc, char const *argv[]){

    Date d1 = Date(50, 2, 2005);
    Date d2 = Date(14, 2, 2005);

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

              
    Heure h1 = Heure();
    Heure h2 = Heure(0, 60);
    Heure h3 = Heure(8, 49);

    h1.afficher();
    h2.afficher();
    h3.afficher();

    h1.setHeure(1);
    h1.setMinute(59);

    std::cout << "d1 (nouvelles valeurs) : (" 
              << h1.getHeure() << ", " 
              << h1.getMinute() << ")" 
              << std::endl; 


    RDV rdv = RDV();
    rdv.affiche();
    rdv.saisie();
    rdv.affiche();

}