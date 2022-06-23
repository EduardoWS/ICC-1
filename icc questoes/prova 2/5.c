/* 
Nome: Eduardo Ribeiro Rodrigues
NUSP: 13696679
*/

#include <stdio.h>
#include <stdlib.h>

void maiorElemento(int *v, int n, int *maior){

    *maior = v[0];
    int aux;
    for(int i=1; i<n; i++){
        if(v[i] > *maior){
            aux = *maior;
            *maior = v[i];
            v[i] = aux;
        }
    }

    printf("\nMaior elemento do vetor eh: %d\n", *maior);

}

void lerVetor(int *v, int n){

    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }

}


int main(){

    int n, *maior;

    scanf("%d", &n);

    printf("\n");

    int vet[n];
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    printf("\n");
    lerVetor(&vet, n);
    maiorElemento(&vet, n, &maior);

    return 0;
}