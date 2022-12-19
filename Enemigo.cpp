#include "Enemigo.h"




Enemigo::Enemigo( ) : Jugador() {
    int x = rand() % 5;
    //name = listaEnemigos[x];
    /* Genermo mi arma de manera automática */
    int danioGenerado = rand() % 100;
    int porcentageDefensivo = rand() % 100;
    Armas armaEnemigo;
}