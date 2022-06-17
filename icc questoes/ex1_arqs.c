#include<stdio.h>

int main(){

    FILE *arq;
    char nome[128];
    scanf("%s", &nome);

    arq = fopen(nome, "r");

    if(arq == NULL){
        printf("Erro ao ler arquivo.");
        exit(0);
    }

    int resultado = 0, soma;
    while(!feof(arq)){
        fscanf(arq, "%d", &soma);
        resultado += soma;
    }
    printf("%d", resultado);

    return 0;
}