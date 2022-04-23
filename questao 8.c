#include <stdio.h>

int main(){

    float v_mercadoria,v_entrada,v_prestacoes;

    printf("Informe o valor da mercadoria R$: ");
    scanf("%f",&v_mercadoria);

    v_prestacoes = (int)v_mercadoria / 3;
    v_entrada = v_mercadoria - v_prestacoes * 2;

    printf("%.2f\n",v_prestacoes);
    printf("%.2f\n",v_entrada);

    return 0;
}
