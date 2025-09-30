#include <iostream>
#include <limits>
#include <cmath>

class Point {
    private:
        int x;
        int y;
        int z;

        static int _nombreInstances;

    public:
        Point::Point(int x, int y, int z) {
            this->x = x;
            this->y = y;
            this->z = z;
            _nombreInstances++;
        }

        Point::Point (const Point & p){
	        this->x = p.x;
	        this->y = p.y;
            this->z = p.z;
            _nombreInstances++;
        }

        ~ Point() {
            _nombreInstances--;
        }

        int Point::getX() const {
            return x;
        }
        int Point::getY() const {
            return y;
        }
        int Point::getZ() const {
            return z;
        }

        void Point::setX(int new_x) {
            x = new_x;
        }
        void Point::setY(int new_y) {
            y = new_y;
        }
        void Point::setZ(int new_z) {
            z = new_z;
        }

        void saisir(){
            std::cout << "Saisie des coordonnées du Point (x, y, z):" << std::endl;

            std::cout << "Entrez la coordonnée X: ";
            if (!(std::cin >> x)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Saisie invalide pour X. La valeur X n'a pas été modifiée." << std::endl;
            }

            std::cout << "Entrez la coordonnée Y: ";
            if (!(std::cin >> y)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Saisie invalide pour Y. La valeur Y n'a pas été modifiée." << std::endl;
            }

            std::cout << "Entrez la coordonnée Z: ";
            if (!(std::cin >> z)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Saisie invalide pour Z. La valeur Z n'a pas été modifiée." << std::endl;
            }

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

        void translater (int dx, int dy, int dz){
            x += dx;
            y += dy;
            z += dz;
        }


};
