#include <iostream>
#include <string>
#include <array>
#include "Jugador.h"


class Ui {

public:
    Ui(int x){
        /** BIENVENIDA AL PROGRAMA Y PREGUNTAMOS USUARIO**/
        switch (x) {
            case 1:
                std::cout<<"************************************" << std::endl;
                std::cout<<"Bienvenid@ al juego de Battle Royale" << std::endl;
                std::cout<<"************************************" << std::endl;

                break;
            case 2:
                std::cout<<"Indica el modo de juego: " <<std::endl;
                std::cout<<"(1) Modo super Hard" << std::endl;
                std::cout<<"(2) tú contra dos o tres" << std::endl;
                std::cout<<"(3) Mode super Easy" << std::endl;
                break;
            case 3:

                break;
            default: std::cout << "Opción no válida" << std::endl;
        } //Fin de switch
    }

    int modoJuego(Jugador protagonista){
        int x;
        std::cin>>x;
        switch (x) {
            case 1: std::cout << "Preparate " << protagonista.getName() << " para el modo super Hard \n"  << std::endl;
                return x;
                break;
            case 2: std::cout << "Preparate " << protagonista.getName() << " para combates contra 2 o 3 enemigos! \n" << std::endl;
                return x;
                break;
            case 3: std::cout << "Mode easy? no no no.... vamos con el mode Gore xD" << std::endl;
                return x;
                break;
            default: std::cout << "Opción no válida" << std::endl;
        } //Fin de switch
    }
};

