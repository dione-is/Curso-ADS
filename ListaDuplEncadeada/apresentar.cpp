#include "tipos.h"

//apresentar a partir do início da lista
void apresentarInicio(TLista *p)
{
	if (p->inicio != NULL)
	{
		TElemento *aux;
		aux = p->inicio; 
		
		while (aux != NULL)
		{
			printf("\n Valor: %d", aux->info);
			aux = aux->proximo;
		}
	}
	else
	{
		printf("\n Lista vazia!");
	}
}

//apresentar a partir do fim da lista
void apresentarFim(TLista *p)
{
	if (p->fim != NULL)
	{
		TElemento *aux;
		aux = p->fim; 
		
		while (aux != NULL)
		{
			printf("\n Valor: %d", aux->info);
			aux = aux->anterior;
		}
	}
	else
	{
		printf("\n Lista vazia!");
	}
}
