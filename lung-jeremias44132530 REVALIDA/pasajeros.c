#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pasajeros.h"

struct pasajeros ing_pasajero()
{
    struct pasajeros pasajeros_aux;
    printf("<<<Ingreso de pasajero>>> \n");
    fflush(stdin);
    printf("Ingrese nombre y apellido: \n");
    scanf("%[^\n]", pasajeros_aux.nombreapellido);
    fflush(stdin);
    printf("Ingrese el DNI: \n");
    scanf("%d", &pasajeros_aux.DNI);
    fflush(stdin);

    return pasajeros_aux;
}

void mostrar_pasajero(struct pasajeros p)
{
    printf("\nnombre y apellido:\n %s\n", p.nombreapellido);
    printf("\nDNI:\n %d\n", p.DNI);
}

void ord_alf(struct pasajeros p[], int pos)
{
     struct pasajeros pasajeros_aux;

  for(int i = 0; i < pos - 1; i++)
  {
    for(int j = 0; j < pos - i - 1; j++)
    {
      if( strcmp(p[j].nombreapellido, p[j+1].nombreapellido) > 0)
      {
        pasajeros_aux = p[j];
        p[j] = p[j+1];
        p[j+1] = pasajeros_aux;
      }
    }
  }
  printf("Se han ordenado los clientes alfabeticamente.\n");
}

void ord_id(struct pasajeros p[], int pos)
{
   struct pasajeros pasajeros_aux;

  for(int i = 0; i < pos - 1; i++)
  {
    for(int j = 0; j < pos - i - 1; j++)
    {
      if(p[j].DNI > p[j+1].DNI)
      {
        pasajeros_aux = p[j];
        p[j] = p[j+1];
        p[j+1] = pasajeros_aux;
      }
    }
  }
  printf("Se han ordenado los pasajeros por ID ascendentemente.\n");
}

