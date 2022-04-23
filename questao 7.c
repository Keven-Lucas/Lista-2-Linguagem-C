#include <stdio.h>

int main(){

    float val1, val2, divisao;

    //Imprimir na tela:

    printf("Informe o primeiro valor:\n");
    scanf("%f",&val1);

    printf("informe o segundo valor:\n");
    scanf("%f",&val2);

    // Realizando validacao:
    
    if(val2 == 0){
        printf("informe o segundo valor:\n");
        scanf("%f",&val2);
    }
    divisao = val1 / val2;

    printf("Resultado da divisao: %.2f\n",divisao);

    return 0;
}
