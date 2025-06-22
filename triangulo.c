#include <stdio.h>

int eh_tringangulo(int valor_1, int valor_2, int valor_3){

        if(valor_1 <= valor_2 + valor_3 && valor_2 <= valor_1 + valor_3 && valor_3 <= valor_1 + valor_2 ){
                printf("Este é um triangulo ");
                return 1;
        } else {
            printf("Não é um triangulo.");
            return 0;
        }
}

void tipo_de_triangulo(int retorno, int valor_1, int valor_2, int valor_3){
    if(retorno == 1 ){
        if(valor_1 == valor_2 && valor_2 == valor_3){
            printf("Equilátero.\n");
        } else if(valor_1 != valor_2 && valor_2!= valor_3 && valor_3 != valor_1){
            printf("Escaleno.\n");
        } else{
            printf("Isósceles.\n");
        }
    }

}

int main(){
    int valor_1, valor_2, valor_3;
    printf("Digite os três valores:\n");
    scanf("%d %d %d", &valor_1, &valor_2, &valor_3);
    if(valor_1 <= 0 || valor_2 <= 0 || valor_3 <= 0){
        printf("Todos os valores devem ser maiores que zero.\n");
        return 0;
    }
    else{
        tipo_de_triangulo(eh_tringangulo(valor_1, valor_2, valor_3), valor_1, valor_2, valor_3);
    }
    return 0;
}