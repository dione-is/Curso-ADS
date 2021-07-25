#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <conio.h>

typedef struct tipoAluno {

    int matricula;
    char nome[40];
    float media;

}TAluno;

typedef struct tipoListaPrincipal {

    TAluno listaAlunos[10];
    int tamanhoLista;

}TListaPrincipal;

typedef struct tipoListaAux {

    TAluno listaAuxAlunos[20];
    int tamanhoListaAux;
}TListaAux;

void inicializar(TListaPrincipal *p);
void inicializarAux(TListaAux *p);
void inserirAluno(TListaPrincipal *p);
void apresentarAluno(TListaPrincipal *p);
void juncaoAlunos(TListaPrincipal *pA,TListaPrincipal *pB);
void separarAlunos(TListaPrincipal *pA,TListaPrincipal *pB);
void apresentarAlunoAux(TListaAux *p);

#endif // _tipos_
