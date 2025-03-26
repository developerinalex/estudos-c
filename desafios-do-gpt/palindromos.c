#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

char palin(char p);

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");

    char input[101];
    printf("Vamos verificar se a sua frase ou palavra é um Palíndromo. Vocẽ tem um limite de 100 caracteres!\n Digite aqui: ");
    scanf("%100[^\n]", input);

    char verify;

    verify = palin(input);
}

char palin(char p){
    int in = strlen(p);
    int i = 0;
    char on[101], result[101] = p;

    for(i = 0; i < in; i++){
        result[101] = on[101];
    }

    if(result == p){
        printf("%s", result);
    }
    else{
        printf("A palavra não é um palíndromo.");
    }
}