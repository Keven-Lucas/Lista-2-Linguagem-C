#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor = 5;

    puts("Imprima um valor:");
    scanf("%i",&valor);

    printf("Pre-incremento: %i\n",--valor);
    printf("Pos-incremento: %i\n",valor--);
    //Solucao para incrementar no pos-incremento;
    //valor--;
    //printf("Pos-incremento: %i\n",valor);

    return 0;
}
