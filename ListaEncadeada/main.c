#include "tipos.h"

int main() {

    TLista L;
    int opcao;

    inicializar(&L);

    do {

        printf("\n 1 inserir");
        printf("\n 2 apresentar");
        printf("\n 3 consultar");
        printf("\n 4 Excluir");
        printf("\n 5 ordenada");
        printf("\n 0 sair");
        printf("\n escolha uma opcao\n");
        scanf("%d",&opcao);

        switch(opcao) {

            case 1: inserir(&L);break;
                case 2: apresentar(&L);break;
                    case 3: consultar(&L);break;
                        case 4:excluir(&L);break;
                            case 5:listaOrdenada(&L);break;
        }

    }while(opcao != 0);
}
