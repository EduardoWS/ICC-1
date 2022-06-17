#include <stdio.h>
#include <math.h>

void lei_cos(float b, float c, float theta, float *a){
    *a = sqrt(pow(b, 2) + pow(c, 2) - 2 * b * c * cos(theta));
}

int main(){

    float a, b, c, theta;
    a = 0.0;

    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &theta);

    lei_cos(b, c, theta, &a);

    printf("%.2f", a);



    return 0;
}