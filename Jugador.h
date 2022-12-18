#pragma once
#include <iostream>
#include <string>

class Jugador {

    int vida;

public:
    std::string name;
    int ataque;
    //Armas armaJugador;
    Jugador(std::string name,int v, int a);
    Jugador(int v, int a);
    Jugador();

    int getvida(){
        return vida;
    }
    int getataque(){
        return ataque;
    }
    std::string getName(){
        return name;
    }
    /*
    Armas getArmaProta(){
        return armaJugador;
    }
     */

    void setvida (int nuevavida){
        vida = nuevavida;
    }
    void setataque (int nuevoataque){
        ataque = nuevoataque;
    }
    /*
    void setArmaProta(int danio,int porcentage,std::string nombre){
        Armas armaJugador=getArmaProta();
        armaJugador.setdanioGenerado(danio);
        armaJugador.setPorcentageDefensivo(porcentage);
        armaJugador.setNameArma(nombre);
    }
     */

};

