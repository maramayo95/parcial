#include <stdio.h>
#include <string.h>

#ifndef ejercicioDosYTres
#define ejercicioDosYTres

typedef struct {
    char palo;
    int valor;
} Carta;

#define MAX_CARTAS 5

typedef struct {
    Carta cartas[MAX_CARTAS];
    int frente;
    int fin;
} ColaCartas;

void inicializarCola(ColaCartas *cola) {
    cola->frente = 0;
    cola->fin = -1;
}

int colaVacia(ColaCartas *cola) {
    return cola->fin < cola->frente ? 1 : 0;
}

void agregarCarta(ColaCartas *cola, Carta carta) {
    if (cola->fin < MAX_CARTAS - 1) {
        cola->cartas[++cola->fin] = carta;
    }
}

char obtenerPalo(Carta carta) {
    return carta.palo;
}

void establecerPalo(Carta *carta, char nuevoPalo) {
    carta->palo = nuevoPalo;
}

int obtenerValor(Carta carta) {
    return carta.valor;
}

void establecerValor(Carta *carta, int nuevoValor) {
    carta->valor = nuevoValor;
}

int esColor(ColaCartas *mano) {
    if (mano->fin < mano->frente) {
        return 0; 
    }

    char palo = obtenerPalo(mano->cartas[mano->frente]);

    for (int i = mano->frente + 1; i <= mano->fin; i++) {
        if (obtenerPalo(mano->cartas[i]) != palo) {
            return 0; 
        }
    }

    return 1; 
}


#endif 