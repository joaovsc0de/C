#include <stdio.h>

int eh_primo(int numero){
    if(numero < 2) return 0;
    for(int i = 2; i * i <=numero; i++){
        if(numero % i == 0){
            return 0;
        }
    }    
    return 1;
}
void primos_acima_de_100(){
    int contador = 0;
    int numero = 101;

    printf("Os primeiros 10 números primos depois de 100 são:\n");
    while(contador < 10){
        if(eh_primo(numero)){
            printf("%d ", numero);
            contador++;
        }
        numero++;
    }
    printf("\n");
}

int main(){
  primos_acima_de_100();
  return 0;
}
