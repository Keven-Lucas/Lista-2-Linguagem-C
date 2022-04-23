#include <stdio.h>
#include <math.h>

int main(){

    int expoente,resultado,base = 3;

    for(expoente = 0;expoente <= 7; expoente++){
        resultado = pow(base,expoente);
        printf(" 3 elevado %d = %d\n",expoente,resultado);
    }

    return 0;
}
