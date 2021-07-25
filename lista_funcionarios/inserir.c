#include "tipos.h"



void inserir(Tlista *p) {

    bool encontrado = false;

    if(p->tamanhoLista < 10) {

        float novoSalario;
        char novoNome[40];

        printf("Informe nome do funcionario \n");
        fflush(stdin);
        gets(novoNome);
        printf("Informe salario do funcionario \n");
        scanf("%f",&novoSalario);

        if(p->tamanhoLista == 0 ){

            strcpy(p->lista[0].nome,novoNome);
            p->lista[0].salario = novoSalario;
            p->tamanhoLista++;

        }else
            if(strcmp(novoNome,p->lista[p->tamanhoLista-1].nome)> 0 ) {// se o valor é maior que o ultimo valor

                strcpy(p->lista[p->tamanhoLista].nome,novoNome);
                p->lista[p->tamanhoLista].salario = novoSalario;
                p->tamanhoLista++;

            }else
               for(int i = 0; i < p->tamanhoLista && encontrado == false; i++) {

                    if(strcmp(novoNome,p->lista[i].nome)< 0){

                            for(int cont = p->tamanhoLista; cont > i ; cont --) {

                                p->lista[cont] = p->lista[cont-1];
                            }

                        p->lista[i].salario = novoSalario;
                        strcpy(p->lista[i].nome,novoNome);

                        encontrado = true;
                        p->tamanhoLista++;
                    }
               }
    }else {

        printf("Lista cheia !");

    }


}
