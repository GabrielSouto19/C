/******************************************************************************
Autor:Gabriel Souto Da Silva
Data: 26/08/2024
Descrição: Loja com Menu

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(){
    // Locais
    int produto,forma_de_pagamento;
    float valor_do_produto, valortotal,desconto;
    
    printf("Menu de prodrutos \n");
    printf(" 1- Produto 300 reais \n");
    printf(" 2- Produto 600 reais \n");
    printf(" 2- Produto 50 reais \n");
    printf(" 2- Produto 20 reais \n");
    printf(" 2- Produto 150 reais \n");
    scanf("%d",&produto);
    
    switch(produto)
    {
        case 1:
            valor_do_produto = 300;
            break;
            
        case 2:
            valor_do_produto = 600;
            break;
            
        case 3:
            valor_do_produto = 50;
            break;
            
        case 4:
            valor_do_produto = 20;
            break;
            
        case 5:
            valor_do_produto = 150;
            break;
        default:
            printf("Produto inexistente!! Compra cancelada!!");
    }
            
            
    
        if(produto>=1 && produto<=5){
        printf("Menu de pagamento \n");
        printf("1 - Pagamento a vista \n");
        printf("2 - Pagamento a prazo 30 dias \n");
        printf("3 - Pagamento a prazo 60 dias \n");
        printf("4 - Pagamento a prazo 90 dias \n");
        printf("5 - Cartao de debito \n");
        printf("6 - Cartao de credito \n");
        printf("Escolha a forma de pagamento: ");
        scanf("%i",&forma_de_pagamento);
        
        switch(forma_de_pagamento){
        case 1:
            valortotal = valor_do_produto * 0.90;//O produto ganha 10%de desconto
            
            break;
            
        case 2:
            valortotal= valor_do_produto*0.95;// O produto ganha 5% de desconto
            break;
            
        case 3:
            valortotal= valor_do_produto;// sem desconto
            break;
            
        case 4:
            valortotal= valor_do_produto*1.05;// a pessoa paga 5% de juros 
            break;
            
        case 5:
            valortotal= valor_do_produto*0.92;// a pessos ganha 8% de desconto
            break;
            
        case 6:
            valortotal= valor_do_produto*0.93;// A pessoa ganha 7 % de desconto
            break;
            
        default:// Opcao invalida .. qualquer valor fora do especificado
        printf("Forma de pagamento invalida");
        }

        valortotal = trunc(valortotal);
        // // // printf(" O valor total é igual a %f",valortotal);

        desconto = valor_do_produto - valortotal;
        printf("O valor total do produto é igual a %f",valortotal);
        printf("O valor total do desconto é igual a %f",desconto);

        printf("O valor total da compra é igual a ");
          
            
    }
    
}
       
