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
Mano miMano;
inicializar(&miMano);

Carta carta1;
setPalo(&carta1, 'P');
setValor(&carta1, 10);

Carta carta2;
setPalo(&carta2, 'P');
setValor(&carta2, 2);

Carta carta3;
setPalo(&carta3, 'P');
setValor(&carta3, 1);

Carta carta4;
setPalo(&carta4, 'P');
setValor(&carta4, 4);

Carta carta5;
setPalo(&carta5, 'P');
setValor(&carta5, 8);

encolarCarta(&miMano, carta1);
encolarCarta(&miMano, carta2);
encolarCarta(&miMano, carta3);
encolarCarta(&miMano, carta4);
encolarCarta(&miMano, carta5);

if (esColor(&miMano)) {
    printf("La mano representa un Color en el juego de Poker.\n");
} else {
    printf("La mano no representa un Color.\n");
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