#include <stdio.h>
#include <stdlib.h>

float peso_ideal(float altura, char sexo){
    float peso_ideal;
        if(sexo == 'M' || sexo == 'm'){
            peso_ideal = 72.7*altura-58;
            return peso_ideal;
        }
        else if(sexo == 'F' || sexo == 'f'){
            peso_ideal = 62.1*altura-44.7;
            return peso_ideal;
        }else{
            printf("Digite o sexo corretamente[M/F].");
        }
}

int main(){
        float altura;
        char sexo;
        printf("Digite sua altura e sexo[M/F]:\n");
        scanf("%f %c", &altura, &sexo);
        printf("O seu peso ideal é: %0.2f\n", peso_ideal(altura, sexo));
            return 0;
}