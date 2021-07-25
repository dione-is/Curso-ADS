#include "tipos.h"

void inverterPilha (TPilha *p) {

    TPilha aux1;
    TPilha aux2;

    inicializarPilha(&aux1);
    inicializarPilha(&aux2);

    int i;
    TElemento elemento;


    for(i= p->topo; i >=0; i--) {

        elemento = pop(p);
        push(&aux1, elemento);
    }

    for(i= aux1.topo; i>=0; i--) {

        elemento = pop(&aux1);
        push(&aux2, elemento);
    }
    for(i= aux2.topo; i>=0; i--) {

        elemento = pop(&aux2);
        push(p, elemento);
    }

    apresentar(p);

}
