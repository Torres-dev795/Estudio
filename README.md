🔴 Conecta 4 - C++ Edition 🟡

Un motor de juego clásico de Conecta 4 desarrollado en C++, aplicando principios de Programación Orientada a Objetos (POO), herencia y polimorfismo.

🚀 Características :
Modo de Juego: Jugador contra Jugador (Humano) o contra la IA (Ordenador).

IA Aleatoria: Implementada con la librería <random> y el motor mt19937.

Gestión de Tablero: Sistema de detección de victorias (horizontal, vertical y diagonal) y control de gravedad de fichas.

Diseño Robusto: Validación de entradas de usuario para evitar cierres inesperados.

🛠️ Requisitos Técnico (POO)
El proyecto utiliza una arquitectura de clases bien definida:

Tablero: Gestiona la matriz de 6×7, la inserción de fichas y las condiciones de victoria.

Jugador (Clase Base Abstracta): Define la interfaz para cualquier tipo de jugador.

JugadorHumano: Implementa la interacción por consola.

JugadorOrdenador: Implementa la lógica de movimiento automático.

💻 Compilación y Ejecución
Para compilar el proyecto desde la terminal, utiliza el siguiente comando (asegúrate de incluir todos los archivos .cpp):
g++ main.cpp Tablero.cpp Jugador.cpp JugadorHumano.cpp JugadorOrdenador.cpp -o conecta4

Para iniciar el juego:
./conecta4

🎮 Cómo jugar
El juego comienza con un tablero vacío.

Cada jugador elige una columna del 1 al 7.

La ficha caerá hasta la posición más baja disponible en esa columna.

Objetivo: Alinear 4 fichas consecutivas antes que tu oponente.

Si el tablero se llena sin un ganador, la partida termina en Empate.

