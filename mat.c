#include <stdio.h>

int main()
{
    int m[3][3] ={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;

    printf("imprimindo toda a matriz:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
}