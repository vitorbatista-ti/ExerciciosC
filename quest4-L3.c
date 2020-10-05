#include <stdlib.h>
#include <stdio.h>
int main ( ) {

    char str [50];
    int contador;
    printf ("digite o que desejar ate 50 caracteres: ");
    gets (str);
    for(contador = 0; str [contador] != '\0' && contador < 50; contador++);
    printf("Quantidade de caracteres em seu nome: %d", contador);

    return 0;
}
