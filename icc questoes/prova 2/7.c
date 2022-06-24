/* 
Nome: Eduardo Ribeiro Rodrigues
NUSP: 13696679
*/

#include <stdio.h>
#include <stdlib.h>

int **ler_matriz(int linhas, int colunas){
	int **mat;
	mat = (int **)malloc(linhas * sizeof(int *));
	for(int i = 0; i<linhas; i++){
		mat[i] = (int *)malloc(colunas * sizeof(int));
	}
	for(int i = 0; i<linhas; i++){
		for(int j=0; j<colunas; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\n");
    
	return mat;
}


void subtrair_matrizes(int **mat1, int **mat2, int **matresult, int linhas, int colunas){

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            matresult[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

}

void imprimir_matriz(int **mat, int linhas, int colunas){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void liberar_matriz(int **mat, int linhas){
    for(int i=0; i<linhas; i++){
        free(mat[i]);
    }
    free(mat);
}

int main(void)
{
	int linhas, colunas, **mat1, **mat2, **matresult;

	scanf("%d %d", &linhas, &colunas);

    matresult = (int **)malloc(linhas * sizeof(int *));
    for(int i=0; i<linhas; i++){
        matresult[i] = (int *)malloc(colunas * sizeof(int));
    }

    printf("\n");
	mat1 = ler_matriz(linhas, colunas);
    mat2 = ler_matriz(linhas, colunas);

    subtrair_matrizes(mat1, mat2, matresult, linhas, colunas);

    imprimir_matriz(matresult, linhas, colunas);
	
    liberar_matriz(mat1, linhas);
    liberar_matriz(mat2, linhas);
    liberar_matriz(matresult, linhas);
    
}
