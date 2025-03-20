// Importando biblioteca padrão I/O
#include <stdio.h>

// Função Principal
int main(){
    // Iniciando repetição
    for(int i = 0; i < 10; i++){
        printf("Iterador em: %d \n", i);
    }

    // Somando números dentro de uma array
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int soma = 0;

    for(int i; i < 10; i++){
        soma += array[i];
    }

    printf("A soma é: %d", soma);

    return 0;
}