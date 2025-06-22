#include <stdio.h>

int potencia(int base, int expoente){
    int potencia, x;
    potencia = base;
    for(int i=1; i<expoente; i++){
       potencia = (potencia*base);
    }
    return potencia;
}

int main() {    
    int base, expoente;
    printf("Digite a base e o expoente:\n");
    scanf("%d %d", &base, &expoente);
    printf("%d elevado a %d é = %d.\n", base, expoente, potencia(base, expoente));

    return 0;}