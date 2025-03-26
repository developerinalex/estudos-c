//aprendendo ponteiros pq tava tendo muito problema com variáveis do tipo char
//e o terminal sempre falava para eu usar ponteiros, então vamo aprender pra
//parar de apanhar pra C

#include <stdio.h>
#include <stdlib.h>

void display(int var, int* ptr);
void update(int* p);

int main(){
    int var = 15;
    int* ptr;

    ptr = &var;

    display(var, ptr);

    update(&var);

    display(var, ptr);
    

    return 0;
}

void display(int var, int* ptr){
    printf("\n\n");
    printf("conteudo: %d\n", var);
    printf("endereço: %p\n", &var);
    printf("conteudo apontado: %d\n", *ptr);
    printf("endereço apontado: %p\n", ptr);
    printf("endereço do ponteiro: %p\n", &ptr);
}

void update(int* p){
    *p = *p+1;
}