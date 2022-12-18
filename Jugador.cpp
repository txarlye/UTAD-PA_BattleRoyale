#pragma once
#include <iostream>
#include <string>
#include "Jugador.h"

Jugador::Jugador(std::string n,int v, int a){
    name      = n;
    vida      = v;
    ataque    = a;
    //Armas armaJugador;
}
Jugador::Jugador(int v, int a){
    vida      = v;
    ataque    = a;
    //Armas armaJugador;
}
Jugador::Jugador(){
    vida;
    ataque;
    //Armas armaJugador;
}
