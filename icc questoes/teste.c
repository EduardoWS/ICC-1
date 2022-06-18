#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int valor, flag = 0;

    while(flag == 0){
        valor = (rand() % 2) + 1;
        printf("%d", valor);
    }

    return 0;
}