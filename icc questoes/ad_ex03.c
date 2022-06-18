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


void somar_matrizes(int **mat1, int **mat2, int linhas, int colunas){
    int **soma;
    soma = (int **)malloc(linhas * sizeof(int *));
    for(int i=0; i<linhas; i++){
        soma[i] = (int *)malloc(colunas * sizeof(int));
    }

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            soma[i][j] = mat1[i][j] + mat2[i][j];
        }
        printf("teste4\n");
    }
    imprimir_matriz(soma, linhas, colunas);

    printf("teste3\n");

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
	int ***matrizes, qmats, linhas, colunas, **mat;

    scanf("%d", &qmats);
    scanf("%d %d", &linhas, &colunas);

    if(linhas != colunas || qmats < 0){
        return 0;
    }

    
    for(int i=0; i<qmats; i++){
        mat = ler_matriz(linhas, colunas);
        matrizes[i] = mat;
    }

    int a, b, flag = 0;


    while(a != 0 && b != 0){
        scanf("%d %d", &a, &b);
        somar_matrizes(matrizes[a], matrizes[b], linhas, colunas);
        
    }
    
}
