#include <iostream>
#include "Personne.h" 
#include "Eleve.h" 
#include "Personnel.h" 
#include "PersonnelAdmin.h" 
#include "EnseignantPermanent.h" 
#include "EnseignantVacataire.h" 
#include "ListePersonnel.h" 

int main() {

    ListePersonnel laListe;

    PersonnelAdmin pa1("Bernard", "Sophie", 3000.0f, 10, 50.0f);
    EnseignantPermanent prof1("Garnier", "Paul", 3000.0f, "B-101", 3, 500.0f);
    EnseignantVacataire vac1("Moreau", "Claire", "C-205", 20, 60.0f);

    laListe.ajoutPersonnel(&pa1);
    laListe.ajoutPersonnel(&prof1);
    laListe.ajoutPersonnel(&vac1);

    laListe.afficherSalaire();

    return 0;
}