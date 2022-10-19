#include <stdio.h>


int main() {

    int N, i;
    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &N);
    int vet[N];
    for(i = 0; i <= N-1; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

    }

    printf("NUMEROS NEGATIVOS:\n");
    for(i = 0; i <= N-1; i++){
        if(vet[i] < 0){
            printf("%d\n", vet[i]);
        }

    }

    return 0;

}
