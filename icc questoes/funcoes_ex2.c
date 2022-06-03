#include <stdio.h>

/* Implemente uma função que faça o cálculo de potenciação. 
Os valores da base e do expoente devem ser fornecidos pelo 
usuário da seguinte forma: b ^ e , de modo que b é a base, 
e é o expoente e ^ é o símbolo da operação de potenciação.

Exemplo de entrada: 3 ^ 2

O programa deve estar disponível para calcular uma pontenciação 
até que o caracter 'p' seja utilizado no lugar do operador, 
independentemente dos números que o acompanhem.

Ex: 4 p 0

Além disso, caso seja utilizado um símbolo diferente de ^ o 
programa deve exibir a mensagem: "operador invalido". 

OBS: Não é permitido o uso da biblioteca math.h */

int potenciar(int n1, int n2){
	int result;
	result = 1;
	for(int i=0; i<n2; i++){
		result = result * n1;
	}
	printf("%d", result);
	
	return 0;
}



int main(){
	int n1, n2, flag = 0;
	char op;
	
	while (flag == 0){
		
		scanf("%d %c %d", &n1, &op, &n2);
		
		
		if(op == '^'){
			potenciar(n1, n2);
			printf("\n");
			
		}
		else{
			if(op == 'p'){
				break;
			}
			else{
				printf("operador invalido\n");
			}
		}
	}
	
	
	
	return 0;
}