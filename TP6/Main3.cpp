#include <iostream>
#include "Personne.h" 
#include "Eleve.h" 
#include "Personnel.h" 
#include "PersonnelAdmin.h" 
#include "EnseignantPermanent.h" 
#include "EnseignantVacataire.h" 


int main() {

    cout << "  TEST CLASSE ENSEIGNANT-PERMANENT" << endl;

    EnseignantPermanent prof1("Garnier", "Paul", 3000.0f, "B-101", 3, 500.0f);
    
    cout << "Creation de 'prof1' :" << endl;
    prof1.affiche();

    cout << "Salaire calcule (attendu 3015) : " 
         << prof1.calculSalaire() << " EUR" << endl;
         
    cout << "\n--- Changement de grade (5) ---" << endl;
    prof1.setGrade(5);

    cout << "Nouvel affichage :" << endl;
    prof1.affiche();
    cout << "Nouveau salaire (attendu 3025) : " 
         << prof1.calculSalaire() << " EUR" << endl;



    cout << "  TEST CLASSE ENSEIGNANT-VACATAIRE" << endl;

    EnseignantVacataire vac1("Moreau", "Claire", "C-205", 20, 60.0f);
    
    cout << "Creation de 'vac1' :" << endl;
    vac1.affiche();

    cout << "Salaire calcule (attendu 1200) : " 
         << vac1.calculSalaire() << " EUR" << endl;

    cout << "\n--- Changement nombre d'heures (25) ---" << endl;
    vac1.setNbreHeures(25);

    cout << "Nouvel affichage :" << endl;
    vac1.affiche();
    cout << "Nouveau salaire (attendu 1500) : " 
         << vac1.calculSalaire() << " EUR" << endl;

    return 0;
}