#include <iostream>
#include <limits>
#include <cmath>
#include <string>
using namespace std;
#include <vector>
using namespace std;


#include "heure.h"
#include "date.h"

#pragma once

class RDV {

    private:
        Heure heure;
        Date date;
        string lieu;
        int nb_participants;
        string* participants;

    public:

        RDV() {
            nb_participants = 0;
            heure = Heure();
            date = Date(1,1,2000);
            participants = new string[10];
        }

        ~RDV() {
            delete[] participants;
        }

        void affiche (){
            std::cout << "RDV : ";
            heure.afficher();
            std::cout<<", ";
            date.afficher();
            std::cout<<", Lieu : "<<lieu<<", nb_participants : "<<nb_participants<<std::endl;

            if(nb_participants != 0){
                std::cout<<", participants : (";
                for(int i = 0; i<nb_participants-1; i++){
                    std::cout<<participants[i]<<", ";
                }
                std::cout<<participants[nb_participants-1]<<")"<<std::endl;
            }
        }


        void saisieParticipants(){
            
            std::cout << "--- Saisie des participants ---" << std::endl;
            std::cout << "Entrez le nom de chaque participant (max 10). Tapez 'fin' pour terminer." << std::endl;

            nb_participants = 0;

            while (nb_participants < 10) {
                std::cout << "Participant " << nb_participants + 1 << " : ";
                std::string nom_saisi;
                std::getline(std::cin, nom_saisi);

                if (nom_saisi == "fin" || nom_saisi.empty()) {
                    break;
                }
                participants[nb_participants] = nom_saisi;
                
                nb_participants++;
            }
        }


        void saisieLieu(){
            std::cout << "Lieu du RDV : "<<std::endl;
            std::string lieu;
            std::getline(std::cin, lieu);
            this->lieu = lieu;
        }

        void saisie(){
            std::cout << "--- Saisie de la date ---" << std::endl;
            int j, m, a;
            std::cout << "Jour : ";
            std::cin >> j;
            std::cout << "Mois : ";
            std::cin >> m;
            std::cout << "Annee : ";
            std::cin >> a;
            date = Date(j, m, a);

            std::cout << "--- Saisie de l'heure ---" << std::endl;
            int h, min;
            std::cout << "Heure : ";
            std::cin >> h;
            std::cout << "Minute : ";
            std::cin >> min;
            heure = Heure(h, min);

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            saisieLieu();
            saisieParticipants();
            
            std::cout << "\n--- Rendez-vous créé avec succès ! ---" << std::endl;
        }


        void setDate(Date new_date){
            date = new_date;
        }
        void setHeure(Heure new_heure){
            heure = new_heure;
        }
        void setLieu(const std::string& lieuRdv){
            lieu = lieuRdv;
        }
        void setNombreDeParticipants(int nombreDeParticipants){
            nb_participants = nombreDeParticipants;
        }

        void setParticipants(std::string* ps) {
            if (ps == nullptr) {
                std::cerr << "ERREUR : Impossible de définir les participants à partir d'un pointeur nul." << std::endl;
                return;
            }
            nb_participants = 0;

            for (int i = 0; i < 10; ++i) {
                this->participants[i] = ps[i];

                if (!ps[i].empty()) {
                    nb_participants++;
                }
            }
        }

        void setParticipant(int index, const std::string& nom) {
            if (index >= 0 && index < nb_participants) {
                participants[index] = nom;
            } else {
                std::cerr << "ERREUR : Impossible de modifier le participant. L'index "
                << index << " est invalide." << std::endl;
            }
        }


        bool estCompatibleAvec(const RDV & rdv){
            if (this->date.egald(rdv.date)){
                return this->heure.egalh(rdv.heure);
            }
            return false;
        }



};

