#include "Vector.h" 

int main() {

    double* t1 = new double[3]{3.0, 2.0, 1.0};
    Vector v1 = Vector(3, t1);

    double* t2 = new double[3]{6.0,3.0,9.0};
    Vector v2 = Vector(3, t2);

    v1.affichage();
    v2.affichage();

    Vector v3 = v1+v2;
    v3.affichage();

    Vector v4 = Vector(0);
    v4 = v3;
    v4.affichage();

    double a = v1 * v2;
    cout<<"a : "<<a<<endl;

    Vector v5 = v1 * 3;
    Vector v6 = 3 * v1;
    v5.affichage();
    v6.affichage();

    bool check = v4 == v3;
    bool check2 = v4 == v1;
    bool check3 = v1 != v2;
    bool check4 = v4 != v3;

    cout<<check<<"  "<<check2<<"  "<<check3<<"  "<<check4<<endl;

    v4 += v1;
    v4.affichage();
    return 0;
}