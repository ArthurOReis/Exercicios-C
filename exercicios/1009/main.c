#include <stdio.h>

int main(){
    double a, b;
    char nome[100];

    scanf("%s %lf %lf", nome, &a, &b);

    printf("TOTAL = R$ %.2lf\n", (a + (b * 0.15)));
}