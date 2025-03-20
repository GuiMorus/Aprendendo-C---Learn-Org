// Importanto biblioteca padrão I/O
#include <stdio.h>


// Função principal
int main(){
    // Iniciando variáveis
    int maior = 10;
    int menor = 8;

    // Condições
    if(maior == 10){
        printf("Maior é igual a 10\n");
    }

    if(menor > maior){
        printf("Menor é maior que maior\n");
    } else {
        printf("Menor não é maior que Maior\n");
    }

    if(menor > 5){
        printf("Menor é maior que 5\n");
    }else{
        printf("Menor não é maior que 5\n");
    }

    // Usando AND e OR
    if(menor == 8 && maior == 10){
        printf("Ambos os números estão corretos\n");
    }

    if(menor > maior || maior > menor){
        printf("Um dos 2 estão corretos\n");
    }

    if(menor != maior){
        printf("Menor é diferente de maior");
    }
    
    return 0;
}
