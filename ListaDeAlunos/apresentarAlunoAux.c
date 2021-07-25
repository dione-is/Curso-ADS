#include "tipos.h"

void apresentarAlunoAux(TListaAux *p) {

    if(p->listaAuxAlunos > 0) {

        int i;
        for(i = 0; i < p->tamanhoListaAux; i++) {
            printf("\n Matricula:     %d: ", p->listaAuxAlunos[i].matricula);
            printf("\n Nome:          %s: ",p->listaAuxAlunos[i].nome );
            printf("\n Media          %.2f: ",p->listaAuxAlunos[i].media);
            printf("\n-------------------------------");
        }
    }else {

        printf("Lista vazia");

    }
}
