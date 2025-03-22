#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa pessoa;

int main()
{
    setlocale(LC_ALL, "Portuguese");
   
    //primeira parte do código

    pessoa p = {0, 0.0, "teste"};
    
    printf("Início:\n");
    printf("Idade: %d\n", p.idade);
    printf("Peso: %f\n", p.peso);
    printf("Nome: %s\n", p.nome);
    
    //segunda parte

    p.idade = 18;
    p.peso = 60;
    strcpy(p.nome, "Juarez");
    
    printf("Alterando via código:\n");
    printf("Idade: %d\n", p.idade);
    printf("Peso: %.2f\n", p.peso);
    printf("Nome: %s\n", p.nome);
    
    //terceira parte

    printf("Insira sua idade: ");
    scanf("%d", &p.idade);
    printf("Insira seu peso: ");
    scanf("%f", &p.peso);
    fflush(stdin);
    printf("Insira seu nome: ");
    scanf("%s", p.nome);
    
    printf("Dados do cliente alterado.\n");
    printf("Esta é sua idade: %d\n", p.idade);
    printf("Este é o seu peso: %.2f\n", p.peso);
    printf("Seu nome: %s\n", p.nome);   
}