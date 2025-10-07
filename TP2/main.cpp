#include <iostream>
#include <limits>
#include <cmath>

#include "Point.h"


int main(int argc, char const *argv[])
{
    
    Point p1 = Point(0,6,3);
    Point p2 = Point(p1);

    p1.afficher();  
    p2.afficher();

    p1.setX(1);
    p1.setY(4);
    p1.setZ(7);

    std::cout << "p1 (nouvelles coords) : (" 
              << p1.getX() << ", " 
              << p1.getY() << ", " 
              << p1.getZ() << ")" 
              << std::endl; 

    std::cout << "distance entre p1 et p2 : " << p1.distance(p2);


    return 0;
}


