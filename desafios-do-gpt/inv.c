#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int invertor(int num);

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    invertor(n);
    return 0;
}


int invertor(int num){
    num = abs(num);
    int x = 0;
    int y;

    do{
        y = num % 10;
        x *= 10 + y;
    }while(num > 0);

    return x;
}