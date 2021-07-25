#include "tipos.h"

void inserir(TLista *p)
{
	TElemento *novo;
	novo = (TElemento*)malloc(sizeof(TElemento));
	
	printf("\n Informe valor: ");
	scanf("%d", &novo->info);
	novo->anterior = NULL;
	novo->proximo = NULL;
	
	if (p->inicio == NULL)
	{
		p->inicio = novo;
		p->fim = novo;
	}
	else //inserindo elemento no fim da lista
	{
		p->fim->proximo = novo;
		novo->anterior = p->fim;
		p->fim = novo;
	}
}

//para inserir no início da lista
/*	else
	{
		p->inicio->anterior = novo;
		novo->proximo = p->inicio;
		p->inicio = novo;
	}
*/

