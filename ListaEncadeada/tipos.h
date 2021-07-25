#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct tipoElemento {

    int info;
    struct tipoElemento *proximo;

}TElemento;

typedef struct tipoLista {

    TElemento *inicio;
    TElemento *fim;

}TLista;

void inicializar(TLista *p);
void inserir(TLista *p);
void apresentar(TLista *p);
void consultar(TLista *p);
void excluir(TLista *p);
void listaOrdenada(TLista *p);
#endif // _tipos_
