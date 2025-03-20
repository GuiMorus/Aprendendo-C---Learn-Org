// Tipos de variáveis
// char         | 1 byte     | valores entre -128 a 127
// short        | 2 bytes    | valores entre -32,768 a 32,767
// int          | 4 bytes    | valores entre -2,147,483,648 a 2,147,483,647
// long         | 4/8 bytes  | mesmo valor ou maior que int
// long long    | 8 bytes    | valores entre -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807
// unsigned é utilizado somente para valores positivos, sem o bit para sinal negativo

// Importando biblioteca padrão de entrada e saída
#include <stdio.h>

// Main function
int main() {
    // Definindo variáveis
    int num1 = 1;
    int num2 = 5;
    int num3 = 10;
    int resultado = num1 + num2 + num3;

    // Mostrando soma das variáveis
    printf("O resultado da soma é: %d", resultado);

    // Retornando valor da função
    return 0;
}
