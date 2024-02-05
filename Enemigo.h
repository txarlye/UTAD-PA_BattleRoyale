#pragma once
#include <iostream>
#include <string>
#include "RepositorioDeNombres.h"
#include "Jugador.h"
#include "Armas.h"
using namespace std;

class Enemigo : public Jugador{



public: 
    Armas armaEnemigo;
    Enemigo(const std::string& nombre, int vida, int ataque); 
    Enemigo();


    void setAtaqueEnemigo (int nuevoAtaque){
        ataque = nuevoAtaque;
    } 

};
