#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED
struct VehiculoE;
typedef struct VehiculoE * Vehiculo;

///CONSTRUCTOR
Vehiculo crearVehiculo();

///MOSTRAR VEHICULO
void mostrarVehiclo(Vehiculo v);

///CALCULAR PROMEDIO
float calcularPromedio(Vehiculo v);

///AGREGAR PASAJEROS VEHICULO
void agregarPasajerosAlVehiculo(Vehiculo v,int cantidad);

///ORDENAR POR NOMBRE
void ordenarPasajerosPorNombre(Vehiculo v);
#endif // VEHICULO_H_INCLUDED
