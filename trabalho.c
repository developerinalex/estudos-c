#include <stdio.h>

int main(int argc, char *argv[]){
    int i;

    if(argc > 1){
        printf("Foram insiridos %d dados.", argc);
        for(i = 0; i < argc; i++){
            printf("%s\n", argv[i]);
        }
    }
    else {
        printf("Não foram inseridos nenhum dados.\n");
    }
}