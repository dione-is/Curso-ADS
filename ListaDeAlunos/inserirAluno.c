#include "tipos.h"

void inserirAluno(TListaPrincipal *p) {

    if(p->tamanhoLista < 10) {

        TAluno novoAluno;

        printf("\n Informe numero de matricula: ");
        scanf("%d",&novoAluno.matricula);

        printf("\n Informe nome do aluno: ");
        fflush(stdin);
        gets(novoAluno.nome);

        printf("\n Informe Media do aluno: ");
        scanf("%f",&novoAluno.media);

        if (p->tamanhoLista == 0) {

            p->listaAlunos[0] = novoAluno;

        }else {
            if(novoAluno.matricula >= p->listaAlunos[p->tamanhoLista-1].matricula) {

               p->listaAlunos[p->tamanhoLista] = novoAluno;

            }else {
                int i;
                for(i = 0; i < p->tamanhoLista; i++){

                    if( novoAluno.matricula < p->listaAlunos[i].matricula) {

                        break;
                    }
                }

                int x;
                for(x = p->tamanhoLista; x > i; x--) {

                    p->listaAlunos[x] = p->listaAlunos[x-1];

                }
                p->listaAlunos[i] = novoAluno;

            }
        }
       p->tamanhoLista++;
    }else {
        printf("\n A lista esta cheia ");
    }

}
