#include <stdio.h>

// Projeto cadastro de carros 
// Data : 09/09/2024
// Autores : Gabriel Souto e Guilherme Couto 

#define TAMANHO 3  // Definindo uma constante para o tamanho

// Definindo uma estrutura para armazenar as informações de um carro
typedef struct {
    int ano;
    int kms;
    int preco;
} Carro;

typedef struct {
    int nome;
    int telefone;
    int cpf;
} Cliente;



int main() {
    int opcao;
    Carro carros[TAMANHO];  // Array de structs para armazenar até 3 carros
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
                scanf("%d", &carros[contador].ano);
                printf("Km's rodados: ");
                scanf("%d", &carros[contador].kms);
                printf("Preço: ");
                scanf("%d", &carros[contador].preco);

                contador++;  // Incrementa o contador de carros cadastrados
            } else {
                printf("\nLimite de cadastro de carros atingido!\n");
            }

        } else if (opcao == 2) {
            printf("\nCarros cadastrados:\n");
            for (int i = 0; i < contador; i++) {
                printf("\nCarro %d:\n", i + 1);
                printf("Ano: %d\n", carros[i].ano);
                printf("Km's rodados: %d\n", carros[i].kms);
                printf("Preço: %d\n", carros[i].preco);
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
