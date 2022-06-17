#include<stdio.h>
#include<stdlib.h>

void mdc(int n1, int n2, int *result){
    int i = 2;
    *result = 1;
    while(i <= n1 && i <= n2){
        if(n1%i == 0 && n2%i == 0){
            n1 = n1/i;
            n2 = n2/i;
            *result *= i;
        }
        if(n1%i != 0 || n2%i != 0){
            i += 1;
        }
       

    }
}

int main(){

    int *n1, *n2, flag = 0, result;

    n1 = (int *) malloc(sizeof(int));
    n2 = (int *) malloc(sizeof(int));

    while(flag == 0){
        scanf("%d %d", n1, n2);
        if (*n1 == 1 && *n2 == 1){
            return 0;
        }
        if(*n1 == 1 || *n2 == 1){
            printf("1\n");
        }
        else{
            mdc(*n1, *n2, &result);
            printf("%d\n", result);
        }
        
    }


    return 0;
}