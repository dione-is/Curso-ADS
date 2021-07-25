#include "tipos.h"

void excluir (Tlista *p) {

        if(p->tamanhoLista > 0) {
            char nomeDelete[40];
            int encontrou = 0;
            int posicao = 0;

            printf("Informe o nome do ususario que sera excluido: ");
            fflush(stdin);
            gets(nomeDelete);

            for(int i; i < p->tamanhoLista && encontrou == 0; i++) {

                if (strcmp(nomeDelete,p->lista[i].nome)==0) {

                   encontrou = 1;
                   posicao = i;
                }
            }

            if(encontrou == 1){

                for(int y = posicao; y < p->tamanhoLista-1; y++) {

                    p->lista[y] = p->lista[y+1];
                }

                p->tamanhoLista--;
            }else{

                printf("funcionario nao Encontrado");
            }

        }else {

        printf("Lista esta vazia");

        }
}
