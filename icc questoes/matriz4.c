#include <stdio.h>

int main(){
    
    int N, M, m1;

    scanf("%d", &N);
    scanf("%d", &M);

    if(M%2 == 0)
        m1 = M/2;
    else
        m1 = (M-1)/2;

    int m[N][M];
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(j<=m1-1 && j%2==0){
                m[i][j] = 1;
                printf("%d ", m[i][j]);
            }
            else{
                m[i][j] = 0;
                printf("%d ", m[i][j]);
            }
        }
        printf("\n");
    }




    return 0;
}
