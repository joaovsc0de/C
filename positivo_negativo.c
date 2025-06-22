#include <stdio.h>

void positivo_negativo(float numero){
    if(numero > 0){
        printf("O número %0.2f é positivo.\n", numero);
    } else if(numero<0){
        printf("O número %0.2f é negativo.\n", numero);
    }
    else{
        printf("0 é um número neutro.");
    }
}

int main(){
    float numero;
    printf("Digite um número para verificar se é positivo ou negativo:\n");
    scanf("%f", &numero);
    positivo_negativo(numero);
    return 0;
}