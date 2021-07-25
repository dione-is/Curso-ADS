#include "tipos.h"

void pesquisar_nome(Tlista *p) {

    char nome[20];
    int encontrado = 0;

    printf("\n Informe o nome que deseja pesquisar: \n");
    scanf("%s",&nome);

    for(int i = 0; i < p->tamanhoLista; i++) {

        if(strcmp(nome,p->lista[i].nome) == 0 ) {
            printf("%s\n",p->lista[i].nome);
            printf("%.2f\n",p->lista[i].salario);
            encontrado = 1;
        }
    }
    if(encontrado == 0) {
        printf("NAO ENCONTRADO !\n\n");
    }
}

void pesquisar_MaiorSalario(Tlista *p) {

    printf("\n Maior salario Atualmente: \n");

    char tmpNome[20];
    float tmpSalario = 0;

    for(int i = 0; i < p->tamanhoLista; i++) {

            if(tmpSalario < p->lista[i].salario) {

                 tmpSalario = p->lista[i].salario;
                 strcpy(tmpNome,p->lista[i].nome);
            }
        }


    printf(" %s",tmpNome);
    printf(" %.2f",tmpSalario);


}

void pesquisar_mediaSalarial(Tlista *p) {

int soma = 0;

    printf("\n A media Salarial Cadastrada: \n");
    for( int i = 0; i < p->tamanhoLista; i++) {

        soma = soma + p->lista[i].salario;
    }
    float media = soma/p->tamanhoLista;
    printf("\n a media salarial dos funcionarios e %.2f\n", media );

}

void pesquisar_qtd(Tlista *p) {

    float sal = 0;
    int cont = 0;

    printf("\n informe o valor do salario: \n");
    scanf("%f",&sal);
    for(int i = 0; i < p->tamanhoLista; i++){

            if(sal < p->lista[i].salario){

                printf("\n %s",p->lista[i].nome);
                printf("\n %.2f",p->lista[i].salario);
                cont++;

            }
    }
    printf("\n %d Funcionarios recebem mais que %.2f\n",cont,sal);
}

