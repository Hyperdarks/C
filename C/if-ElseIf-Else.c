#include <stdio.h>
#include <string.h>


int main () {

    int hora;
    printf("Digite uma hora do dia: ");
    scanf("%d", &hora);

    if(hora < 12){
        printf("Bom dia!\n");

    }else{
    printf("Boa tarde!\n");

    }

    return 0;





}

