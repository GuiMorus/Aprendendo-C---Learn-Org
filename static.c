// Importanto bibliotecas padrões I/O
#include <stdio.h>

// Variáveis statics são acessíveis somente pelo arquivo em que foi declarada
static int secreto = 45;

// Função Corredores - Comum
int corredores(){
    int num = 0;               // A variávei sempre é reiniciada quando a função é chamada
    num++;
    return num;
}

// Função Contando Corredores - var static
int contandoCorredores(){
    static int numero = 0;      // A variável é criada uma vez e grava seu valor para sempre
    numero++;
    return numero;
}

// Função Até 3 - Static só pode ser acessada por este arquivo
static int ateTres(){
    return 3;
}

// Função Principal
int main(){
    // Mostrando contagem da Função Corredores
    printf("corredores: %d \n", corredores());
    printf("corredores: %d \n", corredores());

    // Mostrando contagem da Função ContandoCorredores
    printf("Contando Corredores: %d \n", contandoCorredores());
    printf("Contando Corredores: %d \n", contandoCorredores());

    // Mostrando atéTres
    printf("%d \n", ateTres());

    // Mostrando variável static
    printf("Variável static: %d", secreto);

    return 0;
}
