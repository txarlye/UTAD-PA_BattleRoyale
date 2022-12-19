#pragma once
#include <iostream>
#include <string>
#include "Armas.h"
using namespace std;

class Jugador {

    int vida;

public:
    string name;
    int ataque;
    Armas armaJugador;
    Jugador(string name,int v, int a);
    Jugador(int v, int a);
    Jugador();

    int getvida(){
        return vida;
    }
    int getataque(){
        return ataque;
    }
    string getName(){
        return name;
    }
    Armas getArma(){
        return armaJugador;
    }


    void setVida (int nuevavida){
        vida = nuevavida;
    }
    void setAtaque (int nuevoataque){
        ataque = nuevoataque;
    }

    void setName(string newName){
        name = newName;
    }

    void setArmaProta(int danio,int porcentage,string nombre){
        Armas armaJugador;
        armaJugador.setdanioGenerado(danio);
        armaJugador.setPorcentageDefensivo(porcentage);
        armaJugador.setNameArma(nombre);
    }


};

