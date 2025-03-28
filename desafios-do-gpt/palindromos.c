#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

char verify(char n);

int main(){
    setlocale(LC_ALL, "Portuguese");

    char jazz[101], result;

    printf("digite algo: ");
    scanf("%101[^\n], jazz");

    result = verify(jazz);

    return 0;
}

char verify(char n){
    int palin, i = strlen(n);
    char ver[101];
    char *ptr = ver;
    for(i = 0; i < palin; i++){
        ptr = n % 10;
    }
    return n;
}