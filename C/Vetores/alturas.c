#include <stdio.h>


int main() {
    int N, i, menor;
    double media, mediaG, porcentagem;
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);
    char nome[N][50];
    double altura [N];
    int idade[N];

    for(i = 0; i <= N-1; i++){
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);

    }
    media = 0;
    for(i = 0; i <= N-1; i++){
        media = media + altura[i];

    }
    menor = 0;
    for(i = 0; i <= N-1; i++){
        if(idade[i] < 16){
            menor = menor + 1;
        }

    }
    mediaG = media / N;
    porcentagem = (double) menor * 100 / N;
    printf("\nAltura media = %.2lf\n", mediaG);
    printf("\nPessoas com menos de 16 anos : %.1lf %%", porcentagem);
    mediaG = media / N;
    for(i = 0; i <= N-1; i++){
        if(idade[i] < 16){
            printf("\n%s", nome [i]);
        }

    }

    return 0;

}
