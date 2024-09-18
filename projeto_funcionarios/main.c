#include<stdio.h>
#include<string.h>
//Autor Gabriel Souto Da Silva
//Data : 18/09/24
//Projeto 

int opcao,resp,resp2,funcionarios[3],horas_extras;
float salarioBase,horaExtra;
char nome[],matricula[],cargo[];

int menu(){
    //Função para gerar o menu interativo do programa
    printf("==================================================\n");
    printf("                  MENU PRINCIPAL                  \n");
    printf("==================================================\n");
    printf("1 - Cadastro FUncionario\n");
    printf("1 - Pesquisar FUncionario\n");
    printf("3 - Salario Funcionario\n");
    printf("4 - Para encerrar o programa \n");
    scanf("%d",&opcao);
    return opcao ;  
}
int menu_cadastro(){
    printf("===========================================\n");
    printf("                   CADASTRO                \n");
    printf("===========================================\n");
    printf("1 - SELECIONAR UM FUNCIOARIO\n");
    printf("2 - CADASTRAR UM NOVO FUNCIONARIO\n");
    scanf("%d",&opcao);

    return opcao;
}


int main(){
    // Definindo minha estrutura principal
    typedef struct {
        char nome[50];
        int matricula;
        char cargo[50];
        float horaExtra;
        float salarioBase;
        float horas_extras;
    }Funcionario;

    while (1){
        resp = menu();

        if (resp == 1){
                resp2 = menu_cadastro();
 
                printf("Digite o nome do funcionário: ");
                scanf("%s", &nome);  // Lê string com espaços
                printf("Digite a matrícula: ");
                scanf("%i", &matricula);
                printf("Digite o cargo: ");
                scanf("%c", &cargo);  // Lê string com espaços
                printf("Digite o salário base: ");
                scanf("%f", &salarioBase);
                printf("Digite o valor da hora extra: ");
                scanf("%f", &horaExtra);
                printf("Digite a quantidade de horas extras: ");
                scanf("%f", &horas_extras);
                if (horas_extras > 20){
                    printf("Não é possivel realizar mais de 20 horas extras mensais . deu mole playboy");
                }
 
            if(resp2 == 2){
                
                
            }


        }
        
        if (resp == 2){

        }
        if (resp == 3){

        }



        if (resp == 4){
            printf("Encerrando");
            break;  
        }

        



        



    }


    return 0;
}