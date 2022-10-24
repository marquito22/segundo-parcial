#include <stdio.h>
#include <stdlib.h>
#include "pasajero.h"
#include "vehiculo.h"
int main()
{
    Vehiculo v1=crearVehiculo();

    mostrarVehiclo(v1);

    agregarPasajerosAlVehiculo(v1,2);

    calcularPromedio(v1);

    ordenarPasajerosPorNombre(v1);

    mostrarVehiclo(v1);

    agregarPasajerosAlVehiculo(v1,4);

     calcularPromedio(v1);

    ordenarPasajerosPorNombre(v1);

    mostrarVehiclo(v1);

    return 0;
}
