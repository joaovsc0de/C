
#include <stdio.h>

typedef struct {
    int idade, numero_filhos;
    char sexo;
    float salario;
} Habitante;

void ler(Habitante pessoa[], int tamanho) {
    for(int i = 0 ; i<15; i++){
        printf("Digite sua idade: ");
        scanf("%d", &pessoa[i].idade);
        printf("Digite seu sexo[M/F]: ");
        scanf(" %c", &pessoa[i].sexo);
        printf("Digite seu salário: ");
        scanf("%f", &pessoa[i].salario);
        printf("Digite o número de filhos: ");
        scanf("%d", &pessoa[i].numero_filhos);
    }
}
float media_salarial(Habitante pessoa[]){
    float soma =0, media_sal;
    for(int i=0; i<15; i++){
        soma += pessoa[i].salario;
    }
    media_sal=soma/5;
    return media_sal;
}

int maior_idade(Habitante pessoa[]){
    int idade;
    idade = pessoa[0].idade;
    for(int i=1; i<15; i++){
        if(idade < pessoa[i].idade){
            idade = pessoa[i].idade;
        }
    }
    return idade;
}

int mulheres(Habitante pessoa[]){
    int contador=0;
    for(int i=0; i<15; i++){
        if((pessoa[i].sexo == 'F'|| pessoa[i].sexo == 'f') && pessoa[i].numero_filhos == 3 && pessoa[i].salario <= 500){
            contador++;
        }
    }
    return contador-1;
}

int menor_idade(Habitante pessoa[]){
    int idade;
    idade = pessoa[0].idade;
    for(int i=1; i<15; i++){
        if(idade > pessoa[i].idade){
            idade = pessoa[i].idade;
        }
    }
    return idade;
}

int main(){
    Habitante pessoa[15];
    float media_sal;
    ler(pessoa, 15);
    media_sal = media_salarial(pessoa);
    printf("A média salárial entre os habitantes é: %0.2f R$.\n", media_sal);
    printf("A maior idade do grupo é %d anos.\n", maior_idade(pessoa));
    printf("A menor idade do grupo é %d anos.\n", menor_idade(pessoa));
    printf("A quantidade de mulheres com três filhos que recebem até R$ 500,00 é %d.\n",mulheres(pessoa));
    
    return 0;
}