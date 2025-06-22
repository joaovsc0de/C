#include <stdio.h>

void eh_divisivel(int numero1, int numero2){
        if(numero1%numero2 == 0){
            printf("O número %d é divisível por %d.\n", numero1, numero2);
        } else {
             printf("O número %d não é divisível por %d.\n", numero1, numero2);
        }
}

int main(){
    int numero1, numero2;
    printf("Digite dois números:\n");
    scanf("%d %d", &numero1, &numero2);  
        eh_divisivel(numero1, numero2);
    return 0;
}