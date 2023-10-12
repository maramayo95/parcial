#include <stdio.h>
#include <string.h>

#ifndef ejercicioDosYTres
#define ejercicioDosYTres
typedef struct{
    char palo;  
    int valor;  
} Carta ;

#define MAX_CARTAS 5


typedef struct {
    Carta vec[MAX_CARTAS];
    int frente;
    int final;
}Mano;

void inicializar(Mano *m){
    m->frente = -1;
    m->final = -1;
}

int esVacia(const Mano *m) {
    return (m->frente == -1 && m->final == -1);
}

int verTope(Mano *m){
    return m->final;
}

int esLlena(Mano *m){
    return m->final <= MAX_CARTAS;
}


void encolarCarta(Mano *m, Carta nuevaCarta) {
    if (!esLlena(m)) {
        m->final++;
        m->vec[m->final] = nuevaCarta;
    } 
}

void desencolarCarta(Mano *m, Carta *carta) {
    if (!esVacia(m)) {
        *carta = m->vec[m->frente];
        m->frente++;
    } 
}

int validarCarta(const Carta *carta) {
    char palosDeseados[] = {'P', 'C', 'D', 'T'};
    int numPalos = sizeof(palosDeseados) / sizeof(palosDeseados[0]);

    int paloValido = 0;
    for (int i = 0; i < numPalos; i++) {
        if (carta->palo == palosDeseados[i]) {
            paloValido = 1;
            break;
        }
    }
    int valorValido = (carta->valor >= 1 && carta->valor <= 13);

    return (paloValido && valorValido);
}

char getPalo(Carta carta) {
    return carta.palo;
}

void setPalo(Carta *carta, char nuevoPalo) {
    carta->palo = nuevoPalo;
}

int getValor(Carta carta) {
    return carta.valor;
}

void setValor(Carta *carta, int nuevoValor) {
    carta->valor = nuevoValor;
}

int esColor(Mano *m) {
    int i;
    int cant_color = 0;
    char ultimo = m->vec[m->final].palo;
    cant_color++;

    for (i = m->frente; i < m->final; i++) {
        desencolarCarta(m, NULL); 
        if (m->vec[m->final].palo == ultimo) {
            cant_color++;
        }
    }

    if (cant_color == 5) {
        return 1;  
    } else {
        return 0; 
    }
}




#endif 