#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 3

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa pessoa;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    pessoa lista[TAM];
    int i;

    for(i = 0; i < TAM; i++){
        printf("Insira os seus dados (%d):\n", i+1);
        puts("Nome: ");
        scanf("%49[^\n]", lista[i].nome);
        getchar();

        puts("Idade: ");
        scanf("%d", &lista[i].idade);
        getchar();

        puts("Peso: ");
        scanf("%f", &lista[i].peso);
        getchar();
    }
    system("clear");

    puts("Seus dados:\n");
    for(i = 0; i < TAM; i++){
        printf("---------------------Pessoa %d------------------------\n", i+1);
        printf("tNome: %s\n", lista[i].nome);
        printf("tNome: %d\n", lista[i].idade);
        printf("tNome: %f\n", lista[i].peso);
    }
    printf("-------------------------------------------------\n");
}