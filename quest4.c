
#include <stdlib.h>
#include <stdio.h>

int main () {

	int num;

	printf("Informe seu ano de nascimento: ");
	scanf("%d", &num);

	if (num % 4 == 0)
        {
		printf("O ano e bissexto.");
	}
	else {
		printf("O ano nao e bissexto.");
    }

	return 0;
}
