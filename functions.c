// Importando biblioteca padrão I/O
#include <stdio.h>

// Declarando funções
int dobro(int numero);
void barras();

// Função Principal
int main(){
    printf("Dobro de 7: %d", dobro(7));     // Mostrando resultado da função
    barras();
    printf("Dobro de 4: %d", dobro(4));

    return 0;
}

// Função Dobro
int dobro(int numero){
    int resultado = numero * 2;
    return resultado;
}

// Função Barras
void barras(){
    printf("\n------------------------\n");
}
