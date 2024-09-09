#include <stdio.h>
// Projeto cadastro de carros 
//data : 09/09/2024
//Autores : Gabriel Souto e Guilherme Couto 
int tamanho,opcao,x,posicao,ano,preco,kms;

int main(){
    char matriz_carros[3][3];
    //A variavel x foi feita para controlar o looping do for
    // para que ele so incremente um na contagem quando o usuario cadastrar um novo carro
    char carros[tamanho];
    for (int i = 1; i<4;i+=x){
        printf("%d",i);
        x = 0;// Pensamos que estamos resetando a variavel x aqui para que ela so incremente no looping se for cadastrado um novo carro

        printf("\n==========================");
        printf("\n       Menu interativo    ");
        printf("\n==========================");
        printf("\n1 - para cadastrar um novo carro");
        printf("\n2 - para consultar um novo carro ");
        printf("\n3 - para excluir um carro");
        printf("\n4 - para encerrar");
        printf("\n==========================\n");
        scanf("%i",&opcao);
        if (opcao ==1 ){
            // se a opção escolhida for igual a 1 
              x =1;
              printf("Informe as seguintes caracteristicas do carro\n");
              
            //   matriz_carros[1][3] = {
            //     {ano,kms,preco},
            //     {ano,kms,preco},
            //     {ano,kms,preco}
            //     };
            
              for (int i = x ; i< 3;i++){
                
                for (int j = 0;j<3;j++){
                    printf("\nAno:");
                    //scanf("%i",&matriz_carros[i][j]);
                    scanf("%i",&ano);
                    printf("\nKm's rodados:");
                    scanf("%i",&kms);
                    printf("\npreço:");
                    scanf("%i",&preco);
                    if (j == 0){
                        matriz_carros[i][j] = ano;
                    }
                    else if (j == 1){
                        matriz_carros[i][j] = kms;
                        printf("%d",matriz_carros[i][j]);
                    }
                    else if  (j == 2){
                        matriz_carros[i][j] = preco;
                    }
                   

                    break;
                }
                break;
              } 
              
        }
              
         if (opcao ==2 ){
            // se a opção escolhida for igual a 2
             for (int i = 0;i<3;i++){
                for (int j = 0;j<3;j++){
                    printf("%d",matriz_carros[i][j]);
                }
            }
          
        }
        else if (opcao ==3 ){
            // se a opção escolhida for igual a 1 
        }
        else if (opcao ==4){
            // se a opção escolhida for igual a 4 o código se encerre
            printf("Encerrando");
           
            break;
        }
        else{
            printf("Escolha uma opção válida");
        }

        }//fechamento do escopo for
        for (int i = 0;i<3;i++){
            for(int j = 0;j<3;j++){
                printf("%d",matriz_carros[i][j]);
            }
        }
  
    


    return 0;
}