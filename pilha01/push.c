#include "tipos.h"

void push(TPilha *p, TElemento novoElemento) {

    p->topo++;
    p->pilha[p->topo] = novoElemento;
}
