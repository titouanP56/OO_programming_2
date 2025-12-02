#include <iostream>

using namespace std;


template <class T, class U> void fct (T a, U b) {
    cout << "je suis la fonction1 " << endl ;
}
template <class T, class U> void fct (T * a, U b) {
    cout << "je suis la fonction 2" << endl ;
}
template <class T> void fct (T, T, T) {
    cout << "je suis la fonction 3" << endl ;
}
void fct (int a, float b) {
    std::cout << "Je suis la fonction 4" << endl ;
}


template <class T> T somme(T tab[], int taille) {
    T res = 0;
    cout<<res<<endl;
    for (int i = 0; i < taille; i++){
        res += tab[i];
    }
    return res;
}


template <class T> int min_tab(T tab[], int taille) {
    if(taille == 0){
        cout<<"problemes"<<endl;
        return -1;
    }
    int min = 0;
    for (int i = 0; i < taille; i++){
        if(tab[i] < tab[min]){
            min = i;
        }
    }
    return min;
}


struct MinTabs{
    int indTab;
    int argMin;
};

void afficherMinTabs(MinTabs a){
    cout<<"Indice du tableau : "<<a.argMin<<"    Indice du minimum : "<<a.indTab<<endl;
}


template <class T, class U> MinTabs min_tab(T tab1[], U tab2[], int n1, int n2) {
    int min1 = min_tab(tab1, n1);
    int min2 = min_tab(tab2, n2);

    MinTabs res;

    if(tab1[min1] <= tab2[min2]){
        res.argMin = min1;
        res.indTab = 1;
        return res;
    }

    res.indTab = 2;
    res.argMin = min2;
    return res;
}





template <typename T>
class Vecteur {
private:
    T* donnees; 
    int n;

public:
    Vecteur (int taille, T* table){
        n = taille;
        donnees = new T[n];
        for(int i = 0; i<n; i++){
            donnees[i] = table[i];
        }
    }

    Vecteur (int taille){
        n = taille;
        donnees = new T[n];
    }

    T operator[](int i) const{
        if(i < 0 || i >= n){
            cout<<"Problemes"<<endl;
            return-1;
        }
        return donnees[i]; 
    }

};










int main () {
    int n=0, p=0, q =0;
    float x=0.0 , y =0.0;
    double z =0.0;
/*
    cout << "fct (n, p) ;";
    fct (n, p);
    cout << "fct (x, y) ;";
    fct (x, y);
    cout << "fct (n, x) ;";
    fct (n, x);
    cout << "fct (n, z) ;";
    fct (n, z);
    cout << "fct (&n, p) ;";
    fct (&n, p);
    cout << "fct (&n, x) ;";
    fct (&n, x);
    cout << "fct (&n, &p, &q);";
    fct (&n, &p, &q);
*/

    int table1[] = {2,3,4,1};
    float table2[] = {1.5,1,0.5,2,2.5};

    int* table = new int[5]{0,9,3,5,7};
    Vecteur<int> ve(5, table);

    cout << "Somme int; "<<somme(table1, 4)<<endl;
    cout << "Somme float; "<<somme(table2, 5)<<endl;

    cout << "Min int; "<<min_tab(table1, 4)<<endl;
    cout << "Min float; "<<min_tab(table2, 5)<<endl;

    MinTabs res = min_tab(table1, table2, 4, 5);
    cout << "Min_tab; ";
    afficherMinTabs(res);

    cout << "Acces Vecteur; "<<ve[2]<<endl;

    return 0;
}