
#include "helper.h"

int main()
{
    Nodo *MovA= newNodo(001,350,1);
    Nodo *MovB= newNodo(002,100,2);
    Nodo *MovC= newNodo(003,200,1);
    Nodo *MovD= newNodo(004,200,2);
    Lista *lista=newLista();
    agregarCuentasDelDia(MovA,lista);
    agregarCuentasDelDia(MovB,lista);
    agregarCuentasDelDia(MovC,lista);
    agregarCuentasDelDia(MovD,lista);
    importeTotal(lista);
    return 0;
}
