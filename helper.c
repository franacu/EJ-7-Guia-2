//
// Created by Fran on 18/05/2024.
//
#define MaxMovimientos 100
#include "helper.h"
#include "stdlib.h"
#include "stdio.h"
Nodo *newNodo(int numeroDeCuentaCte,int importe,int codigoDeMovimiento)
{
    Nodo *aux=malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        printf("Error\n");
        return NULL;
    }else
        {
            aux->numeroDeCuentaCte=numeroDeCuentaCte;
            aux->importe=importe;
            aux->codigoDeMovimiento=codigoDeMovimiento;
            aux->sig=NULL;
            return aux;
        }
}
Lista *newLista()
{
    Lista *aux=malloc(sizeof(Lista));
    if(aux==NULL)
    {
        printf("Error\n");
        return NULL;
    }else
    {
        aux->cab=NULL;
        return aux;
    }
}
void agregarCuentasDelDia(Nodo *nodoAgregado,Lista *lista)
{
    int cont=0;
    if(lista->cab==NULL)
    {
        lista->cab=nodoAgregado;
    }else
        {
            Nodo *aux=lista->cab;
            while(aux->sig!=NULL && cont<MaxMovimientos)
            {
                aux=aux->sig;
                cont++;
            }
            aux->sig=nodoAgregado;
        }
}
void importeTotal(Lista *lista)
{
    int t1=0,t2=0,c1=0,c2=0;
    Nodo *aux=lista->cab;
    while (aux!=NULL)
    {
        if(aux->codigoDeMovimiento==1)
        {
            t1=t1+aux->importe;
            c1++;
        }else
            {
                if(aux->codigoDeMovimiento==2)
                {
                    t2=t2+aux->importe;
                    c2++;
                }
            }
        aux=aux->sig;
    }
    printf("ENTRADA,TOTAL IMPORTE: %d y CANTIDAD: %d\n",t1,c1);
    printf("SALIDA,TOTAL IMPORTE: %d y CANTIDAD: %d\n",t2,c2);
    printf("Movimientos Realizados:\n");
    aux=lista->cab;
    for(;aux->sig!=NULL;aux=aux->sig)
    {
        printf(" Nro de cuenta: %d \n Importe: %d \n Salida(Marque 2) o Entrada(Marque 1): %d",aux->numeroDeCuentaCte,aux->importe,aux->codigoDeMovimiento);
    }
}

