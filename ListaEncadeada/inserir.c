#include "tipos.h"


void inserir (TLista *p) {

    TElemento *novo;
    novo = (TElemento*) malloc(sizeof(TElemento));
    // novo =  new TElemento;

    printf("Informe um valor\n");
    scanf("%d",&novo->info);

    novo->proximo = NULL;

    if (p->inicio == NULL) {

        p->inicio = novo;
     } else {

        TElemento *aux;
        aux = p->inicio;
        while (aux->proximo !=NULL){
                aux = aux->proximo;
        }
        aux->proximo = novo;
    }

}
