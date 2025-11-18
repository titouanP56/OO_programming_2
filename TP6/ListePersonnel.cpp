#include "ListePersonnel.h"
#include <iostream>



ListePersonnel::ListePersonnel(){
    nb = 0;

    for (int i = 0; i<100; i++){
        tab[i] = nullptr;
    }
}


void ListePersonnel::ajoutPersonnel(Personnel* new_pers){
    if (nb < 100){
        tab[nb] = new_pers;
        nb++;
    }
    else{
        cout<<"La liste est pleine"<<endl;
    }
}


void ListePersonnel::afficherSalaire(){
    cout<<"Liste du personnel ( "<<nb<<" personnes)"<<endl;
    cout<<"--------------"<<endl;   
    for (int i = 0; i<nb; i++){
        tab[i]->affiche();
        cout<<"--------------"<<endl;   
    }
}