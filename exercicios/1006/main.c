//MEDIA 2
#include <stdio.h>

int main(void){
    double a, b, c, media;
    int pA = 2, pB = 3, pC = 5;

    scanf("%lf %lf %lf", &a, &b, &c);

    media = (a * pA + b * pB + c * pC)/(pA + pB + pC);

    printf("MEDIA = %.1lf\n", media);
}