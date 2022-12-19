#include <iostream>
#include <string>
#include<time.h>
#include "Jugador.h"
#include "Enemigo.h"
#include "Armas.h"
#include <queue>
#include<cstdlib>

using namespace std;

class GeneradorTorneos {
    int numCombates;
    int numAsaltos;
public:
    GeneradorTorneos(Jugador p, int mode);
    std::queue<Enemigo> adversariosTorneo;
    void imprimeDatosOponente(std::queue<Enemigo> queue,int i);
    void lanzaCombate(int posicion, Jugador prota, std::queue<Enemigo> queue);

    Enemigo parametrosOponente(int x,Enemigo enemigo){
        int vida;
        int ataque;
        /******** Seteamos el NOMBRE de nuestro enemigo   ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **/
        RepositorioDeNombres repoTorneo;
        srand(time(NULL));
        int auxRandom = rand()%9;
        enemigo.setName(repoTorneo.listaEnemigos[auxRandom]);
        /******** seteamos Vida, Ataque y Daño   ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **/
        switch (x) {
            case 1:// En mode super hard los enemigos van a tope
                enemigo.setAtaque(100);
                enemigo.setVida(100);
                enemigo.armaEnemigo.setPorcentageDefensivo(100);
                enemigo.armaEnemigo.setdanioGenerado(100);
                break;
            case 2:// En modo easy, los enemigos tienen baja vida confían y bajo ataque
                enemigo.setVida(rand()%(80-20));     //Aleatorio entre 20 y 80%
                enemigo.setAtaque(rand()%(80-20));   //Aleatorio entre 20 y 80%
                enemigo.armaEnemigo.setPorcentageDefensivo(50);
                enemigo.armaEnemigo.setdanioGenerado(50);
                break;
            case 3:// En modo easy, los valores son aún menores
                enemigo.setVida(rand()%(50-10));     //Aleatorio entre 10 y 50%
                enemigo.setAtaque(rand()%(50-10));   //Aleatorio entre 10 y 50%
                enemigo.armaEnemigo.setPorcentageDefensivo(20);
                enemigo.armaEnemigo.setdanioGenerado(20);
                break;
            default: cout << "Opción no válida generando torneo" << endl;
        }

        /******** Seteamos el arma del enemigo ***********************************/
        enemigo.armaEnemigo.setNameArma(repoTorneo.listaArmería[auxRandom]);
        return enemigo;
    };

    int getNumCombates(){
        return numCombates;
    }
    int getNumAsaltos(){
        return numAsaltos;
    }









};
