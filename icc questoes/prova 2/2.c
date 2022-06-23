/* 
Nome: Eduardo Ribeiro Rodrigues
NUSP: 13696679
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **gerador_matriz(int linhas, int colunas){

    int **mat;

    srand(time(NULL));

    mat = (int **)malloc(linhas * sizeof(int *));
    for(int i=0; i<linhas; i++){
        mat[i] = (int *)malloc(colunas * sizeof(int));
    }

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            mat[i][j] = rand() % 1000;
        }
    }


    return mat;
}

void imprimir_matriz(int **mat1, int linhas, int colunas){

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

}

void localizador(int **mat1, int linhas, int colunas){

    int maior, menor, i_maior, j_maior, i_menor, j_menor;

    maior = -1;
    menor = 1001;

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            if(mat1[i][j] > maior){
                maior = mat1[i][j];
                i_maior = i;
                j_maior = j;
            }
            if(mat1[i][j] < menor){
                menor = mat1[i][j];
                i_menor = i;
                j_menor = j;
            }
        }
    }

    printf("O maior valor da matriz eh: %d\nSuas coordenadas sao: matriz[%d][%d]\n\n", maior, i_maior, j_maior);
    printf("O menor valor da matriz eh: %d\nSuas coordenadas sao: matriz[%d][%d]\n", menor, i_menor, j_menor);
}


int main(){

    int linhas, colunas, **mat1;

    scanf("%d %d", &linhas, &colunas);
    printf("\n");

    mat1 = gerador_matriz(linhas, colunas);
    imprimir_matriz(mat1, linhas, colunas);
    printf("\n");

    localizador(mat1, linhas, colunas);

    return 0;
}