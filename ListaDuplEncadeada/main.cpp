#include "tipos.h"

int main()
{
	int opcao;
	
	TLista listaDuplamenteEncadeada;
	
	inicializar(&listaDuplamenteEncadeada);
	
	do
	{
		printf("\n 1 - Inserir");
		printf("\n 2 - Apresentar pelo inicio");
		printf("\n 3 - Apresentar pelo fim");
		printf("\n 0 - Sair");
		printf("\n Escolha uma opcao: ");
		scanf("%d", &opcao);
		switch(opcao)
		{
			case 1: inserir(&listaDuplamenteEncadeada); break;
			case 2: apresentarInicio(&listaDuplamenteEncadeada); break;
			case 3: apresentarFim(&listaDuplamenteEncadeada); break;
		}
	}while (opcao != 0);
}
