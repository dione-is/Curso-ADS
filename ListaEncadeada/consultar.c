#include "tipos.h"


TElemento* buscarNaLista(TLista *p,int valorBusca) {

    TElemento *aux;
    aux = p->inicio;
    while (aux != NULL && aux->info != valorBusca) {

        aux = aux->proximo;
    }
    return aux;
}


void consultar(TLista *p) {

    if(p->inicio != NULL) {

        int valorBusca;
        printf("\n Informe o valor da busca: ");
        scanf("%d",&valorBusca);

        TElemento *elementoBusca;
        elementoBusca = buscarNaLista(p,valorBusca);
        if( elementoBusca != NULL) {

            printf("Valor encontrado: %d", elementoBusca);
        }else {
            printf("Valor nao encontrado");
        }

    }else {
        printf("Lista vazia");
    }
}

