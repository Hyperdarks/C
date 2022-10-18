#include <stdio.h>
#include <math.h>


int main () {
    int a, b, c, menor;

    printf("Primeiro valor: ");
    scanf("%d", &a);
    printf("Segundo valor: ");
    scanf("%d", &b);
    printf("Terceiro valor: ");
    scanf("%d", &c);
    menor = 0;
    if(a < b && a < c){
        menor = a;
    }else if (b < c){
        menor = b;
    }else{
        menor = c;
    }

    printf("MENOR = %d", menor);




    return 0;




}
