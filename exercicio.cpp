#include <stdio.h>
#include <conio.h>

typedef struct tipoElemento
{
	char nome[30];
	int valor;
}TElemento;

typedef struct tipoNo
{
	TElemento elemento;
	struct tipoNo *esq;
	struct tipoNo *dir;
}TNo;

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

	
void preOrdem(TNo *raiz)
{
	if (raiz != NULL)
	{
		printf("\nNome: %s",raiz->elemento.nome);
		printf("\nValor: %d", raiz->elemento.valor);
		printf("\n=========================");
		preOrdem(raiz->esq);
		preOrdem(raiz->dir);
	}
}

void emOrdem(TNo *raiz)
{
	if (raiz != NULL)
	{
		emOrdem(raiz->esq);
		printf("\nNome: %s",raiz->elemento.nome);
		printf("\nValor: %d", raiz->elemento.valor);
		printf("\n=========================");					
		emOrdem(raiz->dir);
	}
}

void posOrdem(TNo *raiz)
{
	if (raiz != NULL)
	{
		posOrdem(raiz->esq);
		posOrdem(raiz->dir);
		printf("\nNome: %s",raiz->elemento.nome);
		printf("\nValor: %d", raiz->elemento.valor);
		printf("\n=========================");
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

	void maiorXmenor(TNo* raiz,int *maior, int *menor){
		
		if (raiz != NULL)
		{
		emOrdem(raiz->esq);
		printf("\nNome: %s",raiz->elemento.nome);
		printf("\nValor: %d", raiz->elemento.valor);
		printf("\n=========================");
		if(menor == 0 || menor > raiz->esq.elemento.valor){
			menor = raiz->esq.elemento.valor;
		}				
		emOrdem(raiz->dir);
		if(maior < raiz->dir.elemento.valor){
			maior = raiz->dir.elemento.valor;
		}
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
				printf("Informe o nome do produto: ");
				fflush(stdin);
				gets(auxElemento.nome );
				printf("Informe valor: \n");
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




ponteiro menor *menor, *menor     paramentro teste (raiz,&maior,&menor)

								void teste(TNo raiz, &*maior, &*menor);
								*aux->elemento.valor
