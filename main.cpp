#include <iostream>
#include <string>
#include <array>
#include "Ui.h"
#include "Jugador.h"
#include "GeneradorTorneos.h"
#include "RepositorioDeNombres.h"
using namespace std;

void SetUpArmaJugador(Jugador jugador,int mode){
    Ui armeria(3);
    RepositorioDeNombres miArmeria;
    int armaElegida;
    int danioArmaTemp;
    int porcentageDefensivo;
    switch (mode) {
        case 1:
            for(int x=0;x<10;x++){
                cout<<"Arma ["<<x+1<<"]: "<<miArmeria.listaAuxArmasJugadorMode1[x]<<endl;
            }
            cin>>armaElegida;
            break;
        case 2:
            for(int x=0;x<10;x++){
                cout<<"Arma ["<<x+1<<"]: "<<miArmeria.listaAuxArmasJugadorMode2y3[x]<<endl;
            }
            cin>>armaElegida;
            break;
        case 3:
            for(int x=0;x<10;x++){
                cout<<"Arma ["<<x+1<<"]: "<<miArmeria.listaAuxArmasJugadorMode2y3[x]<<endl;
            }
            cin>>armaElegida;
            break;
        default: cout << "Opción no válida" << endl;
    }

    if(mode == 1){
        jugador.setArmaProta(100,100,miArmeria.listaAuxArmasJugadorMode1[armaElegida]);
    } else{
        jugador.setArmaProta(100,100,miArmeria.listaAuxArmasJugadorMode2y3[armaElegida]);
    }
    std::cout<<"-- empieza a afilarlo porque  vamos a empezar " << std::endl;

}


int main() {
    Ui bienvenida(1);
    cout<<"Escribe tu nombre de jugador: "<< endl;
    string nombreJugador;
    cin>>nombreJugador;
    Jugador prota(nombreJugador,100,100);
    Ui modoJuego(2);
    int respuestaModoJuego;
    cin>>respuestaModoJuego;
    SetUpArmaJugador(prota,respuestaModoJuego);

    switch (respuestaModoJuego) {
        case 1:     // SuperHard
            cout << "Preparate " << prota.getName() << " para el modo super Hard \n"  << endl;
            break;
        case 2:   // Mode easy
            cout << "Modo easy? " << prota.getName() << " vamos a ello!! \n" << endl;
            break;
        case 3:   // Mode super easy = superdifícil !!
            cout << "Modo  super easy? " << prota.getName() << " ahora aún más difícil!! \n" << endl;
            break;
        default: cout << "Opción no válida" << endl;
    }
    GeneradorTorneos miTorneo(prota,respuestaModoJuego);





    return 0;
}
