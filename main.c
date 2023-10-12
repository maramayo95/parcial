#include <stdio.h>
#include "ejercicioUno.h"
#include "ejercicioDosyTres.h"
#include "ejercicioCuatro.h"

int main()
{
    // EJERCICIO 1
    // char str[] = "soicicreje";

    // int n1 = 1;
    // int n2 = 10;

    // int isValid = validateString(str, n1, n2);
    // printf("%d\n", isValid);

    // reverseSubstring(str, n1, n2);
    // printf("Cadena invertida: %s\n", str);

    // BORRAR POR LAS DUDAS
    // if(isValid == 0){
    //    printf("Los datos ingresados no son validos");
    // } else{
    //     reverseSubstring(str, n1, n2);
    //     printf("Cadena invertida: %s\n", str);
    // }

    // EJERCICIO 2
    ColaCartas mano;
    inicializarCola(&mano);

    // Agregar 5 cartas a la mano usando getters y setters
    for (int i = 0; i < 5; i++) {
        Carta carta;
        establecerPalo(&carta, 'D');
        establecerValor(&carta, i + 1);
        agregarCarta(&mano, carta);
    }

    if (esColor(&mano)) {
        printf("La mano representa un Color en el juego de Poker.\n");
    } else {
        printf("La mano no representa un Color en el juego de Poker.\n");
    }



    // Cola *miCola = crearCola();

    // agregar(miCola, 5);
    // agregar(miCola, 10);
    // agregar(miCola, 15);

    // printf("Frente de la cola: %d\n", verFrente(miCola));

    // while (!esColaVacia(miCola)) {
    //     printf("Elemento removido: %d\n", remover(miCola));
    // }

    // free(miCola);

    return 0;
}