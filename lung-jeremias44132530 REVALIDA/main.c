#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "pasajeros.h"
#include "aviones.h"
#include "viajes.h"

#define CP 20
#define CA 20
#define CV 20
int main()
{
    struct pasajeros v_pas[CP];
    struct aviones v_avi[CA];
    struct viajes v_via[CV];

    int viajes_ingresados=0;
    int pasajeros_ingresados=0;
    int aviones_ingresados=0;
    int num;
    do
    {
        printf("\n--------------MENU PRINCIPAL \n");

        printf("\n--------------OPCION 1: Registrar pasajero \n");

        printf("\n--------------OPCION 2: Mostrar pasajero(s) \n");

        printf("\n--------------OPCION 3: Ordenar pasajeros por nombre (A-Z) \n");

        printf("\n--------------OPCION 4: Ordenar pasajeros por ID (Ascendente) \n");

        printf("\n--------------OPCION 5: Registrar avion \n");

        printf("\n--------------OPCION 6: Mostrar avion(es) \n");

        printf("\n--------------OPCION 7: Quitar avion \n");

        printf("\n--------------OPCION 8: Registrar viaje \n");

        printf("\n--------------OPCION 9: Mostrar viaje(s) \n");

        printf("\n--------------OPCION 10: Liquidar viaje de avion \n");

        printf("\n--------------OPCION 11: Salir\n");

        printf("\nIngrese su numero de opcion: \n");
        scanf("%d", &num);

        switch(num)
        {
        case 1:
            if (pasajeros_ingresados < CP)
            {
                v_pas[pasajeros_ingresados++] = ing_pasajero();
            }
            else
            {
                printf("No hay espacio disponible!\n");
                system("pause");
            }
            break;


        case 2:
            if(pasajeros_ingresados > 0)
            {
                printf("<<<Lista de pasajeros>>>\n");
                for(int i = 0; i < pasajeros_ingresados; i++)
                {
                    printf("\npasajero %d\n", i);
                    mostrar_pasajero(v_pas[i]);
                }
                printf("\n");
            }
            else
            {
                printf("No hay pasajeros ingresados!\n");
            }
            system("pause");


            break;


        case 3:
            if(pasajeros_ingresados > 1)
            {
                ord_alf(v_pas, pasajeros_ingresados);
            }
            else
            {
                printf("No hay suficientes pasajeros para ordenar!\n");
            }
            system("pause");
            break;


        case 4:
            if(pasajeros_ingresados > 1)
            {
                ord_id(v_pas, pasajeros_ingresados);
            }
            else
            {
                printf("No hay suficientes pasajeros para ordenar!\n");
            }
            system("pause");
            break;

        case 5:
            if (aviones_ingresados < CA)
            {
                v_avi[aviones_ingresados++] = ing_avion();
            }
            else
            {
                printf("No hay espacio disponible!\n");
                system("pause");
            }
            break;


        case 6:
            if(aviones_ingresados > 0)
            {
                printf("<<<Lista de aviones>>>\n");
                for(int i = 0; i < aviones_ingresados; i++)
                {
                    printf("\navion %d\n", i);
                    mostrar_avion(v_avi[i]);
                }
                printf("\n");
            }
            else
            {
                printf("No hay aviones ingresados!\n");
            }
            system("pause");
            break;

        case 7:

            break;

        case 8:
            if (viajes_ingresados < CV && aviones_ingresados>0 && pasajeros_ingresados>0)
            {
                v_via[viajes_ingresados++] = ing_viaj();
            }
            else
            {
                printf("Asegurese de haber ingresado un avion y pasajero, verifique la lista de vuelos registrados\n");
                system("pause");
            }
            break;

        case 9:

            break;
        case 10:

            break;
        case 11:
            printf("hasta luego");
            break;
        default:
            printf("NUMERO INGRESADO INCORRECTO");
            break;
        }

    }
    while(num !=11);
    return 0;
}
