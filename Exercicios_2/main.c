/*#include <stdlib.h>
#include <stdio.h>
int main () {

	int num;

	for (;;) {
		printf("Digite 1 - Exibir o seu perfil.\n");
		printf("Digite 2 - Alterar usuário. \n");
		printf("Digite 3 - Alterar a senha. \n");
		printf("Digite 4 - Exibir compras. \n");
		printf("Digite 5 - Valor total de todas as compras. \n");
		printf("Digite 6 - Itens comprados. \n");
		printf("Digite 7 - Lista de compras. \n");
		printf("Digite 8 - Alterar precos. \n");
		printf("Digite 9 - Orcamentos.\n");
		scanf("%d", &num);
		if (num == 0) {
			printf ("Adeus. \nFim do programa.");
			break;
		}
		if (num > 9){
				printf("Número inválido");
			}


    }

	return(0);
}
questão 1*/
/*
#include <stdlib.h>
#include <stdio.h>

int main () {

	int num;

	printf("Informe um número: ");
	scanf("%d", &num);
	if (num % 2 == 0)
        {
		printf("O número é par.");
	}
	else {
		printf("O número é impar.");
    }

	return 0;
}
questão 2*/


#include <stdlib.h>
#include <stdio.h>


int main () {

	int num;
	int fa;
	printf("Informe um numero para calcular seu fatorial: \n");
	scanf("%d", &num);

	for (fa = 1; num > 1; num--)
        {
		fa = fa * num;

    }

	printf("Fatorial: %d", fa);

	return 0;

}


/*
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
questão 4*/
