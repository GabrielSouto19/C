#include <stdio.h>
// Projeto cadastro de carros 
//data : 09/09/2024
//Autores : Gabriel Souto e Guilherme Couto 
int tamanho,opcao,x,posicao,ano,preco,kms,vetor_ano[3],vetor_kms[3],vetor_preco[3];

int main(){
    char matriz_carros[3][3];
    //A variavel x foi feita para controlar o looping do for
    // para que ele so incremente um na contagem quando o usuario cadastrar um novo carro
    char carros[tamanho];

    struct Carro {
        int ano;
        int kms_rodados;
        int preco;
    };

    struct Carro carro1;
    carro1.ano = 2000;
    carro1.kms_rodados= 1000;
    carro1.preco  = 12.345;
    
    printf("%d \n",carro1.ano);
    printf("%d \n",carro1.kms_rodados);
    printf("%d \n",carro1.preco);
    
    
    
    
    return 0;
}