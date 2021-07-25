#include "tipos.h"

int main(){


Tlista L;


inicializar(&L);


int opcao;

    do{


        printf("\n1 == Inserir dados de funcionarios\n");
        printf("2 == Apresentar Lista\n");
        printf("3 == Pesquisar Funcionario por Nome\n");
        printf("4 == Pesquisar maior Salario\n");
        printf("5 == Pesquisar Media Salarial\n");
        printf("6 == Pesquisar Quantidade que recebem acima de N\n");
        printf("7 == Excluir\n");
        printf("8 == Ordenar  por salario maior\n");
        printf("0 == Sair\n");

        scanf("%d",&opcao);

       switch( opcao) {


            case 1: inserir(&L);break;
                case 2: apresentar(&L);break;
                    case 3: pesquisar_nome(&L);break;
                        case 4: pesquisar_MaiorSalario(&L);break;
                            case 5: pesquisar_mediaSalarial(&L);break;
                                case 6: pesquisar_qtd(&L);break;
                                    case 7: excluir(&L);break;
                                        case 8: ordenar_salario(&L);break;
       }

    }while (opcao !=0);


}
