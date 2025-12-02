#ifndef PERSONNE_H
#define PERSONNE_H

#include <iostream>
#include <string>
using namespace std;

class Personne {
    protected: 
        string nom;
        string prenom;
        string telephone;
        string adresse;

    public:

        Personne(){}

        Personne(string nom, string prenom, string adresse = "", string telephone = "");

        string getNom();
        string getPrenom();
        string getTelephone();
        string getAdresse();

        void setNom(string new_nom);
        void setPrenom(string new_prenom);
        void setTelephone(string new_tel);
        void setAdresse(string new_addr);

        virtual void affiche(); 
};

#endif