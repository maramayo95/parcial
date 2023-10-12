    #include <stdio.h>
    #include <stdlib.h>

    #ifndef COLA
    #define COLA
    
#define MAX_COLA 100

typedef struct {
    int datos[MAX_COLA];
    int frente; 
    int fondo;  
} Cola;

Cola *crearCola() {
    Cola *nuevaCola = (Cola *)malloc(sizeof(Cola));
    if (nuevaCola == NULL) {
        printf("Error: no se pudo asignar memoria para la cola.\n");
        exit(1);
    }
    nuevaCola->frente = 0;
    nuevaCola->fondo = -1;
    return nuevaCola;
}

void agregar(Cola *cola, int dato) {
    if (cola->fondo < MAX_COLA - 1) {
        cola->fondo++;
        cola->datos[cola->fondo] = dato;
    } else {
        printf("Error: la cola está llena. No se pueden agregar más elementos.\n");
        exit(1);
    }
}

int remover(Cola *cola) {
    if (cola->frente > cola->fondo) {
        printf("Error: la cola está vacía. No se pueden remover elementos.\n");
        exit(1);
    }
    int dato = cola->datos[cola->frente];
    for (int i = 0; i < cola->fondo; i++) {
        cola->datos[i] = cola->datos[i + 1];
    }
    cola->fondo--;
    return dato;
}

int esColaVacia(Cola *cola) {
    return (cola->frente > cola->fondo);
}

int verFrente(Cola *cola) {
    if (cola->frente > cola->fondo) {
        printf("Error: la cola está vacía. No se puede ver el frente.\n");
        exit(1);
    }
    return cola->datos[cola->frente];
}
#endif