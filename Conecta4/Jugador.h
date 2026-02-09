#pragma once
#include "Tablero.h"

class Jugador{
    protected:
        char ficha;
    
    public:
        Jugador(char f) : ficha(f) {}

        virtual ~Jugador() {}

        virtual int elegirColumna(const Tablero& t) = 0;

        char getFicha() const {return ficha;}

};