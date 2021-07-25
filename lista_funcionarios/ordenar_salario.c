#include "tipos.h"
void ordenar_salario(Tlista *p)

{

	Tlista listaAux;
	inicializar(&listaAux);
	TElemento novoFuncionario;



	int i;

	for (i = 0; i < p->tamanhoLista; i++)
	{
		novoFuncionario = p->lista[i];

		if (listaAux.tamanhoLista == 0) //lista vazia

		{
			listaAux.lista[0] = novoFuncionario;
		}

		else

		{
			if (novoFuncionario.salario <= listaAux.lista[listaAux.tamanhoLista-1].salario)

			{

				listaAux.lista[listaAux.tamanhoLista] = novoFuncionario;

			}

			else

			{

				int i;

				for (i = 0; i < listaAux.tamanhoLista; i++) //encontrar sal�rio do funcion�rio na lista que seja

				{									  //menor que o sal�rio do novoFuncionario

					if (listaAux.lista[i].salario < novoFuncionario.salario)

					{

						break;

					}

				}



				int j;

				for (j = listaAux.tamanhoLista; j > i; j--) //abrir espa�o para inserir novoFuncionario

				{

					listaAux.lista[j] = listaAux.lista[j-1];

				}



				//inserir novoFuncionario na lista

				listaAux.lista[i] = novoFuncionario;

			}

		}

		listaAux.tamanhoLista++;

	}

	apresentar(&listaAux);

}

