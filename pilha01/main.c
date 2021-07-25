#include "tipos.h"

int main () {

    TPilha P;
    inicializarPilha(&P);

    int opcao;

    do {

        printf("\n 1 - Empilhar");
        printf("\n 2 - Desempilhar");
        printf("\n 3 - Apresentar Pilha");
        printf("\n 0 - Sair");

        printf("\n 1 - Escolha uma opcao: \n");
        scanf("%d",&opcao);

        switch(opcao) {

            case 1: {
                    if(P.topo < 9) {
                        TElemento novoElemento;
                        printf("\nInforme novo elemento\n");
                        scanf("%d", &novoElemento.valor);
                        push(&P,novoElemento);
                        break;
                    }else {
                        printf("A pilha esta cheia");
                    }
                }break;

                    case 2: {
                        if(P.topo >=0) {
                            TElemento elementoDesempilhado;
                            elementoDesempilhado = pop(&P);
                            printf("\n elemento desemplihado: %d", elementoDesempilhado.valor);
                            getch();
                        }else {
                            printf("Pilha vazia !");
                        }
                        }break;
                            case 3: apresentar(&P);break;
                                case 4: inverterPilha(&P);break;


        }
    }while(opcao != 0);


}
