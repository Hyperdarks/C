#include <stdio.h>


int main() {
    double media, soma;
    int N, i;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);
    double vet[N];
    soma = 0;
    for(i = 0; i <= N-1; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        soma = soma + vet[i];
    }
    printf("Valores: ");
    for(i = 0; i <= N-1; i++){
        printf("%.1lf ", vet[i]);

    }
    media = soma / N;
    printf("\nSOMA = %.2lf", soma);
    printf("\nMEDIA = %.2lf", media);

    return 0;
}
