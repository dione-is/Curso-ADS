#include "tipos.h"


void excluir(TLista *p)
{
	//Qual elemento quero excluir?
	int valorExclusao;
	printf("\n Qual valor deseja excluir: ");
	scanf("%d", &valorExclusao);

	TElemento *atual;

	atual = p->inicio;

	if (atual->info == valorExclusao)
	{
		if (atual == p->inicio)
		{
			p->inicio = atual->proximo;
			free(atual);
		}
	}
	else
	{
		while (atual->proximo != NULL)
		{
			if (atual->proximo->info == valorExclusao)
			{
				atual->proximo = (atual->proximo)->proximo;

				if (atual->proximo == p->fim)
				{
					p->fim = atual;
				}
				free(atual);
				break;
			}
			else
			{
				atual = atual->proximo;
			}
		}
	}

	if (atual == NULL)
	{
		printf("\n Elemento nao encontrado!");
	}
	else
	{
		printf("\n Elemento excluido com sucesso!");
	}
	getch();
}




/*void excluir (TLista *p) {

     //qual elemento excluir?
   int valorExclusao;
   printf("\n Qual valor deseja excluir: ");
   scanf("%d", &valorExclusao);

   TElemento *atual;
   TElemento *anterior;

   atual = p->inicio;
   anterior = p->inicio;

   while (atual != NULL)
   {
      if (atual->info == valorExclusao)
      {
         if (atual == p->inicio)  //para o inicio da lista
         {
            p->inicio = atual->proximo;
         }
         else //no meio da lista
         {
            anterior->proximo = atual->proximo;
            if (atual == p->fim)
            {
               p->fim = anterior;
            }
         }
         free(atual);
         break;
      }
      else
      {
         anterior = atual;
         atual = atual->proximo;
      }
   }
   if (atual == NULL)
   {
      printf("\n Elemento não encontrado\n");
   }
   else
   {
      printf("\n Elemento excluido com sucesso!\n");
   }
}*/


