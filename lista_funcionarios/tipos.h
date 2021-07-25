#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

typedef struct TipoElemento {

    char nome[40];
    float salario;

}TElemento;

typedef struct TipoLista {

    TElemento lista[10];
    int tamanhoLista;

}Tlista;

void inserir(Tlista *p);
void apresentar(Tlista *p);
void inicializar(Tlista *p);
void pesquisar_nome(Tlista *p);
void pesquisar_MaiorSalario(Tlista *p);
void pesquisar_mediaSalarial(Tlista *p);
void pesquisar_qtd(Tlista *p);
void excluir(Tlista *p);
void ordenar_salario(Tlista *p);
#endif // _tipos_
