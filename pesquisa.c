#include <stdio.h>
/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
dados sobre o salário e o número de filhos. Faça uma função que leia esses dados
para um número não determinado de pessoas e retorne a média de salário da
população, a média do número de filhos, o maior salário e o percentual de pessoas
com salário inferior à R$380,00.*/

typedef struct{
    float salario;
    int numero_filhos;
} Pessoa;

float funcao(){
    Pessoa pessoa;
    int total_filhos = 0, total_pessoas = 0, pessoas_salario_baixo = 0;
    float total_salario = 0, maior_salario = 0;
    
    while(1){
        
    printf("Digite o salário(ou um numero negativo para sair): R$ ");
    scanf("%f", &pessoa.salario);
    
    if(pessoa.salario < 0) break;
    
    if(pessoa.salario>maior_salario){
        maior_salario=pessoa.salario;
    }
   
    printf("Digite o número de filhos: ");
    scanf("%d", &pessoa.numero_filhos);
    
    total_salario += pessoa.salario;
    total_filhos += pessoa.numero_filhos;
    total_pessoas++;
    
      if(pessoa.salario<380.00){
        pessoas_salario_baixo ++;
    }
}
printf("%d", total_pessoas);
printf("%d", pessoas_salario_baixo);
    float media_salarial = total_salario/total_pessoas;
    float media_filhos = (float)total_filhos/total_pessoas;
    float percentual_baixo = ((float)pessoas_salario_baixo/total_pessoas)*100;
    
    printf("\nMédia salárial da população: %0.2f.\n", media_salarial);
    printf("Média de filhos: %0.2f.\n", media_filhos);
    printf("Maior salário: %0.2f.\n", maior_salario);
    printf("Percentual de pessoas com salário inferior à 380,00R$: %0.2f por cento.\n", percentual_baixo);
   
}
int main(){
   funcao();
    return 0;
}
