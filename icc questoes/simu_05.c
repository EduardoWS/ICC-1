#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maior(int n1, int n2){
    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}

void ordenar(int *vet, int tvet){

    int m, n;
    for(int i=0; i<tvet; i++){
        if(i < tvet-1){

            m = maior(vet[i], vet[i+1]);
            if(m == vet[i+1]){
                n = vet[i];
                vet[i] = m;
                vet[i+1] = n;
            }
        }
        else vet[i] = m;

    }

    for(int j = 0; j<tvet; j++){
        printf("%d ", vet[j]);
    }


}

int main(){

    int tvet;
    scanf("%d", &tvet);

    int *vet;
    vet = malloc(tvet * sizeof(int));

    srand(time(NULL));

    for(int i=0; i<tvet; i++){
        vet[i] = rand() % 10;
    }

    ordenar(vet, tvet);
    printf("\n");

    for(int j = 0; j<tvet; j++){
        printf("%d ", vet[j]);
    }



    return 0;
}