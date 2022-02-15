#include <stdio.h>
#include <stdlib.h>
#include "clientes.h"
#include "stock.h"
#include "ventas.h"
#include <string.h>
#include <stdbool.h>

int main()
{
    int menu;

    int cantcli=0;
    int cantst=0;
    int cantvent=0;

    do
    {
        printf("SELECCIONE UNA OPCION: \n");
        printf("---- 1)Registar cliente ---- \n");
        printf("---- 2)Mostrar cliente(s) ---- \n");
        printf("---- 3)Ordenar clientes por nombre ---- \n");
        printf("---- 4)Registrar stock ---- \n");
        printf("---- 5)Mostrar stock ---- \n");
        printf("---- 6)Ordenar stock por precio ----\n");
        printf("---- 7)Ordenar stock por potencia (kW) ---- \n");
        printf("---- 8)Registrar ventas ---- \n");
        printf("---- 9)Mostrar ventas ---- \n");
        printf("---- 10)Mostrar dinero ingresado por ventas ---- \n");
        printf("---- 11)Salir del programa ---- \n");
        fflush(stdin);
        scanf(" %d",&menu);
        fflush(stdin);
        switch(menu)
        {
        case REG_CLI:

            cargar_cli(cantcli);
            cantcli++;
            system("pause");

            break;

        case M_CLI:

            mostrar_cli(cantcli);
            system("pause");
            break;

        case ORD_CLIXNOM:
            ordenar_cli(cantcli);
            system("pause");
            break;

        case REG_ST:
            cargar_st(cantst);
            cantst++;
            system("pause");
            break;

        case M_ST:
            mostrar_st(cantst);
            system("pause");
            break;

        case ORD_STXPR:
            ordenar_stxpr(cantst);
            system("pause");
            break;

        case ORD_STXPOT:
            ordenar_stxpot(cantst);
            system("pause");
            break;

        case REG_VENT:


            system("pause");*/
            break;

        case M_VENT:
                break;

        case INF_MONT:
                break;
        case SALIR:
            printf("Hasta luego! \n");

            break;

        default:
            printf("LOS DATOS INGRESADOS SON INCORRECTOS, POR FAVOR INGRESELOS CORRECTAMENTE !\n\n");
            system("pause");
        }


    }
    while(menu!=11);
    return 0;
}
