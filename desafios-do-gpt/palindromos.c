#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");

    char input[101];
    printf("Vamos verificar se a sua frase ou palavra é um Palíndromo. Vocẽ tem um limite de 100 caracteres!\n Digite aqui: ");
    scanf("%100[^\n]", input);

    printf("%ld\n", strlen(input));
}

char palin(char p){

}