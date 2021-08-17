#include <stdio.h>
#include <conio.h>

typedef struct tipoElemento
{
	int valor;
}TElemento;

typedef struct tipoNo
{
	TElemento elemento;
	struct tipoNo *esq;
	struct tipoNo *dir;
}TNo;

/*			
TNo* inserir (TNo *raiz, TElemento elemento)
{
	if (raiz == NULL)
	{
		raiz = new TNo;
		raiz->elemento = elemento;
		raiz->esq = NULL;
		raiz->dir = NULL;
	}
	else
	{
		if (elemento.valor < raiz->elemento.valor)
		{
			raiz->esq = inserir (raiz->esq, elemento); //EM ESPERA
		}
		else
		{
			raiz->dir = inserir (raiz->dir, elemento);
		}
	}
	return raiz;
}
*/

TNo* inserir (TNo *raiz, TElemento elemento)
{
	TNo *novoNo;
	novoNo = new TNo;
	novoNo->elemento = elemento;
	novoNo->esq = NULL;
	novoNo->dir = NULL;
	
	if (raiz == NULL)
	{
		raiz = novoNo;
	}
	else
	{
		TNo *aux = raiz;
		int inseriu = 0;
		
		while (inseriu == 0)
		{
			if (novoNo->elemento.valor < aux->elemento.valor)
			{
				if (aux->esq == NULL)
				{
					aux->esq = novoNo;
					inseriu = 1;
				}
				else
				{
					aux = aux->esq;
				}
			}
			else
			{
				if (aux->dir == NULL)
				{
					aux->dir = novoNo;
					inseriu = 1;
				}
				else
				{
					aux = aux->dir;
				}
			}
		}
	}
	return raiz;
}

void preOrdem(TNo *raiz)
{
	if (raiz != NULL)
	{
		printf("\n Valor: %d", raiz->elemento.valor);
		preOrdem(raiz->esq);
		preOrdem(raiz->dir);
	}
}

void emOrdem(TNo *raiz)
{
	if (raiz != NULL)
	{
		emOrdem(raiz->esq);
		printf("\n Valor: %d", raiz->elemento.valor);
		emOrdem(raiz->dir);
	}
}

void posOrdem(TNo *raiz)
{
	if (raiz != NULL)
	{
		posOrdem(raiz->esq);
		posOrdem(raiz->dir);
		printf("\n Valor: %d", raiz->elemento.valor);
	}
}

int buscar (TNo *raiz, int valor)
{
	if (raiz == NULL)
	{
		return 0;
	}
	else
	{
		TNo *aux;
		aux = raiz;
		
		while (aux != NULL)
		{
			if (valor == aux->elemento.valor)
			{
				return 1;
			}
			else
			{
				if (valor < aux->elemento.valor)
				{
					aux = aux->esq;
				}
				else
				{
					aux = aux->dir;
				}
			}
		}
		return 0;
	}
}

int main()
{
	TNo *raiz;
	raiz = NULL;
	TElemento auxElemento;
	int valor;
	
	int opcao;
	
	do
	{
		printf("\n 1 - Inserir");
		printf("\n 2 - Apresentar (pre-ordem)");
		printf("\n 3 - Apresentar (em-ordem)");
		printf("\n 4 - Apresentar (pos-ordem)");
		printf("\n 5 - Consultar");
		printf("\n 0 - Sair");
		printf("\n Escolha uma opcao: ");
		scanf("%d", &opcao);
		switch (opcao)
		{
			case 1: {
				printf("\n Informe valor: ");
				scanf("%d", &auxElemento.valor);
				
				raiz = inserir (raiz, auxElemento);
				
				break;
			}
			case 2:
				{
					preOrdem(raiz);
					break;
				}
			case 3:
				{
					emOrdem(raiz);
					break;
				}
			case 4:
				{
					posOrdem(raiz);
					break;
					}	
			case 5:
				{
					printf("\n Informe valor para busca: ");
					scanf("%d", &valor);
					if (buscar(raiz, valor) == 1)
					{
						printf("\n Valor encontrado!");
					}
					else
					{
						printf("\n Valor nao encontrado!");
					}
					break;
				}
		}
	}while (opcao != 0);
}
