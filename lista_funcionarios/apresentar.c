#include "tipos.h"

void apresentar(Tlista *p) {

    if(p->tamanhoLista > 0 ) {

        for(int i = 0; i < p->tamanhoLista; i++) {

            printf("\n Nome Funcionario: %s\n",p->lista[i].nome);
            printf("Salario: %.2f\n",p->lista[i].salario);
            printf("==================================\n");
        }
        printf("%d",p->tamanhoLista);

    } else {
        printf("A LISTA ESTA VAZIA !");
    }
}
