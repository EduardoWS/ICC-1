#include <stdio.h>

/* Escreva um programa que recebe as 3 notas de um aluno 
e uma letra. Se a letra for A chama uma função que calcula 
a média aritmética das notas do aluno, se for P,  chama uma 
função que calcula sua média ponderada (pesos: 5, 3 e 2) e 
se for H, chama uma função que mostra o maior nota. */

int arit(int n1, int n2, int n3){
	int media;
	media = (n1 + n2 + n3)/3;
	
	printf("Media: %.1f", (float)media);
	return 0;
}

int pond(int n1, int n2, int n3){
	int media;
	media = (n1*5 + n2*3 + n3*2)/10;
	printf("Media: %.1f", (float)media);
	return 0;
}


int maior(int n1,int n2,int n3){
	int maior;
	if (n1 < n2 && n1 < n3){
		
		if (n2 < n3){
			
			maior = n3;
		}
		else{
			
			maior = n2;
		}
	}
	else{
		maior = n1;
		
	}
	
	printf("Media: %.1f", maior);
	return 0;
}



int main(){
	int n1, n2, n3;
	char letra;
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf(" %c", &letra);
	
	
	if (letra == 'A'){
		arit(n1, n2, n3);
		
	}
	else{
		if (letra == 'P'){
			pond(n1, n2, n3);
		}
		else{
			maior(n1, n2, n3);
		}
	}
	
	return 0;
}