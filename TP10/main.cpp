#include <iostream>
using namespace std;

#include "B.h"
#include "Erreur2.h"
#include "Vecteur.h"
#include "Vecteur_limite.h"
#include "Vecteur_creation.h"




int main() {
    try {
        Vecteur v(5);

        cout << "Valide :" << endl;
        v[2] = 10;
        cout << "reussi v[2] = " << v[2] << endl;

        Vecteur v2(-1);

        cout << "Pas valide :" << endl;

        v[10] = 50; 
    }
    catch(Vecteur_creation vc) {
        cout << "Exception creation. Le mauvais indice est :"<< vc.num << endl;
    }
    catch (Vecteur_limite vl) {
        cout << "Exception indice. Le mauvais indice est :"<< vl.num << endl;
    }
    return 0;
}