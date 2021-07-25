#include "tipos.h"

int main() {

    TListaPrincipal turmaA;
    TListaPrincipal turmaB;

    inicializar(&turmaA);
    inicializar(&turmaB);

    int opcao;
    do {
            printf("\n1-Inserir alunos na turma A\n");
            printf("2-Inserir alunos na turma B\n");
            printf("3-Apresentar  turma A\n");
            printf("4-Apresentar  turma b\n");
            printf("5-Juntar turmas\n");
            printf("6-Apresentar  aprovados e reprovados\n");
            printf("0-Sair\n");
            printf("Escolha uma opção: \n");
            scanf("%d",&opcao);

            switch(opcao) {

                case 1: inserirAluno(&turmaA);break;
                    case 2: inserirAluno(&turmaB);break;
                        case 3: apresentarAluno(&turmaA);break;
                            case 4: apresentarAluno(&turmaB);break;
                                case 5: juncaoAlunos(&turmaA,&turmaB);break;
                                  //  case 6: separarAlunos(&turmaA,&turmaB);break;
            }
    }while(opcao != 0);

}
