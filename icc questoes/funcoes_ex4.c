#include <stdio.h>

/* Faça um programa que leia um número inteiro e 
imprima seu quadrado. Para calcular o quadrado do 
número crie uma função, de acordo com o protótipo 
abaixo, que receba o endereço de uma variável do 
tipo int e coloque o quadrado do número nela.

void quadrado(int *numPtr); */

void quadrado(int *numPtr){
	int quad;
	
	quad = *numPtr * *numPtr;
	
	printf("%d\n", quad);
	
}


int main(){
	int *numPtr, num;
	numPtr = &num;
	
	scanf("%d", numPtr);
	
	quadrado(numPtr);
	
	
	
	return 0;
}