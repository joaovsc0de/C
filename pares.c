#include <stdio.h>

int pares(int vetor[15]){
    int contador=0;
    for(int i=0; i<15; i++){
        if(vetor[i] % 2 == 0){
            contador++;
         }
    }
    return contador;
}

int main(){
    int vetor[15];
    printf("Digite 15 números inteiros:\n");
    for(int i=0; i<15; i++){
        scanf("%d", &vetor[i]);
    }
    printf("O número de pares é: %d.\n", pares(vetor));
    return 0;
}
