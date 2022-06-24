/* 
Nome: Eduardo Ribeiro Rodrigues
NUSP: 13696679
*/

#include <stdio.h>
#include <stdlib.h>

int contaDigitos(int n, int d, int contador, int led){

    int dig = 0;
    int cont = 0;
    int i = 1;

    while(i <= n){

        dig = (n%(10*i) - n%i) / i;
        i *= 10;
        cont += 1;

    }
    
    int vet[cont];
    int cont2 = 0;
    int i2 = 1;
    int dig2 = 0;

    for(int j=0; j<cont; j++){
        vet[j] = (n%(10*i2) - n%i2) / i2;
        i2 *= 10;
    }

    for(int i=0; i<cont; i++){
        if(vet[i] == d){
            cont2 += 1;
        }
    }

    

    if(led == 1) printf("%d\n", cont2);

    else{
        contador = cont2;
        return contador;
    }


}


int main(){

    int n, d, contador = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\nDigite um valor d, 0 < d <= 9: ");
    scanf("%d", &d);
    if(d <= 0 || d > 9){
        printf("Ja que nao quer seguir minhas instrucoes, vou sair...\n");
        return 0;
    }

    contaDigitos(n, d, contador, 1);

    printf("\nSEGUNDA PARTE DO EXERCICIO\n\n");

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int contA, contB;
    for(int i=1; i<=9; i++){
        contA = contaDigitos(a, i, contador, 0);
        contB = contaDigitos(b, i, contador, 0);

        if(contA != contB){
            printf("%d nao eh uma permutacao de %d\n", a, b);
            return 0;
        }
    }

    printf("%d eh uma permutacao de %d\n", a, b);

    return 0;
}