#include <stdio.h>
#include <stdlib.h>

int main(){

    double a, b, x1, y1, x2, y2, m;
    int flag =0;
    int perg;
    system("cls");
    while(flag == 0){
        printf("Insira os valores do ponto A=(x1, y1): ");
        scanf("%lf %lf", &x1, &y1);
        printf("Insira os valores do ponto B=(x2, y2): ");
        scanf("%lf %lf", &x2, &y2);

        m = (y1 - y2)/(x1 - x2);
        a = m;
        b = -m*x1 + y1;

        char sinal;

        if (b < 0){
            b = b * -1;
            sinal = '-';
        }
        else{
            sinal = '+';
        }

        printf("\nEquacao da reta: y = %.1lfx %c %.1lf\n\n", a, sinal, b);

        printf("[ 1 ] Novos valores\n[ 0 ] Sair do programa\n\n> ");
        scanf("%d", &perg);
        if(perg == 0) break;
        system("cls");

    }


    return 0;
}
