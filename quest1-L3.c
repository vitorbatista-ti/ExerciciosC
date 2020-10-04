#include <stdlib.h>
#include <stdio.h>
int main ( ) {
    int count;
    char nome[10];
    char copia[10];

        printf("digite um nome no maximo 10 caracteres: ");
        scanf("%s", &nome);
        for(count=0;nome[count];count++)
        copia[count] = nome[count];
        copia[count] = '\0';
        printf("primeiro nome: %s", nome);
        printf("\n");
        printf("segundo nome: %s", copia);

        return 0;
    }
