#include <stdio.h>

// Projeto cadastro de carros 
// Data : 09/09/2024
// Autores : Gabriel Souto e Guilherme Couto 

#define TAMANHO 3  // Definindo uma constante para o tamanho

int main(){
    int opcao, ano, preco, kms;
    int vetor_ano[TAMANHO], vetor_kms[TAMANHO], vetor_preco[TAMANHO];
    int contador = 0;  // Controlar o número de carros cadastrados

    while (1) {  // Loop principal do menu
        printf("\n==========================");
        printf("\n       Menu interativo    ");
        printf("\n==========================");
        printf("\n1 - Para cadastrar um novo carro");
        printf("\n2 - Para consultar carros cadastrados");
        printf("\n3 - Para encerrar");
        printf("\n==========================\n");
        scanf("%i", &opcao);

        if (opcao == 1) {
            if (contador < TAMANHO) {
                printf("\nInforme as seguintes características do carro %d\n", contador + 1);
                printf("Ano: ");
                scanf("%d", &ano);
                printf("Km's rodados: ");
                scanf("%d", &kms);
                printf("Preço: ");
                scanf("%d", &preco);

                vetor_ano[contador] = ano;
                vetor_kms[contador] = kms;
                vetor_preco[contador] = preco;
                contador++;  // Incrementa o contador de carros cadastrados

            } else {
                printf("\nLimite de cadastro de carros atingido!\n");
            }

        } else if (opcao == 2) {
            printf("\nCarros cadastrados:\n");
            for (int i = 0; i < contador; i++) {
                printf("\nCarro %d:\n", i + 1);
                printf("Ano: %d\n", vetor_ano[i]);
                printf("Km's rodados: %d\n", vetor_kms[i]);
                printf("Preço: %d\n", vetor_preco[i]);
            }

            if (contador == 0) {
                printf("\nNenhum carro cadastrado ainda.\n");
            }

        } else if (opcao == 3) {
            printf("\nEncerrando...\n");
            break;
        } else {
            printf("\nOpção inválida, tente novamente.\n");
        }
    }

    return 0;
}
