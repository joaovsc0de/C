#include <stdio.h>

int soma_de_inteiros(int numero){
    int soma = 0;
    if(numero <0){
        printf("\nApenas números positivos.");
        return 0;
     } else {
    for(int i = 2; i<numero; i++){
    soma += i;
    }
}
    return soma;
}
   


int main(){
    int numero, soma;
    printf("Digite um número inteiro positivo:\n");
    scanf("%d", &numero);
    soma = soma_de_inteiros(numero);
    printf("A soma dos números entre 1 e %d é: %d\n", numero, soma);
    return 0;
}