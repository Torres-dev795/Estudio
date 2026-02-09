#pragma once
#include "Tablero.h"
#include "Jugador.h"
#include <vector>

class Partida{
    private:
        Tablero miTablero;
        Jugador *pJugador[2];
        int turno;
    
    public:
        Partida();
        ~Partida();
        void configurar();
        void ejecutar();
        void cambioTurno();
};