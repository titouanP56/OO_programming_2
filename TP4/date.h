#include <iostream>
#include <limits>
#include <cmath>


#pragma once

class Date {
    private:

        int jour;
        int mois;
        int annee;

        bool checkDate(int j, int m, int a) {

            bool jourValide = (j >= 1 && j <= 31);
            bool moisValide = (m >= 1 && m <= 12);
            bool anneeValide = (a >= 2000 && a <= 2050);

            return jourValide && moisValide && anneeValide;
        }

    public:

        Date(){
            jour = 1;
            mois = 1;
            annee = 2000;        
        }

        Date(int j, int m, int a) {
            if (checkDate(j, m, a)){
                jour = j;
                mois = m;
                annee = a;
            }
            else{
                jour = 1;
                mois = 1;
                annee = 2000;
            }
        }

        void afficher() {
            std::cout << "Date : "<<jour<<" / "<<mois<<" / "<<annee<< std::endl;
        }

        int getJour(){
            return jour;
        }
        int getMois(){
            return mois;
        }
        int getAnnee(){
            return annee;
        }

        void setJour(int new_jour){
            if(new_jour <= 31 && new_jour >= 1){
                jour = new_jour;
            }
        }
        void setMois(int new_mois){
            if(new_mois <= 12 && new_mois >= 1){
                mois = new_mois;
            }
        }
        void setAnnee(int new_annee){
            if(new_annee <= 2050 && new_annee >= 2000){
                annee = new_annee;
            }
        }

        bool egald(const Date & other_date){
            return this->jour == other_date.jour && this->mois == other_date.mois && this->annee == other_date.annee;
        }
};

