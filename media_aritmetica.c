#include <stdio.h>

float calcular_media_aritimetica(){
        int entrada, soma=0, contador;
        do{
            printf("Digite um valor[0 para parar]:\n");
            scanf("%d", &entrada); 
            soma+= entrada;
            contador++;
        }while(entrada != 0 );
        return soma/(contador-1);
}


int main(){
    float media;
    media = calcular_media_aritimetica();
    printf("A média aritimética dos números é: %0.2f.\n", media);
    return 0;
}