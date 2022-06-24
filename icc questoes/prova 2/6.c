/* 
Nome: Eduardo Ribeiro Rodrigues
NUSP: 13696679
*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>


void ordenar_vetor(int *vet, int tvet){
    int aux;
    
    for(int n=0; n<tvet; n++){
        for(int o=n+1; o<tvet; o++){
            if(vet[n] > vet[o]){
                aux = vet[n];
                vet[n] = vet[o];
                vet[o] = aux;
            }
        }
    }
    

    
}

int main(){
	int *A, *B, *C;
    
	A = (int *)malloc(1000 * sizeof(int));
    B = (int *)malloc(1000 * sizeof(int));
    C = (int *)malloc(2000 * sizeof(int));
	
   
    
    srand(time(NULL));
        
    //definindo o vetor A
    for(int j=0; j<1000; j++){
        A[j] = rand() % 1000;
    }
    ordenar_vetor(A, 1000);

    
    

    //definindo o vetor B
    for(int h=0; h<1000; h++){
        B[h] = rand() % 1000;
    }
    
    ordenar_vetor(B, 1000); 
    
    gerar_c(A, B, C);
    


    //imprimindo o vetor C
    for(int p=0; p<2000; p++){
        printf("%d ", C[p]);
    }
        
    return 0;
}


void gerar_c(int *A, int *B, int *C){
    //definindo o vetor C  
    for(int m=0; m<2000; m++){
        if(m<1000){
            C[m] = A[m];
        }
        else{
            C[m] = B[m - 1000];
        }
    }

    ordenar_vetor(C, 2000);

}



        

    


        
	