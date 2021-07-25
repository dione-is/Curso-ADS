#include "tipos.h"

TElemento pop(TPilha *p) {

    TElemento elemento;
    elemento = p->pilha[p->topo];
    p->topo--;
    return elemento;
}
