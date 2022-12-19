

#include "Armas.h"
Armas::Armas(std::string n,int v, int a){
    nombreArma = n;
    danioGenerado       = v;
    porcentageDefensivo = a;
}

Armas::Armas(int v, int a){
    nombreArma ;
    danioGenerado       = v;
    porcentageDefensivo = a;
}

Armas::Armas(){
    nombreArma ;
};
