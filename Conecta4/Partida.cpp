#include <iostream>
#include "Partida.h"
#include "JugadorHumano.h"
#include "JugadorOrdenador.h"

Partida::Partida() : turno(0){}

Partida::~Partida() {
    delete pJugador[0];
    delete pJugador[1];
}

void Partida::configurar(){
    int eleccion;

    std::cout << "Jugar contra CPU(1)\n" << "Jugar contra otro Jugador(2)\n";
    
    while(true){
        if (!(std::cin >> eleccion)) {
            std::cout << "Error: ¡Introduce un numero valido!\n";
            std::cin.clear(); 
            std::cin.ignore(10000, '\n');
            continue;
        }
        if (eleccion < 1 || eleccion >2){
            continue;
        }
        break;
    }
    pJugador[0] = new JugadorHumano('X');
    if(eleccion == 1) pJugador[1] = new JugadorOrdenador('O');
    else if(eleccion == 2) pJugador[1] = new JugadorHumano('O');
}

void Partida::cambioTurno(){
    if (this->turno == 0) {this->turno = 1;}
    else {this->turno = 0;}
}

void Partida::ejecutar(){
    int col;
    char f1 = pJugador[0]->getFicha();
    char f2 = pJugador[1]->getFicha();
    bool ganador = false;
    miTablero.mostrar();
    while(!(miTablero.estaLleno())){
        if (this->turno == 0)
        {
            col = pJugador[0]->elegirColumna(miTablero);
            miTablero.insertarFicha(col, f1);
            miTablero.mostrar();
            if(miTablero.hayGanador(f1)){
                std::cout << "Jugador 1 ha ganado!!!\n";
                ganador = true;
                break;
            }
            cambioTurno();
            continue;
        }
        if (this->turno == 1)
        {
            col = pJugador[1]->elegirColumna(miTablero);
            miTablero.insertarFicha(col, f2);
            miTablero.mostrar();
            if(miTablero.hayGanador(f2)){
                std::cout << "Jugador 2 ha ganado!!!\n";
                ganador = true;
                break;
            }
            cambioTurno();
            continue;
        }
    }
    if(miTablero.estaLleno() && !ganador) std::cout << "EMPATE\n";
}