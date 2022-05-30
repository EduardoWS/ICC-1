#include <stdio.h>

int main(){

    FILE *arq;
    char nome[40];
    int sal_p, n;

    scanf("%s %d", &nome, &sal_p);
    printf("\n");

    arq = fopen(nome, "r");

    if(arq == NULL){
        printf("Nao foi possivel ler o arquivo.");
        exit(0);
    }

    fscanf(arq, "%d", &n);
    for (int i=0; i<n; i++){
        char nome[40];
        int idade, sal;
        char cargo[40];

        fscanf(arq, "%s", &nome);
        fscanf(arq, "%d", &idade);
        fscanf(arq, "%s", &cargo);
        fscanf(arq, "%d", &sal);

        if(sal > sal_p){
            printf("nome: %s\n", nome);
            printf("idade: %d\n", idade);
            printf("cargo: %s\n", cargo);
            printf("salario: %d\n", sal);
            printf("\n");
        }
    
    }
    fclose(arq);



    return 0;
}