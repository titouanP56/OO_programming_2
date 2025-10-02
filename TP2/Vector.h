#include <iostream>
#include <limits>
#include <cmath>

#include "Point.h"


class Vector{
    private :
        Point start;
        Point end;

    public:

        Vector :: Vector(const Point& start_n, const Point& end_n){
            this->start = start_n;
            this->end = end_n;
        }

        Vector :: Vector() : 
            start(), 
            end() 
        {}

        Vector :: Vector (const Vector & vect){
            this->start = vect.start;
            this->end = vect.end;
        }

        double getCoordinates(int axe){
            switch (axe) {
                case 0:
                    return end.getX() - start.getX();
                case 1:
                    return end.getY() - start.getY();
                case 2:
                    return end.getZ() - start.getZ();
                default:
                    std::cerr << "Erreur: Index de composante invalide (" << axe << ")." << std::endl;
                    return 0;
            }
        }

        void setComponent(int axe, int nouvelle_valeur) {
            int valeur_actuelle;
        
            switch (axe) {
                case 0:
                    valeur_actuelle = end.getX() - start.getX();
                    break;
                case 1:
                    valeur_actuelle = end.getY() - start.getY();
                    break;
                case 2:
                    valeur_actuelle = end.getZ() - start.getZ();
                    break;
                default:
                    std::cerr << "Erreur: Index de composante invalide (" << axe << ")." << std::endl;
                    return;
            }
            
            int decalage = nouvelle_valeur - valeur_actuelle;
            
            if (decalage != 0) {
                if (axe == 0) {
                    end.setX(end.getX() + decalage);
                } else if (axe == 1) {
                    end.setY(end.getY() + decalage);
                } else if (axe == 2) {
                    end.setZ(end.getZ() + decalage);
                }
            }
        }



        void afficher() {}

        

};