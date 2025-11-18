#include <iostream>
#include "Personne.h" 
#include "Eleve.h" 
#include "Personnel.h" 
#include "PersonnelAdmin.h" 

int main() {
    cout << "    TEST DE LA CLASSE PERSONNEL" << endl;
    
    Personnel p1("Lefebvre", "Jean", 2000.0f);
    p1.setTelephone("0611223344");
    p1.affiche();
    cout << "Salaire (via calcul): " << p1.calculSalaire() << endl;


    cout << "  TEST DE LA CLASSE PERSONNEL-ADMIN" << endl;
    
    PersonnelAdmin pa1("Bernard", "Sophie", 3000.0f, 10, 50.0f);
    pa1.setAdresse("40 rue du bureau");
    pa1.affiche();

    cout << "Salaire final (via calcul): " << pa1.calculSalaire() << endl;
    
    cout << "\n--- Modification heures sup ---" << endl;
    pa1.setHeuresSup(20);
    pa1.affiche();
    cout << "Nouveau salaire final: " << pa1.calculSalaire() << endl;

    return 0;
}