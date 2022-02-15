#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "viajes.h"
#include "pasajeros.h"
#include "aviones.h"

struct viajes ing_viaj(struct aviones av_aux, struct aviones v[], struct pasajeros p[], int pos)
{
    int pasajero_seleccionado=0;
    struct viajes viaj_aux;
    printf("Ingrese el codigo de avion");
    scanf("%[^\n]", viaj_aux.codigo);
    if (viaj_aux.codigo==av_aux.codigo)
    {
        printf("Seleccione un pasajero para el vuelo");
        for(int i = 0; i < pos; i++)
        {
            printf("pasajero %d \n DNI: %d \n", i, p[i].DNI);
        }
        scanf("%d", &pasajero_seleccionado);
        printf("Ingrese el origen del vuelo");
        scanf("%[^\n]", viaj_aux.origen);
        fflush(stdin);
        printf("Ingrese el destino del vuelo");
        scanf("%[^\n]", viaj_aux.destino);
        fflush(stdin);
    }
        else
        {
            printf("Codigo de avion incorrecto");
            system("pause");
        }
        return viaj_aux;
    };
