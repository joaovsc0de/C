#include <stdio.h>
#include <math.h>

const float pi = 3.14159;

//circulo= pi*raio2
void *area_circulo(float *area,float raio){
    *area = pow(raio, 2)*pi;
}
//Retângulo= base*altura
void *area_retangulo(float *area,float base, float altura){
    *area = base*altura;
}

//Triângulo = base*altura/2
void *area_triangulo(float *area, float base, float altura){
    *area = (base*altura)/2;
}

int main()
{
    int escolha; 
    int raio;
    float base, altura;
    float area = 0;
    printf("Escolha a forma geométrica desejada:\n");
    printf("1-Círculo.\n");
    printf("2-Retângulo.\n");
    printf("3-Triângulo.\n");
    scanf("%d", &escolha);
    if(escolha == 1){
        printf("Digite o raio do Círculo:\n");
        scanf("%d", &raio);
        area_circulo(&area, raio);
        printf("A área do Círculo é: %0.2f\n", area);       
    } else if(escolha == 2){
        printf("Digite a base e altura do Retângulo:\n");
        scanf("%f %f", &base, &altura);
        area_retangulo(&area, base, altura);
        printf("A área do Retângulo é: %0.2f\n", area);
    } else {
        printf("Digite a base e altura do Triângulo:\n");
        scanf("%f %f", &base, &altura);
        area_triangulo(&area, base, altura);
        printf("A área do Triângulo é: %0.2f\n", area);
    }
    return 0;
}
