#include <stdio.h>
#include <stdlib.h>
#include "pasajero.h"
#include <string.h>
struct PasajeroE{
    char nombre[30];
    int edad;
    int posicion;
};

///FUNCION PARA CARGAR AL PASAJERO
Pasajero crearPasajero(){

    Pasajero p = malloc(sizeof(struct PasajeroE));

    printf("Ingrese el nombre del pasajero\n");
    fflush(stdin);
    gets(p->nombre);
    printf("ingrese la edad del pasajero\n");
    scanf("%d",&p->edad);
    printf("ingrese la posicion del pasajero\n");
    scanf("%d",&p->posicion);

    return p;
};

///FUNCION PARA CREAR UN PASAJERO SIN DATOS
Pasajero crearPasajeroVacio(){
    Pasajero p = malloc(sizeof(struct PasajeroE));

    strcpy(p->nombre,"VACIO");
    p->edad=-1;
    p->posicion=-1;

    return p;
};

///PROCEDIMIENTO PRA MOSTRAR AL PASAJERO
void mostrarPasajero(Pasajero p){
    if(p->edad != -1){
        printf("NOMBRE: %s --- EDAD: %d --- Posicion: %d\n",p->nombre,p->edad,p->posicion);
    }
};

///GETTERS
int getEdad(Pasajero p){
    return p->edad;
};
char * getNombre(Pasajero p){
    return p->nombre;
};


