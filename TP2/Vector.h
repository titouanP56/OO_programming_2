#include <iostream>
#include <limits>
#include <cmath>

#include "Point.h"


class Vector{
    private :
        Point start;
        Point end;

        static int _nombreInstances;

    public:

        Vector :: Vector(const Point& start_n, const Point& end_n){
            this->start = start_n;
            this->end = end_n;
            _nombreInstances++;
        }

        Vector :: Vector() : 
            start(), 
            end() 
        {_nombreInstances++;}

        Vector :: Vector (const Vector & vect){
            this->start = vect.start;
            this->end = vect.end;
            _nombreInstances++;
        }
        
        ~Vector(){
            _nombreInstances--;
        }


        double getCoordinates(int axe) const {
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


        void afficher() {
            std::cout << "Vecteur ( start : ";
            start.afficher();
            std::cout << " end : ";
            end.afficher();
            std::cout << ")";
        }

        double norme() {
            double vx = this->getCoordinates(0);
            double vy = this->getCoordinates(1);
            double vz = this->getCoordinates(2);
            return sqrt(vx * vx + vy * vy + vz * vz);
        }

        bool egal(const Vector & vect){
            return this->start.egal(vect.start) && this->end.egal(vect.end);
        }


        double scalaire(const Vector & vect) const {
            double ax = getCoordinates(0); 
            double ay = getCoordinates(1); 
            double az = getCoordinates(2);

            double bx = vect.getCoordinates(0); 
            double by = vect.getCoordinates(1); 
            double bz = vect.getCoordinates(2);

            return ax*bx + ay*by + az*bz;
        }


        void multiplier (double k) {
            double ax = this->getCoordinates(0);
            double ay = this->getCoordinates(1);
            double az = this->getCoordinates(2);

            double new_ax = ax * k;
            double new_ay = ay * k;
            double new_az = az * k;

            end.setX(start.getX() + new_ax);
            end.setY(start.getY() + new_ay);
            end.setZ(start.getZ() + new_az);
        }

        Vector addition (const Vector & vect) const {
            
            double ax = getCoordinates(0); 
            double ay = getCoordinates(1); 
            double az = getCoordinates(2);

            double bx = vect.getCoordinates(0); 
            double by = vect.getCoordinates(1); 
            double bz = vect.getCoordinates(2);

            double Rx = ax+bx;
            double Ry = ay + by;
            double Rz = az + bz;

            Point new_point = Point(start.getX() + Rx, start.getY() + Ry, start.getZ() + Rz);

            return Vector(this->start, new_point);            
        }

};