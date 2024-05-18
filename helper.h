//
// Created by Fran on 18/05/2024.
//
#ifndef EJ4__GUIA2_HELPER_H
#define EJ4__GUIA2_HELPER_H
#define MaxMovimientos 100
typedef struct cuenta
{
    int numeroDeCuentaCte;
    int importe;
    int codigoDeMovimiento;
    struct cuenta *sig;
}Nodo;

typedef struct lista
{
    Nodo * cab;
}Lista;

Nodo *newNodo(int numeroDeCuentaCte,int importe,int codigoDeMovimiento);
Lista *newLista();
void agregarCuentasDelDia(Nodo *nodoAgregado,Lista *lista);
void importeTotal(Lista *lista);

#endif //EJ4__GUIA2_HELPER_H
