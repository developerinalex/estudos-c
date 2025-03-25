#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int invertor(int num);

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");

    int n, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    resultado = invertor(n);
    printf("o inverso do seu número é: %d\n", resultado);
    return 0;
}


int invertor(int num){
    int sinal = (num < 0) ? -1 : 1;
    num = abs(num);
    int x = 0, y;

    while(num > 0){
        y = num % 10;
        x = x * 10 + y;
        num /= 10;
    }

    return x * sinal;
}