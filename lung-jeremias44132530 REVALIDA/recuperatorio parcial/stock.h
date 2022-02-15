#ifndef STOCK_H_INCLUDED
#define STOCK_H_INCLUDED
#include <stdbool.h>
#define CS 30

struct stock
{
    char mym[41];
    int anio, pot;
    char nserie[16];
    double preciost;

};
struct stock STOCK[CS];

bool existe_st(char nombre[],int cantst);
bool act_exist_prod(char nombre[],float nuevo_valor,int cantst);
void cargar_st(int cantst);
void mostrar_st(int cantst);
void ordenar_stxpr(int cantst);
void ordenar_stxpot(int cantst);



#endif // STOCK_H_INCLUDED
