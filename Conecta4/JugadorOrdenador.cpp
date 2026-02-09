#include <iostream>
#include <random>
#include "JugadorOrdenador.h"
#include "Tablero.h"

JugadorOrdenador::JugadorOrdenador(char f) : Jugador(f){}

int JugadorOrdenador::elegirColumna(const Tablero& t){

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 6);

    int col;
    bool jugadaValida = false;
    while(!(jugadaValida)){
        col = (distr(gen));
        if(t.colLlena(col)) continue;
        else jugadaValida = true;
    }

    return col;
}

