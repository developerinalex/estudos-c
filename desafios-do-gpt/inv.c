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
    int y = 0;

    while(num > 0){
        y = num % 10;
        x = x * 10 + y;
        num = (num - (num % 10)) /10;
    }

    printf("%d\n", x);
}