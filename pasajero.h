#ifndef PASAJERO_H_INCLUDED
#define PASAJERO_H_INCLUDED

struct PasajeroE;
typedef struct PasajeroE * Pasajero;

///constructores
Pasajero crearPasajero();
Pasajero crearPasajeroVacio();

///Mostrar pasajero
void mostrarPasajero(Pasajero p);

///GETTERS
int getEdad(Pasajero p);
char * getNombre(Pasajero p);

#endif // PASAJERO_H_INCLUDED
