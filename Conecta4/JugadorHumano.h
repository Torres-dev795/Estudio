#pragma once
#include "Jugador.h"
#include "Tablero.h"

class JugadorHumano : public Jugador{
    public:
        JugadorHumano(char ficha);

        int elegirColumna(const Tablero& miTablero) override;
};