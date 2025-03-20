// Iniciando biblioteca padrão I/O
#include <stdio.h>

// Função Principal
int main(){
    // Iniciando Loop
    int i = 0;
    while (i < 10){
        printf("While em: %d \n", i);
        i++;
    }
    printf("Fim do while \n");

    // Parando loops do while
    i = 0;
    while(i < 10){
        printf("While em: %d \n", i);
        i++;

        if(i == 7){
            break;
        }
    }

    // Reiniciando o loop do while
    i = 0;
    while(i < 10){
        printf("While continue em: %d \n", i);
        i++;

        if(i == 5){
            i++;
            continue;
        }
    }

    return 0;
}
