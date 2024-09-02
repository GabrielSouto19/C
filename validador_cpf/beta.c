#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Validador de CPF
// Autor : Gabriel Souto Da Silva
// Data 02/09/24



int validarCPF(char cpf[]);

int main() {
    char cpf[12]; // Para armazenar o CPF (11 dígitos + '\0')
    
    printf("Digite o CPF (somente números): ");
    scanf("%s", cpf);
    
    // Validar se o CPF é válido
    if (validarCPF(cpf)) {// É chamada esta função que valida o cpf e caso retorne 1 ele exibe a mensagem cpf Valido
        printf("CPF válido!\n");// 
    } else {// CASO contrario ele exibe a mensagem CPF invalido
        printf("CPF inválido!\n");
    }
    
    return 0;
}

int validarCPF(char cpf[]) {
    // função que valida o cpf  baseado em criterios pre estabelecidos usados como base para fazer os calculos 
    
    int i, j, digito1, digito2, soma;

    // Verificar se todos os caracteres são números
    for (i = 0; i < 11; i++) {
        if (!isdigit(cpf[i])) {
            return 0; // CPF inválido se contém caracteres não numéricos
        }
    }

    // Primeiro dígito verificador
    soma = 0;
    for (i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i);
    }
    digito1 = 11 - (soma % 11);
    if (digito1 >= 10) {
        digito1 = 0;
    }
    
    // Segundo dígito verificador
    soma = 0;
    for (i = 0; i < 10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }
    digito2 = 11 - (soma % 11);
    if (digito2 >= 10) {
        digito2 = 0;
    }

    // Comparar dígitos verificadores calculados com os fornecidos
    if ((digito1 == (cpf[9] - '0')) && (digito2 == (cpf[10] - '0'))) {
        return 1; // CPF válido
    } else {
        return 0; // CPF inválido
    }
}
