#include "tipos.h"

void apresentar (TLista *p) {

    if(p->inicio != NULL) {

        TElemento *aux;
        aux = p->inicio;

        while(aux != NULL) {

            printf("\n Valor: %d",aux->info);
            aux = aux->proximo;
        }

    }else {

        printf("Lista vazia!");
    }
}



