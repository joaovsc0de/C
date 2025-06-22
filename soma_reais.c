#include <stdio.h>

float soma_reais(float vetor[20]){
    float soma=0;
    for(int i = 0; i <20; i++){
            soma+= vetor[i];
    }
    return soma;
}

int main(){
    float vetor[20];
    printf("Digite 20 números reais:\n");
    for(int i=0; i<20; i++){
        scanf("%f", &vetor[i]);
    }
    printf("A soma dos elementos de X é: %0.1f.\n", soma_reais(vetor));
    return 0;
}
