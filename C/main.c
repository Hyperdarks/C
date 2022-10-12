
#include <stdio.h>


int main()
{
    int idade = 32;
    char nome[50] = "Maria Silva";
    char sexo = 'F';
    double salario = 4560.9;

    //printf("%d\n", idade);// %d troca posicao com inteiro, \n da uma quebra de linha, igual um println no java
    //printf("%.2lf\n", salario); // .2 significa a quantidade de casas decimais, lf troca de lugar com double

    printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d anos\n", nome, sexo, salario, idade); //%s troca de posicao com string, um char mais longo
    // %c troca de posicao com char, %lf troca de posicao com double e .2 significa a quantidade de casas decimais depois da virgula
    // %d troca de lugar com int(eiro), \n da uma quebra de linha como se fosse prinln no java


    return 0;




}

