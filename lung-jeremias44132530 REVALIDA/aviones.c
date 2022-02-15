#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aviones.h"

struct aviones ing_avion()
{
    struct aviones av_aux;
    printf("<<<Ingreso de avion>>> \n");
    fflush(stdin);
    printf("Ingrese el codigo del avion \n");
    scanf("%[^\n]", av_aux.codigo);
    fflush(stdin);
    printf("Ingrese la cantidad de asientos del avion \n");
    scanf("%d", &av_aux.asientos);
    fflush(stdin);
    printf("Ingrese una descripcion del avion \n");
    scanf("%[^\n]", av_aux.desc);
    fflush(stdin);
    return av_aux;
}

void mostrar_avion(struct aviones a)
{
    printf("\ncodigo del avion: %s", a.codigo);
    printf("\ncantidad de asientos: %d", a.asientos);
    printf("\ndescripcion: %s", a.desc);
}



