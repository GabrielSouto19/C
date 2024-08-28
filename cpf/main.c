#include<stdio.h>
//variaveis de escopo global e funções ficaram aqui


int main(){
    // area para declarações de variaveis

    int tamanho=11;// preciso definir o tamanho para colocar e setar o meu vetor abaixo
    int cpf[tamanho];

    for (int i = 0 ;i <11; i++){
        printf("Insira o %d º numero do seu cpf:",i+1);
        scanf("%d",&cpf[i]);
        //printf("\n %d",i);
    }

    printf("O seu cpf devidamente formatado é igual a :");
    for (int i = 0 ;i<11 ; i++){
        printf("%d",cpf[i]);
        if (i ==2 || i == 5 || i == 8 ){
            printf(".");
        }
        
    }


    return 1 ;
}