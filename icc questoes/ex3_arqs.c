#include<stdio.h>

int main(){

    char nome[40];
    FILE *arq, *carq;
    int time;
    char n[40];

    scanf("%s", &nome);
    

    int i = 1;
    while(i != 6){
        printf("%d\n", i);
        arq = fopen(nome, "r");
        switch (i)
        {
        case 1:
            carq = fopen("1.txt", "w");
            break;
        case 2:
            carq = fopen("2.txt", "w");
            break;
        case 3:
            carq = fopen("3.txt", "w");
            break;
        case 4:
            carq = fopen("4.txt", "w");
            break;
        case 5:
            carq = fopen("5.txt", "w");
            break;
        
        default:
            break;
        }
        
        while(!feof(arq)){
            
            fscanf(arq, "%s %d", &n, &time);
            if (time == i){
                printf("%s\n", n);
                fprintf(carq, "%s\n", n);
            }
            
        }
        fclose(arq);
        fclose(carq);
        printf("\n");

        i += 1;


    }


    return 0;
}