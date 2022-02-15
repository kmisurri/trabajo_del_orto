#ifndef VENTAS_H_INCLUDED
#define VENTAS_H_INCLUDED

struct ventas
{
    int ID;
    char nombre[21];
    float kilogramos;
    float preciofinal;
};
struct ventas VENTA[MAX_VENTAS];
float cargar_venta( int cantidadventas,char nombre[],float precio,float max_kg);
void liquidar_venta(int cantidadventas);




#endif // VENTAS_H_INCLUDED
