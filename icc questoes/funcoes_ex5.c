#include <stdio.h>

/* Escreva um programa que contenha uma função 
que receba dois valores inteiros n1 e n2, e retorne 
a soma de todos os valores pares entre n1 e n2 
(inclusive ambos, se for o caso). A função principal 
deve imprimir o resultado obtido e prosseguir enquanto 
n1 < n2. */

int soma(int n1, int n2){
    int result;
    result = 0;
    for(int i=n1; i<=n2; i++){
        if (i%2 == 0){
            result += i;
        }
    }
    printf("%d\n\n", result);
    


    return 0;
}



int main(){

    int n1=0, n2=1;


    while (n1 < n2){
        scanf("%d", &n1);
        scanf("%d", &n2);

        if(n1 < n2){
            soma(n1, n2);
        }
        else{
            break;
        }



    }


    return 0;
}