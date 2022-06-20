#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **gerar_matriz(int **mat, int n, int m){

    mat = (int **)malloc(n * sizeof(int *));
    for(int i = 0; i<n; i++){
        mat[i] = (int *)malloc(m *sizeof(int));
    }
    srand(time(NULL));
    for(int i = 0; i<n; i++){
        
        for(int j=0; j<m; j++){
            
            mat[i][j] = rand() % 10;
        }
    }

    return mat;
}

void imprimir_mat(int **mat, int n, int m){

    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

}

void localizar(int **mat, int n, int m){

    int maior, menor, la, ca, lb, cb;
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i == 0 && j == 0){
                maior = mat[i][j];
                menor = mat[i][j];
                la = i;
                ca = j;
                lb = i;
                cb = j;
            }
            else{
                if(mat[i][j] > maior){
                    maior = mat[i][j];
                    la = i;
                    ca = j;
                }
                if(mat[i][j] < menor){
                    menor = mat[i][j];
                    lb = i;
                    cb = j;
                }
            }
        }
        
    }
    printf("O maior valor da matriz eh: %d\nLinha e coluna: %d %d\n\n", maior, la, ca);
    printf("O menor valor da matriz eh: %d\nLinha e coluna: %d %d\n", menor, lb, cb);


}



int main(){

    int n, m, **mat;

    scanf("%d %d", &n, &m);

    mat = gerar_matriz(mat, n, m);
    printf("\n");
    imprimir_mat(mat, n, m);
    printf("\n");
    localizar(mat, n, m);

    return 0;
}