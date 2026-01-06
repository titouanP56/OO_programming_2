#include <iostream>
using namespace std;

#include "HorsLimite.h"
#include "EntiersBorne.h"

int main(){

    try{
        EntiersBorne eb1 = EntiersBorne(50);
        cout<<"EB1 = "<<eb1.getVal()<<endl;

        EntiersBorne eb2 = EntiersBorne (5);
        EntiersBorne eb3 = EntiersBorne (10);
        EntiersBorne eb6 = EntiersBorne (21);

        EntiersBorne ebplus = eb1 + eb3;
        EntiersBorne ebmoins = eb1 - eb3;
        EntiersBorne ebfois = eb1 * eb3;
        EntiersBorne ebdiv = eb1 / eb3;

        cout<<"plus = "<<ebplus.getVal()<<endl;
        cout<<"moins = "<<ebmoins.getVal()<<endl;
        cout<<"fois = "<<ebfois.getVal()<<endl;
        cout<<"div = "<<ebdiv.getVal()<<endl;

        //EntiersBorne eb4 = EntiersBorne(1);

        //EntiersBorne eb5 = EntiersBorne(1100);

        EntiersBorne ebfois_casse = eb1 * eb6;
    }

    catch(HorsLimite hl){
        cout<<hl.what()<<endl;
    }




    return 0;
}