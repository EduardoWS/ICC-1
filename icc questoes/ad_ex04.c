#include <stdio.h>
#include <stdlib.h>


int **ler_matriz(int linhas, int colunas){
	int **mat;
	mat = (int **)malloc(linhas * sizeof(int *));
	for(int i = 0; i<linhas; i++){
		mat[i] = (int *)malloc(colunas * sizeof(int));
	}
	for(int i = 0; i<1; i++){
		for(int j=0; j<colunas; j++){
			mat[i][j] = j+1;
		}
	}

    

    for(int j=0; j<linhas; j++){
        int x1, x2, a, b = -1, led=0;

        if(j<linhas-1){
            scanf("%d", &x1);
            scanf("%d", &x2);
        }
        

        for(int i = 0; i<colunas; i++){
            if(mat[j][i] == x1 || mat[j][i] == x2){
                if (x1 == x2){
                    if(led == 0){
                        a = b = i;
                        
                    }
                    
                }
                else{
                    if(led == 0 && b == -1){
                        a = i;
                        led = 1;
                    }
                    else{
                        if(led == 1 && b == -1){
                            b=i;
                            led = 0;
                        }
                        
                    }
                }
            }
            else{
                if(led == 0 && j<linhas-1){
                    mat[j+1][i] = mat[j][i];
                    
                }
                
            }
            
        }
        
        if(j<linhas-1){
        
            while(a<=b){
            
                mat[j+1][a] = mat[j][b];
                mat[j+1][b] = mat[j][a];
                a = a +1;
                b = b -1;
            }
        }
    }
    
    
    

	printf("\n");
    
	return mat;
}

void imprimir_matriz(int **mat, int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void soma_coluna(int **mat, int maior, int menor, int linhas, int colunas){

    int m = 0;
    for(int j=0; j<colunas; j++){
        for(int i=0; i<linhas; i++){
            m += mat[i][j];
        }
        if(j == 0){
            maior = m;
            menor = m;
        }
        else{
            if(m > maior){
                maior = m;
            }
            if(m < menor){
                menor = m;
            }
        }
        m = 0;
    }
    printf("%d %d\n", menor, maior);


}

int main(){

    int linhas, colunas, **mat1, maior, menor;
	scanf("%d %d", &linhas, &colunas);
    printf("\n");
    mat1 = ler_matriz(linhas, colunas);

    soma_coluna(mat1, maior, menor, linhas, colunas);
    imprimir_matriz(mat1, linhas, colunas);

    

    return 0;
}