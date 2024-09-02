#include<stdio.h>

// Temos que cada numero multipĺicado pela numero correspondente a sua posição é


int main(){
    int soma = 0 , soma1 = 0,tamanho = 11,cpf[tamanho],cpf_n[tamanho],verificador1 = 0,soma_cpf = 0;
    printf("Digite o %d digito do seu cpf");
    scanf("%s",&cpf);//Char tratando meu cpf como se fosse um texto basicao com s e subtraindo 48 eu pego justamente o numero correspondete aquel código

    for (int i = 1;i <12;i++){
        cpf_n[i] = cpf[i] -48; // subtraindo 48 posições do código digitado para pegar justamente o numero da tabela asp 2 
        soma_cpf += cpf[i] * i;
    }
    verificador1 = soma_cpf /11;
    printf("A soma total destes digitos do cpf dividio por 11 é igual a %i",verificador1);

    //printf("%s",cpf);
        
    return 1 ;
}