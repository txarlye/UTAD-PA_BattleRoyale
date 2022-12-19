#include <iostream>
#include <string>
#include <array>
#include "Jugador.h"
#pragma once
#include <iostream>
#include <string>
#include "RepositorioDeNombres.h"
using namespace std;

class Ui {

public:
    Ui(int x){
        switch (x) {
            case 1:
                cout<<"************************************" << endl;
                cout<<"Bienvenid@ al juego de Battle Royale" << endl;
                cout<<"************************************" << endl;

                break;
            case 2:
                cout<<"Indica el modo de juego: " <<endl;
                cout<<"(1) Modo super Hard" << endl;
                cout<<"(2) Mode easy" << endl;
                cout<<"(3) Mode super Easy" << endl;
                break;
            case 3:
                cout<<"************************************" << endl;
                cout<<"Vamos a coger un arma de la tienda, alctualmente tenemos estas armas disponibles:"<<endl;
                cout<<"Indica el arma que deseas cuando se imprima la lista [escribe el numero]" << endl;
                break;
            default: cout << "Opción no válida" << endl;
        }
    }

};

