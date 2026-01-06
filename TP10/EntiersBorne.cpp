#include "EntiersBorne.h"
#include "HorsLimite.h"


EntiersBorne::EntiersBorne(int v){
    if (v < val_min){
        throw(HorsLimite("La valeur est trop basse"));
    }
    else if(v > val_max){
        throw(HorsLimite("La valeur est trop haute"));
    }
    val = v;
}

int EntiersBorne::getVal(){
    return val;
}


EntiersBorne EntiersBorne::operator+(const EntiersBorne& autre) const{
    EntiersBorne res = EntiersBorne(val + autre.val);
    return res;
}

EntiersBorne EntiersBorne::operator-(const EntiersBorne& autre) const{
    EntiersBorne res = EntiersBorne(val - autre.val);
    return res;
}

EntiersBorne EntiersBorne::operator*(const EntiersBorne& autre) const{
    EntiersBorne res = EntiersBorne(val * autre.val);
    return res;
}

EntiersBorne EntiersBorne::operator/(const EntiersBorne& autre) const{
    EntiersBorne res = EntiersBorne(val / autre.val);
    return res;
}