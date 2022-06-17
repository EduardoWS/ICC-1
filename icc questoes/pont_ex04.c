#include <stdio.h>


int main(){
	int k;
    int tA, tB;
	
	scanf("%d", &k);
	if(k >= 1000 || k <= 0){
		return 0;
	}
    printf("\n");
    for(int i=0; i<k; i++){
        
        
        //definindo o vetor A
        scanf("%d", &tA);
        int A[tA];
        for(int j=0; j<tA; j++){
            scanf("%d", &A[j]);
        }
        printf("\n");

        //definindo o vetor B
        scanf("%d", &tB);
        int B[tB];
        for(int h=0; h<tB; h++){
            scanf("%d", &B[h]);
        }


        //definindo o vetor C
        int C[tA + tB];
        for(int m=0; m<tA+tB; m++){
            if(m<tA){
                C[m] = A[m];
            }
            else{
                C[m] = B[m - tA];
            }
        }

        int aux;
        for(int n=0; n<tA+tB; n++){
            for(int o=n+1; o<tA+tB; o++){
                if(C[n] > C[o]){
                    aux = C[n];
                    C[n] = C[o];
                    C[o] = aux;
                }
            }
        }
        printf("\n");
        

        //imprimindo o vetor C
        for(int p=0; p<tA+tB; p++){
            printf("%d ", C[p]);
        }
        


        




    }
	
	
	return 0;
}
