#include <iostream>
#include "Partida.h"
#include "JugadorHumano.h"
#include "JugadorOrdenador.h"
#include "Tablero.h"


int main(){

    Partida miPartida;
    miPartida.configurar();
    miPartida.ejecutar();
    
    return 0;
}