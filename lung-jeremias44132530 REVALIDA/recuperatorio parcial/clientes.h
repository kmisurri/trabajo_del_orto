#ifndef CLIENTES_H_INCLUDED
#define CLIENTES_H_INCLUDED
#include <stdbool.h>
#define CC 25

struct cliente
{
    char nombre_emp[41];
    int cuit, telefono;
    char mail[41];

};
struct cliente CLIENTE[CC];

enum {REG_CLI=1,M_CLI,ORD_CLIXNOM,REG_ST,M_ST,ORD_STXPR,ORD_STXPOT,REG_VENT,M_VENT,INF_MONT, SALIR};

bool existe_cli(char nombre[],int cantcli);
void cargar_cli( int cantcli);
void mostrar_cli(int cantcli);
void ordenar_cli(int cantcli);


#endif // CLIENTES_H_INCLUDED
