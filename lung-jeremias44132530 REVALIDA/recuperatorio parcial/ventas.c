#include <stdio.h>
#include <stdlib.h>
#include "clientes.h"
#include "stock.h"
#include "ventas.h"
#include <string.h>
#include <stdbool.h>


float cargar_venta( int cantidadventas,char nombre[],float precio,float max_kg)
{
    float kg;
    float precioventa;

}


void liquidar_venta( int cantidadventas)
{
    int ID_ventas;
    printf("ID  NOMBRE                 PRECIO");

    for(int i=0; i<cantidadventas; i++)
    {
        printf("\n%2d  %-20s  %.2f ",VENTA[i].ID,
               VENTA[i].nombre,
               VENTA[i].preciofinal);


    }

    printf("\n\n INGRESE EL ID  DESEADO: ");
    scanf("%d",&ID_ventas);
    printf("\n\nVENTA REALIZADA CON EXITO\n");
    printf("ID DE LA VENTA:  %d\n",VENTA[ID_ventas].ID);
    printf("NOMBRE DEL PRODUCTO: %s\n",VENTA[ID_ventas].nombre);
    printf("kg: %.2f\n",VENTA[ID_ventas].kilogramos);
    printf("PRECIO FINAL:  %.2f\n",VENTA[ID_ventas].preciofinal);

    for(int i=ID_ventas;i<cantidadventas;i++)
    {
        VENTA[i]=VENTA[i+1];
        VENTA[i].ID--;

    }

}


