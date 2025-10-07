#include <iostream>
#include <limits>
#include <cmath>

class Point {
    private:
        double x;
        double y;
        double z;

        static int _nombreInstances;

    public:

        Point() : x(0), y(0), z(0) {} 

        Point(double x, double y, double z) {
            this->x = x;
            this->y = y;
            this->z = z;
            _nombreInstances++;
        }

        Point (const Point & p){
	        this->x = p.x;
	        this->y = p.y;
            this->z = p.z;
            _nombreInstances++;
        }

        ~ Point() {
            _nombreInstances--;
        }

        int getX() const {
            return x;
        }
        int getY() const {
            return y;
        }
        int getZ() const {
            return z;
        }

        void setX(int new_x) {
            x = new_x;
        }
        void setY(int new_y) {
            y = new_y;
        }
        void setZ(int new_z) {
            z = new_z;
        }


        void afficher() {
            std::cout << "Point ( x : "<<x<<", y : "<<y<<", z : "<<z<<" )" << std::endl;
        }

        float distance(const Point p) {
            double dx = p.x - this->x;
            double dy = p.y - this->y;
            double dz = p.z - this->z;
            return sqrt(dx * dx + dy * dy + dz * dz);
        }

        void translater (double dx, double dy, double dz){
            x += dx;
            y += dy;
            z += dz;
        }

        bool egal (const Point & point){
            return this->x == point.x && this->y == point.y && this ->z == point.z;
        }


};

int Point::_nombreInstances = 0; 