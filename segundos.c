#include <stdio.h>

/*Converte horas e minutos em segundos e soma*/
int calcular_segundos(int hora, int minuto, int segundo){
    int total_segundos;

    total_segundos = ((hora*60)*60) + (minuto*60) + segundo;
    return total_segundos;
}


int main(){
    int total_segundos=0, hora, minuto, segundo;
    printf("Ditige a hora, minutos e segundos:\n");
    scanf("%d %d %d", &hora, &minuto, &segundo);
    total_segundos = calcular_segundos(hora, minuto, segundo);
    printf("%d", total_segundos);
    return 0;
}