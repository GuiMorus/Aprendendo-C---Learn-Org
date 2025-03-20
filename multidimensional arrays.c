// Iniciando biblioteca padrão de entrada e saida
#include <stdio.h>

// Main Function
int main(){
    // Iniciando variavel das vogais
    char vogais[2][5] = {
        {'a', 'e', 'i', 'o', 'u'},
        {'A', 'E', 'I', 'O', 'U'}
    };

    // Mostrando vogais
    printf("Vogais: %c", vogais[0][1]);
}
