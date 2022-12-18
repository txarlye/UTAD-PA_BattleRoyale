#include <iostream>
#include <string>
#include <array>
#include "Ui.h"
#include "Jugador.h"

int main() {

    Ui bienvenida(1);
    std::cout<<"Escribe tu nombre de jugador: "<< std::endl;
    std::string nombreJugador;
    std::cin>>nombreJugador;
    Jugador prota(nombreJugador,100,100);

    Ui modoJuego(2);






    return 0;


}
