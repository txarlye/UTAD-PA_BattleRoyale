#pragma once
#include <iostream>
#include <string>
#include <queue>
#include <cstdlib>
#include "Jugador.h"
#include "Enemigo.h"
#include "Armas.h"

class GeneradorTorneos {
private:
    int numCombates;
    int numAsaltos;
    std::queue<Enemigo> adversariosTorneo;

public:
    GeneradorTorneos(Jugador p, int mode);
    void imprimeDatosOponente(std::queue<Enemigo>& colaEnemigos, int i);
    void lanzaCombate(Jugador& prota, std::queue<Enemigo>& colaEnemigos);
    Enemigo parametrosOponente(int x);
};
