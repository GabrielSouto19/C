
#include <stdio.h>

//variaveis de escopo local 
int valor1,valor2,total; 


int soma (int a,int b){
    return a+b;
}

int main()
{
    
    printf("Entre com o primeiro valor");
    scanf("%i",&valor1);
    printf("Entre com o segundo valor ");
    scanf("%i",&valor2);
    printf("A soma destes dois valores é igual a ");
    total = soma(valor1,valor2);
    printf("%d",total);
    return total;
}
