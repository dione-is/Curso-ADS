#include "tipos.h"

void apresentarAluno(TListaPrincipal *p) {

    if(p->listaAlunos > 0) {

        int i;
        for(i = 0; i < p->tamanhoLista; i++) {
            printf("\n Matricula:     %d: ", p->listaAlunos[i].matricula);
            printf("\n Nome:          %s: ",p->listaAlunos[i].nome );
            printf("\n Media          %.2f: ",p->listaAlunos[i].media);
            printf("\n-------------------------------");
        }
    }else {

        printf("Lista vazia");

    }




}
