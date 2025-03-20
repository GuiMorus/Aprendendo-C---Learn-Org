// Importanto biblioteca padrão I/O
#include <stdio.h>

// Função Principal
int main(){
    // Iniciando variáveis
    char* texto = "Olá mundo!\n";
    char texto2[] = "Muuuuundo\n";

    // Mostrando variáveis
    printf(texto);
    printf(texto2);

    // Dados do usuário
    char* nome = "Guilherme";
    int idade = 26;
    printf("%s tem %d de idade.\n", nome, idade);   // Mostrando texto
    printf("%d\n", strlen(nome));                     // Mostrando tamanho do nome

    // Comparando strings
    if(strncmp(nome, "Guilherme") == 0){
        printf("Olá %s \n", nome);
    } else {
        printf("Você não é o %s, saia! \n", nome);
    }

    // Concatenando Strings
    char hello[20] = "Hello";
    char world[20] = "World";

    strncat(hello, world, 5);
    printf("%s \n", hello);
    printf("Tamanho do Hello: %d\n", strlen(hello));
    printf("Tamanho do World: %d", strlen(world));

    return 0;
}
