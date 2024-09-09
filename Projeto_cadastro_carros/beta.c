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
    for (int i = 1; i<4;i+=x){
        x = 0;// Pensamos que estamos resetando a variavel x aqui para que ela so incremente no looping se for cadastrado um novo carro

        printf("\n==========================");
        printf("\n       Menu interativo    ");
        printf("\n==========================");
        printf("\n1 - para cadastrar um novo carro");
        printf("\n2 - para consultar  carro ");
        printf("\n3 - para encerrar");
        printf("\n==========================\n");
        scanf("%i",&opcao);
        if (opcao ==1 ){
            // se a opção escolhida for igual a 1 
              printf("Informe as seguintes caracteristicas do carro\n");
              
            //   matriz_carros[1][3] = {
            //     {ano,kms,preco},
            //     {ano,kms,preco},
            //     {ano,kms,preco}
            //     };
            
              for (int i = x ; i< 3;i++){
                    printf("\nAno:");
                    //scanf("%i",&matriz_carros[i][j]);
                    scanf("%i",&ano);
                    printf("\nKm's rodados:");
                    scanf("%i",&kms);
                    printf("\npreço:");
                    scanf("%i",&preco);
                    vetor_ano[i] = ano ;
                    vetor_kms[i] = kms;
                    vetor_preco[i] = preco;
                    x =1;

              } 
              
        }
              
        if (opcao == 2 ){
            // se a opção escolhida for igual a 2
             for (int i = 0;i<3;i++){
             
                if (i ==1){
                printf("%d\n",vetor_ano[i]);
                printf("%d \n",vetor_kms[i]);
                printf("%d \n",vetor_preco[i]);
                }
             break;   
            }
          
        }
        else if (opcao ==3){
            // se a opção escolhida for igual a 4 o código se encerre
            printf("Encerrando");
            break;
        }
      
        }//fechamento do escopo for
      
    
    return 0;
}