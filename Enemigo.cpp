#include "Enemigo.h"




Enemigo::Enemigo( ) : Jugador() {
    int x = rand() % 5;
    int danioGenerado = rand() % 100;
    int porcentageDefensivo = rand() % 100;
    Armas armaEnemigo;
}

Enemigo::Enemigo(const std::string& nombre, int vida, int ataque)
    : Jugador(nombre, vida, ataque) {

}