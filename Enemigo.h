#pragma once
#include <iostream>
#include <string>
#include "RepositorioDeNombres.h"
#include "Jugador.h"
#include "Armas.h"
using namespace std;

class Enemigo : public Jugador{



public:
    //int vida;
    //int ataque;
    Armas armaEnemigo;
    Enemigo(int v, int a);
    Enemigo();


    void setAtaqueEnemigo (int nuevoAtaque){
        ataque = nuevoAtaque;
    }
    /*
    void setNombreArmaEnemigo (std::string nuevoNombreArma){
        this->armaEnemigo.setNameArma(nuevoNombreArma);
    }
    */


};
