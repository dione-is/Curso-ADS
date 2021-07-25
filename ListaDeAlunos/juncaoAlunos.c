#include "tipos.h"

void juncaoAlunos(TListaPrincipal *pA,TListaPrincipal *pB) {

    TListaAux listaJuncao;

    inicializarAux(&listaJuncao);

    int i;
    for(i=0; i< pA->tamanhoLista; i++) {

        listaJuncao.listaAuxAlunos[i] = pA->listaAlunos[i];
        listaJuncao.tamanhoListaAux++;
    }

    int x;
    TAluno novoAluno;

    for(x = 0; x < pB->tamanhoLista; x++) {

        novoAluno = pB->listaAlunos[x];

        if(listaJuncao.tamanhoListaAux == 0) {
            listaJuncao.listaAuxAlunos[x] = novoAluno;
        }else {

            if(novoAluno.matricula >= listaJuncao.listaAuxAlunos[listaJuncao.tamanhoListaAux-1].matricula){
                listaJuncao.listaAuxAlunos[listaJuncao.tamanhoListaAux] = novoAluno;
            }else {

                int i;
                for(i = 0; i < listaJuncao.tamanhoListaAux; i++){

                    if( novoAluno.matricula < listaJuncao.listaAuxAlunos[i].matricula ){
                        break;
                    }
                }
                int x;
                for(x = listaJuncao.tamanhoListaAux; x > i; x--) {

                    listaJuncao.listaAuxAlunos[x] = listaJuncao.listaAuxAlunos[x-1];
                }
                listaJuncao.listaAuxAlunos[i] = novoAluno;
            }
        }
       listaJuncao.tamanhoListaAux++;
    }
    apresentarAlunoAux(&juncaoAlunos);
}

