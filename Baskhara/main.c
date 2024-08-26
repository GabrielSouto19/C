#include <stdio.h>
//variaveis de escopo local
// Programa para calcular o valor de delta scanf()
float delta1 ;

int calcular_delta(int a, int b , int c ){
    float delta;
    delta = (b*b) -4*(a*c);
    return delta;


}
int main(){
    int a,b,c ;
    //programa principal
    printf("Digite o valor de a ");
    scanf("%i",&a);
    printf("Digite o valor de b");
    scanf("%i",&b);
    printf("Digite o valor de c");
    scanf("%i",&c);
    delta1 = calcular_delta(a,b,c);
    printf("O valor do calculo de delta é igual a %d", delta1);
}
