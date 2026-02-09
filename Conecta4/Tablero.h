#pragma once

class Tablero {

private:
    char matriz[6][7];

public:
    Tablero();
    void mostrar();
    bool insertarFicha(int columna, char jugador);
    bool hayGanador(char ficha);
    bool estaLleno();
    bool colLlena(int columna) const;
};