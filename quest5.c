#include <stdlib.h>
#include <stdio.h>
int main ( ) {

	int razao;
	int i;
	int x;
	int vet[i];
	printf ("Informe a quantidade de elementos: \n");
	scanf ("%d", &x);
	int vetor[x];
	printf ("Informe a razao da PA\n");
	scanf ("%d", &razao);
	for (i=0; i < x ; i++){
		vet [i+1] = vet[i] + razao;
		printf (" %d , ", vet[i]);
	}
}
