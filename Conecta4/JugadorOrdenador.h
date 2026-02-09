#pragma once
#include "Jugador.h"
#include "Tablero.h"

class JugadorOrdenador : public Jugador{
    public:
        JugadorOrdenador(char ficha);

        int elegirColumna(const Tablero& miTablero) override;
};