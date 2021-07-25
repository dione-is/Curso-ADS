
#include "tipos.h"


void listaOrdenada (TLista *p) {

    TElemento *novo;
    novo = (TElemento*) malloc(sizeof(TElemento));
    // novo =  new TElemento;

    printf("Informe um valor\n");
    scanf("%d",&novo->info);

    novo->proximo = NULL;

    if (p->inicio == NULL){

        p->inicio = novo;
        p->fim = novo;
      }else{

        if(novo->info < p->inicio) {

            novo->proximo = p->inicio;
            p->inicio = novo;

          }else {

            if(novo->info >= p->fim->info ) {

                p->fim->proximo = novo;
                p->fim = novo;
              }else {

                TElemento *anterior;
                TElemento *atual;

                atual = p->inicio->proximo;
                anterior = p->inicio;

                while(novo >= atual->info){

                    anterior = atual;
                    atual = atual->proximo;

                }

                anterior->proximo = novo;
                novo->proximo = atual;

            }

        }

    }

}

