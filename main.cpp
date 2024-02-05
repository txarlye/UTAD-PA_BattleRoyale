#include <iostream>
#include <string>
#include <array>
#include "Ui.h"
#include "Jugador.h"
#include "GeneradorTorneos.h"
#include "RepositorioDeNombres.h"
#include "Utilidades.h"

using namespace std;

int main() {
    system("chcp 65001");
    Ui bienvenida(1);
    cout << "Escribe tu nombre de jugador: " << endl;
    string nombreJugador;
    cin >> nombreJugador;

    
    Jugador prota(nombreJugador, 100, 100);

    Ui modoJuego(2);
    cout << "Selecciona el modo de juego (1, 2, o 3): " << endl;
    int respuestaModoJuego;
    cin >> respuestaModoJuego;

    
    SetUpArmaJugador(prota, respuestaModoJuego);

    // Procesamiento de la respuesta del modo de juego
    switch (respuestaModoJuego) {
    case 1:     // SuperHard
        cout << "Prepárate " << prota.getName() << " para el modo Super Hard.\n" << endl;
        break;
    case 2:     // Mode easy
        cout << "Modo easy? " << prota.getName() << ", vamos a ello!!\n" << endl;
        break;
    case 3:     // Mode super easy = superdifícil !!
        cout << "Modo super easy? " << prota.getName() << ", ahora aún más difícil!!\n" << endl;
        break;
    default:
        cout << "Opción no válida." << endl;
    }

   
    GeneradorTorneos miTorneo(prota, respuestaModoJuego);

    return 0;
}