#include "Tablero.h"
#include <vector>
#include <iostream>

Tablero::Tablero(){
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            matriz[i][j] = ' ';
        }
    }
    
}

void Tablero::mostrar(){
    std::cout << "\n  1   2   3   4   5   6   7\n";
    std::cout << "-----------------------------\n";
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            std::cout << "| " << matriz[i][j] << " ";
        }
        std::cout << "|\n";
    }
    std::cout << "-----------------------------\n";
}

bool Tablero::insertarFicha(int columna, char jugador){
    if(columna < 1 || columna > 7) return false;
    columna--;
    for (int i = 5; i >= 0; i--)
    {
        if(matriz[i][columna] == ' '){
            matriz[i][columna] = jugador;
            return true;
        }
    }
    return false;
}

bool Tablero::estaLleno(){

    for (int i = 0; i < 7; i++)
    {
        if (matriz[0][i] == ' ') return false;
    }
    return true;
}

bool Tablero::hayGanador(char f){
    //Horizontal
    for (int fila = 0; fila < 6; fila++) {
        for (int columna = 0; columna < 4; columna++) { // Solo hasta col 3
            if (matriz[fila][columna] == f && matriz[fila][columna+1] == f && 
                matriz[fila][columna+2] == f && matriz[fila][columna+3] == f) return true;
        }
    }
    //Vertical
    for (int columna = 0; columna < 7; columna++)
    {
        for (int fila = 0; fila < 3; fila++)
        {
            if (matriz[fila][columna] == f && matriz[fila+1][columna] == f && 
                matriz[fila+2][columna] == f && matriz[fila+3][columna] == f) return true;
        }
    }
    //Diagonal descendente
    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 4; columna++)
        {
            if (matriz[fila][columna] == f && matriz[fila+1][columna+1] == f && 
                matriz[fila+2][columna+2] == f && matriz[fila+3][columna+3] == f) return true;
        }
    }
    //Diagonal ascendente
    for (int fila = 3; fila < 6; fila++) {
        for (int columna = 0; columna < 4; columna++) {
            if (matriz[fila][columna] == f && matriz[fila-1][columna+1] == f && 
                matriz[fila-2][columna+2] == f && matriz[fila-3][columna+3] == f) return true;
        }
    }
    return false;
}
bool Tablero::colLlena(int columna) const {

    return matriz[0][columna] != ' ';

}
