#include <stdio.h>
/*Calcular se o ano é bissexto*/
void eh_bisexto(int ano){
        if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
            printf("%d é bissexto\n", ano);
        } else{
            printf("Não é bissexto");
        }
}
/*Calcular a quantidade de anos bissextos no intervalo 1~2010*/
void *quantidade_anos(int *quantidade_ano) {
     *quantidade_ano = 0;
    for(int i = 1; i <= 2010; i++){
        if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
            (*quantidade_ano)++;
        }
    }
        
}

int main(){
    int opcao, quantidade_ano, ano;
    printf("Escolha qual opção deseja: \n");
    printf("1 - Calcular se o ano é bissexto.\n2 - Calcular a quantidade de anos bissextos desde o ano 1 até 2010.\n3 - Encerrar.\n");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Digite o ano: ");
        scanf("%d", &ano);
        eh_bisexto(ano);
        } else if (opcao == 2){
            quantidade_anos(&quantidade_ano);
            printf("Quantidade de anos bissextos: %d\n", quantidade_ano);
        } else {
            return 0;
        }

    return 0;
}