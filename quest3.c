#include <stdlib.h>
#include <stdio.h>


int main () {

	int num;
	int fa;
	printf("Informe um numero para calcular seu fatorial: \n");
	scanf("%d", &num);
	for (fa = 1; num > 1; num--) {
		fa = fa * num;
	}
	printf("Fatorial: %d", fa);
	return 0;
}
