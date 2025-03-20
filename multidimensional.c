// Importando biblioteca padrão I/O
#include <stdio.h>

// Função principal
int main(){
    // Arrays bidimensionais
    // Em x temos as linhas e em y temos as colunas
    char biArray[2][5] = { 
        {'a', 'e', 'i', 'o', 'u'},
        {'A', 'E', 'I', 'O', 'U'}
    };

    // A linguage C consegue identificar o númedo de linhas sozinho
    int biArray2[][5] = {
        {1 ,2 , 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    // Para acessar um elementa na array basta indicar seu valor em [x][y]
    printf("Linha 2, Coluna 3: %d\n", biArray2[1][2]);
    printf("Linha 3, Coluna 5: %d\n", biArray2[2][4]);

    // Mostrando os dados da primeira Array
    printf("Primeiro elemento: %c\n", biArray[0][0]);
    printf("Mostrando I maiúsculo: %c", biArray[1][2]);
    return 0;
}

