#include <stdio.h>

int fatorial(int numero){
    if(numero == 0 || numero == 1){
        return 1;
    }else{
    return numero*fatorial(numero-1);
    }
}

int main(){
    int numero;
    printf("Digite um número para calcular o fatorial:\n");
    scanf("%d", &numero);
    printf("O fatorial de %d é: %d.\n", numero, fatorial(numero));
    
    return 0;
}