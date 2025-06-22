#include <stdio.h>
#include <math.h>
#include "funcoes.h"

int main(){
    int a, b, c, delta;
    printf("Digite os valores:\n");
    scanf("%d %d %d", &a, &b, &c);
    calcular_delta(&delta, a, b, c);
    printf("Delta: %d\n", delta);
    return 0;
}