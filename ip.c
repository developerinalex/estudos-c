/*código básico simples para verificar se um número é par ou ímpar*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ver(int num);

int main(int agrc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");
    int i, t;

    printf("digite um número para vermos se ele é par ímpar: ");
    scanf("%d", &i);

    t = ver(i);
    

}

int ver(int num){
    if(num % 2 == 0){
        printf("par\n");
    }
    else if(num == 0){
        printf("par\n");
    }
    else {
        puts("ímpar");
    }
}