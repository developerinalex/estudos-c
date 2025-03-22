#include <stdio.h>

int main()
{
    char nome[20];
    int v[4];

    printf("Seja bem-vindo. Que tal começarmos pelo seu nome? ");
    scanf("%s", nome);

    printf("É um prazer, %s. Agora, crie uma senha de 4 digítos: ", nome);
    scanf("%d", v);

}