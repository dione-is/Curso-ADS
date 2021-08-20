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

void preOrdem_NaoRecursiva(TNo *raiz){
	
	TNo *aux;
	aux = raiz;
	while(aux != NULL){
		
		printf("\nNome: %s",aux->elemento.nome);
		printf("\nValor: %d", aux->elemento.valor);
		printf("\n=========================");
		if(aux->esq->elemento.valor < aux->elemento.valor)
			aux = aux->esq;
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

	int menor(TNo* raiz){
		
		int menorvalor = 0;
		if (raiz != NULL){
			menor(raiz->esq);
			if(raiz->esq == NULL) {
				printf("Produto de menor valor: %s\n",raiz->elemento.nome);
				printf("valor: %d\n", raiz->elemento.valor);
				menorvalor = raiz->elemento.valor;
				return menorvalor;
			}
		
		}
	}
	
	void maior(TNo* raiz){
		if(raiz != NULL){
			maior(raiz->dir);
				if(raiz->dir == NULL){
					printf("\nProduto de maior Valor: %s",raiz->elemento.nome);
					printf("\nValor: %d", raiz->elemento.valor);
				}
		}
	}
	
	void ajustarPorcentagem(TNo* raiz, int valor) {
		
		if (raiz != NULL)
		{
			raiz->elemento.valor = (raiz->elemento.valor +(valor/100 * raiz->elemento.valor));
			ajustarPorcentagem(raiz->esq,valor);					
			ajustarPorcentagem(raiz->dir,valor);
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
		printf("\n 6 - Produto Menor Valor");
		printf("\n 7 - Produto Maior Valor");
		printf("\n 8 - Acrescentar ajustes de valor");
		printf("\n 9 - Apresentar (Pre-ordem) Nao recursiva");
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
			case 6:
				{
					int valorMenor =0;
					valorMenor= menor(raiz);
					//printf("O menor  valor e: %d",valorMenor);
					break;
				}
			case 7:
				{
					maior(raiz); break;
				}
			case 8:
				{
					int porcentagem = 0;
					printf("\nQual a porcetagem deseja acrescentar nos valores dos produtos ?");
					scanf("%d",&porcentagem);
					
					ajustarPorcentagem(raiz,porcentagem);break;
				}
			case 9:
				{
					preOrdem_NaoRecursiva(raiz);break;
				}
			
		}
	}while (opcao != 0);
}




/*ponteiro menor *menor, *menor     paramentro teste (raiz,&maior,&menor)

								void teste(TNo raiz, &*maior, &*menor);
								*aux->elemento.valor
								
								*/ 
