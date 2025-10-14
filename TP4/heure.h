#include <iostream>
#include <limits>
#include <cmath>


class Heure {
    private:

        int heure;
        int minute;
        
        bool checkHeure(int h, int m) {
            bool heureValide = (h >= 0 && h <= 23);
            bool minuteValide = (m >= 0 && m <= 59);

            return heureValide && minuteValide;
        }


    public:

        Heure(int h, int m) {
            if (checkHeure(h, m)){
                heure = h;
                minute = m;
            }
            else{
                heure = 0;
                minute = 0;
            }
        }

        Heure(){
            heure = 0;
            minute = 0;
        }

        void afficher() {
            std::cout << "Heure : "<<heure<<" : "<<minute<< std::endl;
        }

        int getHeure(){
            return heure;
        }
        int getMinute(){
            return minute;
        }

        void setHeure(int new_heure){
            if(new_heure <= 23 && new_heure >= 0){
                heure = new_heure;
            }
        }
        void setMinute(int new_minute){
            if(new_minute <= 59 && new_minute >= 0){
                minute = new_minute;
            }
        }

    };
