#include <stdio.h>
#include <math.h>

void calcular_delta(int*delta, int a, int b, int c){

    *delta = pow(b,2)-(4*a*c);
}