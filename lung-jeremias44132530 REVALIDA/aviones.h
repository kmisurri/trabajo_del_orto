#ifndef AVIONES_H_INCLUDED
#define AVIONES_H_INCLUDED
#define CA 20


struct aviones
{
    char codigo[20];
    int asientos;
    char desc[200];
};

struct aviones ing_avion();
void mostrar_avion(struct aviones a);




#endif // AVIONES_H_INCLUDED
