#include <stdlib.h>
#include <stdio.h>

int main () {

	int num;

	printf("Informe um numero: ");
	scanf("%d", &num);
	if (num % 2 == 0)
        {
		printf("O numero e par.");
	}
	else {
		printf("O numero e impar.");
    }

	return 0;
}

