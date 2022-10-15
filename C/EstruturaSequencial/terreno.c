#include <stdio.h>

int main(){
    double largura, comp, valor, area, preco;
    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura );

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comp);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor );

    area = largura * comp;
    preco = area * valor;

    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf\n", preco);



    return 0;
}
