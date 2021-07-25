#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <conio.h>

typedef struct tipoElemento {
    int valor;
}TElemento;

typedef struct TipoPilha {
    TElemento pilha [10];
    int topo;
}TPilha;

void inicializarPilha(TPilha *p);
void push(TPilha *p, TElemento novoElemento);
TElemento pop(TPilha *p);
void apresentar (TPilha *p);
void inverterPilha (TPilha *p);


#endif // _tipos_
