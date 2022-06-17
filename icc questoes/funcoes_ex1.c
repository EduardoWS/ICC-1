#include <stdio.h>

/*Faça um programa que recebe 3 valores inteiros por parâmetro e 
retorna-os ordenados em ordem crescente. Para fazer a ordenação 
utilize uma função. */


int ordenar(int x, int y, int z){
	int menor, meio, maior;
	if (x < y && x < z){
		menor = x;
		if (y < z){
			meio = y;
			maior = z;
		}
		else{
			meio = z;
			maior = y;
		}
	}
	else{
		maior = x;
		if (y < z){
			menor = y;
			meio = z;
		}
		else{
			menor = z;
			meio = y;
		}
	}
	printf("%d\n", menor);
	printf("%d\n", meio);
	printf("%d\n", maior);
	return 0;
}

int main(){
	int x, y, z;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	printf("\n");
	
	ordenar(x, y, z);
	
	
	
	return 0;
}