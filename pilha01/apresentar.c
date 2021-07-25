#include "tipos.h"

void apresentar(TPilha *p) {

    if(p->topo >= 0){

        for(int i = p->topo; i>=0; i-- ) {

            printf("\n Pilha[%d]: %d", i, p->pilha[i].valor);
        }
    }else {
        printf("\n Pilha Vazia!");
    }

}
