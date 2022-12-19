#pragma once
#include <iostream>
#include <string>
using namespace std;

class RepositorioDeNombres {


public:
    /***********LISTA DE ENEMIGOS & ARMAS DE ENEMIGOS ************/
    string listaEnemigos[8] = {"La bruja Lola", "Conde Mor", "Payaso Loco", "Vampiro", "El vecino chungo","Asesino", "Ogro", "monstruo de dos cabezas"};
    string listaArmería[11] = { "machete", "navaja", "clip de despacho","Botella rota", "bazoka", "puñal", "revolver", "rifle", "escopeta", "tampón","brazo ortopedico"};

    /***********DIÁLOGOS PARA EL COMBATE *************************/
    string LlstaAcionesAntesDDisparo[9]={" se avalanza con su gran ", " saca brillo a su "," recarga su ", " te lanza su ", " apunta con su ",
                                                                " balancea su ", "y encañoña a "," se  cambia de  mano la ", "saca de su bolsillo el "};
    string LlstaAcionesDisparo[9]{" y dispara a ", " y la lanza a ", " y se la clava a "," e intimida a  ", " y se burla de ", " y escupe a ",
                                                          " y maldice a ", " y seduce a ", " y le pregunta la hora a "};

    /***********ARMERIA PARA EL JUGADOR *************************/
    string listaAuxArmasJugadorMode1[11]    = { "clip oxidado", "palillo", "sandwich de chorizo","platano", "pepino", "baso de chupito", "palo", "piedra", "hueso", "el elastico del calzoncillo","brazo ortopedico"};
    string listaAuxArmasJugadorMode2y3[11]  = { "barra de metal", "palo de golf", "bate de beisbol","lanza", "lanzallamas", "bazooka", "ametralladora", "cañon", "tijeras", "rifle de asalto","bomba"};








    string getListaEnemigos(){
        return listaEnemigos[listaEnemigos->size()];
    }
    string getListaArmas(){
        return listaArmería[listaArmería->size()];
    }
    string getLlstaAcionesAntesDDisparo(){
        return LlstaAcionesAntesDDisparo[LlstaAcionesAntesDDisparo->size()];
    }
    string getLlstaAcionesDisparo(){
        return LlstaAcionesDisparo[LlstaAcionesDisparo->size()];
    }


};
