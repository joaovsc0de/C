#include <stdio.h>

void maior_temperatura(float meses[], float *maior_temperatura, int *mes){
    for(int i=0; i<12; i++){
        if(*maior_temperatura < meses[i]){
           *maior_temperatura = meses[i];
            *mes = i+1;
        }
    }
}

void menor_temperatura(float meses[], float *menor_temp, int*mes){
    for(int i=0; i<12; i++){
        if(*menor_temp>meses[i]){
           *menor_temp = meses[i];
           *mes = i+1;
        }
    }
}

void mes_do_ano(int mes){
    switch (mes)
    {
    case 1:
        printf("Janeiro.\n");
        break;
    case 2:
        printf("Fevereiro.\n");
        break;
    case 3:
        printf("Março.\n");
        break;
     case 4:
        printf("Abril.\n");
        break;
    case 5:
        printf("Maio.\n");
        break;
     case 6:
        printf("Junho.\n");
        break;
    case 7:
        printf("Julho.\n");
        break;
    case 8:
        printf("Agosto.\n");
        break;
    case 9:
        printf("Setembro.\n");
        break;
    case 10:
        printf("Outubro.\n");
        break;
    case 11:
        printf("Novembro.\n");
        break;
    case 12:
        printf("Dezembro.\n");
        break;
    
    default:
        break;
    }
}

int main(){
    int mes;
    float temperatura_media, m_temperatura = 0, menor_temp=0;
    float meses[12];
    printf("Digite a temperatura média dos meses:\n");
    for(int i=0; i<12; i++){
        scanf("%f", &meses[i]);
    }
    maior_temperatura(meses,&m_temperatura,&mes);
    printf("Maior temperatura foi %0.1f graus no mês de ", m_temperatura);
    mes_do_ano(mes);
    menor_temperatura(meses, &menor_temp, &mes);
    printf("Menor temperatura foi %0.1f graus no mês de ", menor_temp);
    mes_do_ano(mes);
    
    
    return 0;
}