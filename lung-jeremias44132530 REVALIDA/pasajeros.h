#ifndef PASAJEROS_H_INCLUDED
#define PASAJEROS_H_INCLUDED

struct pasajeros
{
    char nombreapellido[40];
    int DNI;
    int ID[20];
};
struct pasajeros ing_pasajero();
void mostrar_pasajero(struct pasajeros p);
void ord_alf(struct pasajeros p[], int pos);
void ord_id(struct pasajeros p[], int pos);


#endif // PASAJEROS_H_INCLUDED
