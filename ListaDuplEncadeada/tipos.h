#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct tipoElemento
{
	int info;
	struct tipoElemento *anterior;
	struct tipoElemento *proximo;
}TElemento;

typedef struct tipoLista
{
	TElemento *inicio;
	TElemento *fim;
}TLista;

void inicializar(TLista *p);
void inserir(TLista *p);
void inserirEmOrdem (TLista *p);
void apresentarInicio(TLista *p);
void apresentarFim(TLista *p);

#endif
