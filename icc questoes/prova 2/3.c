/* 
Nome: Eduardo Ribeiro Rodrigues
NUSP: 13696679
*/


#include <stdio.h>
#include <stdlib.h>

int main(){

    //double a, b, x1, y1, x2, y2, m;

    struct variaveis
    {
        double a;
        double b;
        double x1, x2, y1, y2;
        double m;
        
    };
    
    struct variaveis var;

    int flag =0;
    int perg;
    system("clear");
    while(flag == 0){
        printf("Insira os valores do ponto A=(x1, y1): ");
        scanf("%lf %lf", &var.x1, &var.y1);
        printf("Insira os valores do ponto B=(x2, y2): ");
        scanf("%lf %lf", &var.x2, &var.y2);

        var.m = (var.y1 - var.y2)/(var.x1 - var.x2);
        var.a = var.m;
        var.b = -var.m*var.x1 + var.y1;

        char sinal;

        if (var.b < 0){
            var.b = var.b * -1;
            sinal = '-';
        }
        else{
            sinal = '+';
        }

        printf("\nEquacao da reta: y = %.1lfx %c %.1lf\n\n", var.a, sinal, var.b);

        printf("[ 1 ] Novos valores\n[ 0 ] Sair do programa\n\n> ");
        scanf("%d", &perg);
        if(perg == 0) break;
        system("clear");

    }


    return 0;
}