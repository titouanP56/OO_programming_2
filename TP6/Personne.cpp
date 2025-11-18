#include "Personne.h"
#include <iostream>



Personne::Personne(string nom2, string prenom2){
    nom = nom2;
    prenom = prenom2;
    telephone = "";
    adresse = "";
}


string Personne::getNom(){
    return nom;
}

string Personne::getPrenom(){
    return prenom;
}

string Personne::getTelephone(){
    return telephone;
}

string Personne::getAdresse(){
    return adresse;
}


void Personne::setNom(string new_nom){
    nom = new_nom;
}

void Personne::setPrenom(string new_prenom){
    prenom = new_prenom;
}

void Personne::setTelephone(string new_tel){
    telephone = new_tel;
}
void Personne::setAdresse(string new_adr){
    adresse = new_adr;
}

void Personne::affiche (){
    std::cout << "Personne : (" 
              << nom << ", " 
              << prenom << ", " 
              << adresse << ", " 
              << telephone << ")" 
              << std::endl; 
}

