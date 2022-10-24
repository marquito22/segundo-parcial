#include <stdio.h>
#include <stdlib.h>
#include "pasajero.h"
#include "vehiculo.h"
#include <string.h>
#define CANT_PASAJEROS 5

struct VehiculoE{
    char marca[20];
    int anio;
    char color[20];
    float promedio;
    Pasajero pasajeros[CANT_PASAJEROS];
};

///CREAMOS Y CARGAMOS VEHICULO
Vehiculo crearVehiculo(){
    Vehiculo v = malloc(sizeof(struct VehiculoE));
    printf("Ingrese la marca del vehiculo\n");
    fflush(stdin);
    gets(v->marca);
    printf("Ingrese el color del vehiculo\n");
    fflush(stdin);
    gets(v->color);
    printf("Ingrese el anio del vehiculo\n");
    scanf("%d",&v->anio);

    v->promedio=-1;

    for(int i;i<CANT_PASAJEROS;i++){
        v->pasajeros[i]=crearPasajeroVacio();
    }
    return v;
};

///PROCEDIMIENTO PARA MOSTRAMOS EL VEHICULO
void mostrarVehiclo(Vehiculo v){
    printf("\n---DATOS DEL VEHICULO\n");
    printf("MARCA: %s --- COLOR: %s --- ANIO: %d --- PROMEDIO DE PASAJEROS: %.2f\n",v->marca,v->color,v->anio,v->promedio);

    printf("\n\n---Datos de los pasajeros\n");
    for(int i=0;i<CANT_PASAJEROS;i++){
        mostrarPasajero(v->pasajeros[i]);
    }

};

///FUNCION PARA CLACULAR EL PROMEDIO DE PASAJEROS
float calcularPromedio(Vehiculo v){
    float promedio;
    float suma=0;
    int contador=0;
    for(int i=0;i<CANT_PASAJEROS;i++){
        if(getEdad(v->pasajeros[i])!= -1){
            suma=suma+getEdad(v->pasajeros[i]);
            contador=i+1;
        }
    }

     promedio=suma/contador;
     v->promedio=promedio;
    return promedio;
};

///FUNCION PARA BUSCAR UNA POSICION VACIA DENTRO DEL ARRAY DE PASAJEROS
int buscarPosVacia(Vehiculo v){
    int posVacia=-1;

    for(int i=0;i<CANT_PASAJEROS;i++){
      if(getEdad(v->pasajeros[i])== -1){
        posVacia=i;
        i=CANT_PASAJEROS+1;
      }
    }
    return posVacia;
}

///PROCEDIMIENTO PARA AGREGAR PASAJEROS AL VEHICULO
void agregarPasajerosAlVehiculo(Vehiculo v,int cantidad){

    for(int i=0;i<cantidad;i++){
        int posVacia=buscarPosVacia(v);
        if(posVacia !=-1){
            v->pasajeros[posVacia]=crearPasajero();

        }
    }
}

///PROCEDIMIENTO PARA ORDENAR A LOS PASAJEROS EN ORDEN ALFABETICO
void ordenarPasajerosPorNombre(Vehiculo v){
    Pasajero aux;
    for(int i=0;i<CANT_PASAJEROS;i++){
        for(int j=0;j<CANT_PASAJEROS-1;j++){
            if(strcmp(getNombre(v->pasajeros[j]),getNombre(v->pasajeros[j+1]))== 1){
                aux = v->pasajeros[j];
                v->pasajeros[j]=v->pasajeros[j+1];
                v->pasajeros[j+1]=aux;
            }
        }
    }

}
