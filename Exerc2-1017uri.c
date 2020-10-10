#include <stdio.h>

int main() {

    double tempo;
    double velocidade;
    scanf("%lf", &tempo);
    scanf("%lf", &velocidade);
    double resposta = (tempo * velocidade)/12;
    printf("%.3lf\n", resposta);
    return 0;
}
