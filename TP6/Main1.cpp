#include <iostream>
#include "Personne.h" 
#include "Eleve.h" 

int main() {
    

    cout << "    TEST DE LA CLASSE PERSONNE" << endl;


    Personne prof("Dupont", "Marie");
    cout << "Creation de 'prof' (Dupont, Marie) :" << endl;
    prof.affiche();

    prof.setTelephone("0123456789");
    prof.setAdresse("10 rue de la Republique, 75001 Paris");
    cout << "Apres ajout tel et adresse :" << endl;
    prof.affiche();



    cout << "      TEST DE LA CLASSE ELEVE" << endl;

    Eleve etudiant1("Martin", "Lucas", "M1 Info", 3.4, "TD_A1");
    cout << "Creation de 'etudiant1' (Martin, Lucas, M1, 3.4, TD_A1) :" << endl;
    etudiant1.affiche();

    etudiant1.setGPA(3.65f);
    etudiant1.setGroupeDeTD("TD_B2");
    cout << "Apres modification GPA (3.65) et Groupe (TD_B2) :" << endl;
    etudiant1.affiche();

    etudiant1.setAdresse("25 avenue des etudiants");
    cout << "Apres ajout d'une adresse (setter herite) :" << endl;
    etudiant1.affiche();

    cout << "Recuperation GPA: " << etudiant1.getGPA() << endl; // 3.65
    cout << "Recuperation Promo: " << etudiant1.getPromotion() << endl; // M1 Info
    
    Eleve etudiant2("Durand", "Alice");
    cout << "Creation de 'etudiant2' (Durand, Alice, ...valeurs par defaut...) :" << endl;
    etudiant2.affiche();

    return 0;
}