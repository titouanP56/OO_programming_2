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


    return 0;
}


