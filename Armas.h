#pragma once
#include <iostream>
#include <string>
using namespace std;

class Armas {
    string nombreArma;
    float danioGenerado;
    float porcentageDefensivo;

public:
    //std::string name;
    Armas(string nombreArma, int danioGenerado, int porcentageDefensivo);
    Armas(int danioGenerado, int porcentageDefensivo);
    Armas();


    string getNameArma(){
        return nombreArma;
    }
    int getDanioGenerado(){
        return danioGenerado;
    }
    int getDanioPorcentageDefensivo(){
        return porcentageDefensivo;
    }


    void setdanioGenerado(int newDanioGenerado){
        danioGenerado = newDanioGenerado;
    }
    void setPorcentageDefensivo(int newPorcentageDefensivo){
        porcentageDefensivo = newPorcentageDefensivo;
    }
    void setNameArma(std::string newNameArma){
        nombreArma = newNameArma;
    }

};