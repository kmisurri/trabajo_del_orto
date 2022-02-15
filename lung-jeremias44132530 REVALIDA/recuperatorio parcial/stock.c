#include <stdio.h>
#include <stdlib.h>
#include "clientes.h"
#include "stock.h"
#include "ventas.h"
#include <string.h>
#include <stdbool.h>


void cargar_st(int cantst)
{

    int i=cantst;
    printf("\nIngrese marca y modelo: ");
    fflush(stdin);
    gets(STOCK[i].mym);
    fflush(stdin);
    printf("\nIngrese a%co del producto: ", 164);
    fflush(stdin);
    scanf(" %d",&STOCK[i].anio);
    fflush(stdin);
    printf("\nIngrese potencia en kW del producto: ");
    fflush(stdin);
    scanf(" %d",&STOCK[i].pot);
    fflush(stdin);
    printf("\nIngrese el numero de serie del producto: ");
    fflush(stdin);
    gets(STOCK[i].nserie);
    fflush(stdin);
    printf("\nIngrese el precio del producto: ");
    fflush(stdin);
    scanf(" %lf", &STOCK[i].preciost);
    fflush (stdin);

}

void mostrar_st( int cantst)
{


    if(cantst==0)
    {
        printf("DEBE INGRESAR LOS STOCKS\n");
        system("pause");
    }

    for(int i=0 ; i<cantst ; i++)
    {
        printf("STOCK [%d] %s\n",i,STOCK[i].mym);
        printf("a%co: %d\n",164, STOCK[i].anio);
        printf("potencia: %d\n",STOCK[i].pot);
        printf("numero de serie: %s\n", STOCK[i].nserie);
        printf("precio: %f\n", STOCK[i].preciost);
    }



}

void ordenar_stxpr(int cantst)
{

    if(cantst==0)
    {
        printf("DEBE INGRESAR LOS PRODUCTOS\n");
        system("pause");
    }



    int i,j,min ;
    struct stock aux;
    for ( i=0; i<cantst ; i++)
    {
        min = i;

        for ( j=i+1 ; j<cantst; j++)
        {
            if ( STOCK[j].preciost < STOCK[min].preciost)
            {
                min = j;

            }
        }
        aux = STOCK[i];
        STOCK[i] = STOCK[min];
        STOCK[min] = aux;

    }
    printf("Se han ordenado los productos por precio\n");



}
void ordenar_stxpot(int cantst)
{

    if(cantst==0)
    {
        printf("DEBE INGRESAR LOS PRODUCTOS\n");
        system("pause");
        system("cls");
    }



    int i,j,min ;
    struct stock aux;
    for ( i=0; i<cantst ; i++)
    {
        min = i;

        for ( j=i+1 ; j<cantst; j++)
        {
            if ( STOCK[j].pot < STOCK[min].pot)
            {
                min = j;

            }
        }
        aux = STOCK[i];
        STOCK[i] = STOCK[min];
        STOCK[min] = aux;

    }
    printf("Se han ordenado los productos por precio\n");



}
bool existe_prod(char nombre[],int cantst)
{
    for(int i=0; i<cantst; i++)
    {
        if(strcmp(nombre,STOCK[i].mym)==0)
        {
            return true;
        }
    }

    return false;
}

/*float precio_prod(char nombre[],int cantst)
{


    for(int i=0; i<cantst; i++)
    {
        if(strcmp(nombre,STOCK[i].nombre)==0)
        {
            return STOCK[i].precio*1.35;
        }
    }

    return 0;

}*/
