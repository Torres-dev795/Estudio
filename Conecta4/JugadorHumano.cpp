#include <iostream>
#include "JugadorHumano.h"
#include "Tablero.h"

JugadorHumano::JugadorHumano(char f) : Jugador(f){}

int JugadorHumano::elegirColumna(const Tablero& t){

    int col;
    bool jugadaValida = false;

    while (!jugadaValida) {
        std::cout << "Jugador (" << ficha << "), elige columna (1-7): ";
        
        if (!(std::cin >> col)) {
            std::cout << "Error: ¡Introduce un numero valido!\n";
            std::cin.clear(); 
            std::cin.ignore(10000, '\n');
            continue;
        }

        if (col < 1 || col > 7) {
            std::cout << "Error: Numero fuera de rango. Elige entre 1 y 7.\n";
        } 
        else if (t.colLlena(col - 1)) {
            std::cout << "Error: La columna " << col + 1 << " esta llena.\n";
        } 
        else {
            jugadaValida = true;
        }
    }
    return col;
}