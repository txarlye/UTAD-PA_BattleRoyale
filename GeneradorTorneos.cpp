#include "GeneradorTorneos.h"
#include "Enemigo.h"
#include "RepositorioDeNombres.h"
#include<time.h>
#include "stdlib.h"
using namespace std;

void GeneradorTorneos::imprimeDatosOponente(std::queue<Enemigo> colaEnemigos,int i) {
    cout<< " *********************************************** "<< endl;
    cout<<"Tu oponente "<<i+1<<" es "<<colaEnemigos.front().getName()<<" sus datos de combate son "<< endl;
    cout<<"Vida "<<colaEnemigos.front().getvida()<< endl;
    cout<<"Ataque "<<colaEnemigos.front().getataque()<< endl;
    cout<<" Usará un "<<colaEnemigos.front().armaEnemigo.getNameArma()<<" con un % de daño del "<<colaEnemigos.front().armaEnemigo.getDanioGenerado()<< endl;
    cout<<" y con un % defensivo del "<<colaEnemigos.front().armaEnemigo.getDanioPorcentageDefensivo()<< endl;
    cout<< " *********************************************** "<< endl;
}

void GeneradorTorneos::lanzaCombate(int posicion, Jugador prota, std::queue<Enemigo> colaEnemigos) {
    cout<<"Empieza el combate | Pulsa una tecla para  continuar"<<endl;
    cin.get();
    cout<< " *********************************************** "<< endl;
    RepositorioDeNombres listasDeAcciones;
    int aux=posicion;
    while (prota.getvida() >= 0 && colaEnemigos.front().getvida() >= 0) {
        int randomX = rand() % 9;
        string accion1 = listasDeAcciones.LlstaAcionesAntesDDisparo[randomX];
        string accion2 = listasDeAcciones.LlstaAcionesDisparo[randomX];
        if (aux % 2 == 0) { // Ataca Enemigo
            cout << colaEnemigos.front().getName()+accion1+colaEnemigos.front().armaEnemigo.getNameArma()+ accion2 + prota.getName() << endl;
            int nuevaVidaProta = prota.getvida() -( (   colaEnemigos.front().getataque() * colaEnemigos.front().armaEnemigo.getDanioGenerado() * colaEnemigos.front().armaEnemigo.getDanioPorcentageDefensivo()  ) / (prota.getvida() * prota.getataque() *  8) );
            prota.setVida(nuevaVidaProta);
            cout << "Tras el ataque a " << prota.getName() << " tiene " << prota.getvida() << " de vida" << endl;
            /***************Comprobamos si alguno ha muerto*************************************************************/
            if (prota.getvida() < 0) {
                cout << "Has perdido !!, el ganador es el " << colaEnemigos.front().getName() << endl;
                // Claro, no sé porqué no puedo salir aunque ponga cualquier forma de exit... desde mac nada
                exit(EXIT_SUCCESS);
            }
        }else{                  //Ataca prota
            cout << prota.getName() + accion1 + colaEnemigos.front().armaEnemigo.getNameArma()+ accion2 +colaEnemigos.front().getName() << endl;
            int aa =prota.getvida() * colaEnemigos.front().armaEnemigo.getDanioPorcentageDefensivo() * prota.armaJugador.getDanioPorcentageDefensivo();
            int bb=prota.armaJugador.getDanioGenerado() * prota.getataque();
            //int nuevaVidaEnemigo = colaEnemigos.front().getvida() - ((aa/bb)/8);
            int nuevaVidaEnemigo = colaEnemigos.front().getvida() * prota.getArma().getDanioGenerado() / 100;
            colaEnemigos.front().setVida(nuevaVidaEnemigo);
            cout << "Tras el ataque a " << colaEnemigos.front().getName() << " tiene " << colaEnemigos.front().getvida() << " de vida" << endl;

            /***************Comprobamos si alguno ha muerto *************************************************************/
            if (colaEnemigos.front().getvida() < 0) {
                cout << "Has ganado !!"<< endl;

                exit(EXIT_SUCCESS);
            }
        }
        aux++;



    }

}

GeneradorTorneos::GeneradorTorneos(Jugador p, int mode) {
    numAsaltos = 10;
    int numCombates;
    int contador = 0;

    switch (mode) {

        case 1: // El mode Super Hard crea 5 enenmigos con ataque al 100%
            numCombates = 5;
            for (int i = 0; i < 5; i++) {
                Enemigo enemigoPartida;
                /***** Asignamos valores a enemigos:
                 * parametrosOponente se encarga de setear vida y ataque en Enemigo y de su arma **/
                enemigoPartida = parametrosOponente(mode, enemigoPartida);
                adversariosTorneo.push(enemigoPartida);
            }
            break;
        case 2:

            break;
        case 3:

            break;
        default:
            cout << "Opción no válida generando torneo" << endl;
    }

    /*+++++++++++++++++++ LANZAMOS LOS COMBAES ++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    for (int i = 0; i < adversariosTorneo.size(); i++) {
        imprimeDatosOponente(adversariosTorneo, i);
        lanzaCombate(i, p, adversariosTorneo);

    }

}

