/*fazendo um contador de dígitos todos esses desafios que estou resolvendo estaá sendo proposto pelo chatgpt*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int very(int num);

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");
    int i;

    printf("digite um número: ");
    scanf("%d", &i);

    int c = very(i);
    printf("o número tem %d dígitos.\n", c);
}

int very(int num){
    int cont = 0;

    if(num < 10 && num > -1){
        return 1;
    }
    else {
        while(num > 0){
            num /= 10;
            cont++;
        }
        return cont;
    }
}