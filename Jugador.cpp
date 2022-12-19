#pragma once
#include <iostream>
#include <string>
#include "Jugador.h"
using namespace std;

Jugador::Jugador(string n,int v, int a){
    name      = n;
    vida      = v;
    ataque    = a;
    Armas armaJugador;
}
Jugador::Jugador(int v, int a){
    vida      = v;
    ataque    = a;
    Armas armaJugador;
}
Jugador::Jugador(){
    vida;
    ataque;
    Armas armaJugador;
}
