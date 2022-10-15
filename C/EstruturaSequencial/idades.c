#include <stdio.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}


int main()
{
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;
    printf("\nDados da primeira pessoa: \n");
    printf("Nome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("\nDados da segunda pessoa: \n");
    printf("Nome: ");
    limpar_entrada();
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (double) (idade1 + idade2) / 2;

    printf("A idade media de %s e %s eh de %.1lf anos", nome1, nome2, media);


    return 0;
}
