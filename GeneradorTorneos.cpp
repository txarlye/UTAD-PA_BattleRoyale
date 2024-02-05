#include "GeneradorTorneos.h"
#include "RepositorioDeNombres.h"
#include <time.h>
#include <stdlib.h>
#include <algorithm>  

using namespace std;

GeneradorTorneos::GeneradorTorneos(Jugador p, int mode) {
    srand(time(NULL)); // Inicializa la semilla de rand
    switch (mode) {
    case 1: // Modo Super Hard
        numCombates = 5;
        break;
    case 2: // Modo Easy
        numCombates = 3;
        break;
    case 3: // Modo Super Easy
        numCombates = 2;
        break;
    default:
        cout << "Opción no válida generando torneo" << endl;
        return;
    }

    for (int i = 0; i < numCombates; i++) {
        Enemigo enemigoPartida = parametrosOponente(mode);
        adversariosTorneo.push(enemigoPartida);
    }

    lanzaCombate(p, adversariosTorneo);
}

void GeneradorTorneos::imprimeDatosOponente(std::queue<Enemigo>& colaEnemigos, int i) {
    if (!colaEnemigos.empty()) {
        cout << " *********************************************** " << endl;
        cout << "Tu oponente " << i + 1 << " es " << colaEnemigos.front().getName() << " sus datos de combate son " << endl;
        cout << "Vida: " << colaEnemigos.front().getvida() << endl;
        cout << "Ataque: " << colaEnemigos.front().getataque() << endl;
        cout << "Usará un " << colaEnemigos.front().armaEnemigo.getNameArma() << " con un % de daño del " << colaEnemigos.front().armaEnemigo.getDanioGenerado() << endl;
        cout << "y con un % defensivo del " << colaEnemigos.front().armaEnemigo.getDanioPorcentageDefensivo() << endl;
        cout << " *********************************************** " << endl;
    }
}

void GeneradorTorneos::lanzaCombate(Jugador& prota, std::queue<Enemigo>& colaEnemigos) {
    int round = 0;
    while (!colaEnemigos.empty()) {
        imprimeDatosOponente(colaEnemigos, round); 
        cout << "¡Has ganado el combate contra " << colaEnemigos.front().getName() << "!" << endl;
        colaEnemigos.pop();
        round++;
    }
    cout << "¡Has ganado el torneo!" << endl;
}

Enemigo GeneradorTorneos::parametrosOponente(int x) {
    RepositorioDeNombres repoTorneo;
    int auxRandom = rand() % 9;
    Enemigo enemigo(repoTorneo.listaEnemigos[auxRandom], rand() % 101, rand() % 101); // Vida y ataque aleatorios
    enemigo.armaEnemigo.setNameArma(repoTorneo.listaArmería[auxRandom]);
    enemigo.armaEnemigo.setDanioGenerado(rand() % 101);
    enemigo.armaEnemigo.setPorcentageDefensivo(rand() % 101);
    return enemigo;
}
