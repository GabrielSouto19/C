include <stdio.h>
#include <string.h>

// Definição da estrutura Funcionario com typedef
typedef struct {
    char nome[50];
    int matricula;
    char cargo[50];
    float horaExtra;   // Valor pago por hora extra
    float salarioBase;
    float horas_extras; // Quantidade de horas extras trabalhadas
} Funcionario;

// Função para calcular o salário final (base + horas extras)
float calcularSalario(Funcionario f) {
    return f.salarioBase + (f.horas_extras * f.horaExtra);
}

// Função para exibir informações do funcionário
void exibirFuncionario(Funcionario f) {
    printf("\nNome: %s\n", f.nome);
    printf("Matrícula: %d\n", f.matricula);
    printf("Cargo: %s\n", f.cargo);
    printf("Salário Base: %.2f\n", f.salarioBase);
    printf("Horas Extras: %.2f\n", f.horas_extras);
    printf("Valor por Hora Extra: %.2f\n", f.horaExtra);
    printf("Salário Final: %.2f\n", calcularSalario(f));
}

// Função para preencher os dados de um funcionário via teclado
void preencherFuncionario(Funcionario *f) {
    printf("Digite o nome do funcionário: ");
    scanf(" %[^\n]", f->nome);  // Lê string com espaços

    printf("Digite a matrícula: ");
    scanf("%d", &f->matricula);

    printf("Digite o cargo: ");
    scanf(" %[^\n]", f->cargo);  // Lê string com espaços

    printf("Digite o salário base: ");
    scanf("%f", &f->salarioBase);

    printf("Digite o valor da hora extra: ");
    scanf("%f", &f->horaExtra);

    printf("Digite a quantidade de horas extras: ");
    scanf("%f", &f->horas_extras);
}

int main() {
    Funcionario funcionarios[3]; // Array para armazenar 3 funcionários

    // Preenchendo os dados dos 3 funcionários
    for (int i = 0; i < 3; i++) {
        printf("\nPreenchendo os dados do funcionário %d\n", i + 1);
        preencherFuncionario(&funcionarios[i]);
    }

    // Exibindo informações dos funcionários
    for (int i = 0; i < 3; i++) {
        exibirFuncionario(funcionarios[i]);
    }

    return 0;
}