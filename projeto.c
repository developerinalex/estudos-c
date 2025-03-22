#include <stdio.h>

float media(float a, float b, float c, float d);

int main(int argc, char *argv[])
{
    float a,b,c,d,m;
    printf("Calculando a média entre 4 números.\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
    printf("Digite o terceiro número: ");
    scanf("%f", &c);
    printf("Digite o quarto número: ");
    scanf("%f", &d);

    m = media(a,b,c,d);
    printf("media: %.2f\n", m);
}

float media(float a, float b, float c, float d){
    return((a + b + c + d) / 4);
}