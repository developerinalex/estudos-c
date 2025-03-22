/*fazendo um contador de dígitos todos esses desafios que estou resolvendo estaá sendo proposto pelo chatgpt*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int very(int num, int cont);

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");
    int i;
    int c = 0;

    printf("digite um número: ");
    scanf("%d", &i);

    very(i,c);
    printf("%d", c);
}

int very(int num, int cont){
    while(num > 0){
        num/10;
        cont++;
    }
}