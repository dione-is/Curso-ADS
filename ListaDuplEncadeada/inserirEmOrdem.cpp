#include "tipos.h"

void inserirEmOrdem (TLista *p)
{
	TElemento *novo;
	novo = (TElemento*)malloc(sizeof(TElemento));
	
	printf("\n Informe valor: ");
	scanf("%d", &novo->info);
	novo->anterior = NULL;
	novo->proximo = NULL;
	
	if (p->inicio == NULL) //lista vazia
	{
		p->inicio = novo;
		p->fim = novo;
	}
	else
	{
		if (novo->info < p->inicio->info) //novo é menor que início
		{
			novo->proximo = p->inicio;
			p->inicio->anterior = novo;
			p->inicio = novo;
		}
		else
		{
			if (novo->info >= p->fim->proximo) //novo é maior que fim
			{
				p->fim->proximo = novo;
				novo->anterior = p->fim;
				p->fim = novo;
			}
			else
			{
				TElemento *atual;
				atual = p->inicio;
				
				while (atual->info <= novo->info)
				{
					atual = atual->proximo;
				}
				novo->proximo = atual;
				(atual->anterior)->proximo = novo;
				novo->anterior = atual->anterior;
				atual->anterior = novo;
			}
		}
	}
}
