#include <stdio.h>


int main() {

    int N, i, j, count;
    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);
    int mat[N][N];

    for(i = 0; i < N; i++){
        for(j = 0; j< N; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);

        }
    }
    count = 0;
    printf("DIAGONAL PRINCIPAL: \n");
    for(i = 0; i < N; i++){
        for(j = 0; j< N; j++){
            if(mat[i] == mat[j]){
                printf("%d  ", mat[i][j]);
            }

        }
    }
    for(i = 0; i <= N-1; i++){
        for(j = 0; j<= N-1; j++){
            if(mat[i][j] < 0){
                count++;
            }

        }
    }
    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", count);

    return 0;






}
