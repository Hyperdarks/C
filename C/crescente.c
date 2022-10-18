#include <stdio.h>


int main ()
{
    int a, b, i;
    printf("Digite dois numeros: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b) {
            printf("DECRESCENTE");
        }else {
            printf("CRESCENTE");
        }

    while (a != b)
    {
        printf("\nDigite outros dois numeros: \n");
        scanf("%d", &a);
        scanf("%d", &b);
        if(a > b) {
            printf("DECRESCENTE");
        }else if (b > a) {
            printf("CRESCENTE");

    }

    }








    return 0;
}
