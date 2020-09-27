#include <stdlib.h>
#include <stdio.h>

int main () {

	int num;

	for (;;) {

		printf(" Digite 1 - Exibir o seu perfil.\n");
		printf("Digite 2 - Alterar usuário. \n");
		printf("Digite 3 - Alterar a senha \n");
		printf("Digite 4 - Exibir compras. \n");
		printf("Digite 5 - Valor total de todas as compras. \n");
		printf("Digite 6 - Itens comprados. \n");
		printf("Digite 7 - Lista de compras. \n");
		printf("Digite 8 - Alterar preços. \n");
		printf("Digite 9 - Orçamentos.\n");
		scanf("%d", &num);
		if (num == 0) {
			printf ("Adeus. \nFim do programa.");
			break;
		}
		if (num > 9){
            printf("Número inválido");
            break;
			}
    }

	return(0);
}
