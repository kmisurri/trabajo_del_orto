#ifndef VIAJES_H_INCLUDED
#define VIAJES_H_INCLUDED
struct viajes
{
    char codigo[20];
    char origen[20];
    char destino[20];
};

struct viajes ing_viaj();
void mostrar_viaje(struct viajes v);

#endif // VIAJES_H_INCLUDED
