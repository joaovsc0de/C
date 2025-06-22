#include <stdio.h>
#include <math.h>

const float pi = 3.14159;
void calculo_volume(float*volume, float raio){
    *volume = (4.0/3.0)*pi*pow(raio,3);
}

int main(){
    float raio, volume;
    printf("Digite o valor do Raio:\n");
    scanf("%f", &raio);
    calculo_volume(&volume, raio);
    printf("O volume da esfera é: %0.2f\n", volume);
    return 0;
}