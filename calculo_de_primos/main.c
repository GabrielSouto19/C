#include <stdio.h>

// nome : Gabriel Souto Da Silva
// Data : 26/08/24
// Programa para descobrir os 20 proximos numeros primos apos o numero digitado pelo usuario

int main(){
    // campo para Declaraçõs de variaveis

    int numero,controle,divisores = 0;

    printf("Insira o numero de inicio que voce deseja saber os proximos 20 numero primos");
    scanf("%d",&numero);
    controle = 0;
    while (controle < 20){
        divisores = 0;// precisamos reatribuir o valor de divisores toda vez que mudamos de numero 


        // Inicio do escopo que verifica se o numero é primo ou não
        for (int i = numero;i >0 ; i-=1){ //
            if (numero % i == 0){
                divisores +=1;//verifica se ha divisores
            }
        }
        if (divisores <=2){
            printf("\n Este numero é primo: %i",numero);
            controle +=1;
        }
        

        // Final do escopo que verifica se o numero é primo ou não
        numero +=1;

    }
    return 1;
}
