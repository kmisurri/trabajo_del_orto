#include <stdio.h>
#include <stdlib.h>
#include "clientes.h"
#include "stock.h"
#include "ventas.h"
#include <string.h>
#include <stdbool.h>


void cargar_cli(int cantcli)
{


    if(cantcli<CC)
    {

        printf("<<<INGRESO DE CLIENTE>>>\n");
        printf("\nIngrese el nombre del cliente: ");
        fflush(stdin);
        gets(CLIENTE[cantcli].nombre_emp);
        fflush(stdin);
        printf("\nIngrese el cuit del cliente: ");
        fflush(stdin);
        scanf("%d", &CLIENTE[cantcli].cuit);
        fflush(stdin);
        printf("\nIngrese el numero telefonico del cliente: ");
        fflush(stdin);
        scanf(" %d",&CLIENTE[cantcli].telefono);
        fflush(stdin);
        printf("\nIngrese el mail del cliente: ");
        fflush(stdin);
        gets(CLIENTE[cantcli].mail);
        fflush(stdin);

    }


}

void mostrar_cli( int cantcli)
{

    if (cantcli==0)
    {
        printf("NO HAY CLIENTES\n");
        system("pause");
    }

    for(int i=0 ; i<cantcli ; i++)
    {
        printf("Cliente [%d] %s\n",i,CLIENTE[i].nombre_emp);
        printf("Cuit: %d\n",CLIENTE[i].cuit);
        printf("Telefono: %d\n",CLIENTE[i].telefono);
        printf("Mail: %s\n", CLIENTE[i].mail);
    }



}

void ordenar_cli( int cantcli)
{

    struct cliente aux;
    for(int i=0; i<cantcli-1; i++)
    {

        for(int j=0; j<cantcli-i-1; j++)

        {
            if(strcmp(CLIENTE[j].nombre_emp,CLIENTE[j+1].nombre_emp)>0)
            {
                aux=CLIENTE[j];
                CLIENTE[j]=CLIENTE[j+1];
                CLIENTE[j+1]=aux;
            }
        }
    }

    printf("Clientes ordenados alfabeticamente\n");




}
bool existe_cliente(char nombre[],int cantcli)
{
    for(int i=0; i<cantcli; i++)
    {
        if(strcmp(nombre,CLIENTE[i].nombre_emp)==0)
        {
            return true;
        }
    }
    return false;


}
