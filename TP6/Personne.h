#include <iostream>
#include <limits>
#include <cmath>
#include <string>
using namespace std;


#pragma once


class Personne {

    private:
        string nom;
        string prenom;
        string telephone;
        string adresse;

    public:

        Personne(string nom, string prenom);

        string getNom(){};
        string getPrenom(){};
        string getTelephone(){};
        string getAdresse(){};

        void setNom(string new_nom){};
        void setPrenom(string new_prenom){};
        void setTelephone(string new_tel){};
        void setAdresse(string new_addr){};

        void affiche(){};

};

