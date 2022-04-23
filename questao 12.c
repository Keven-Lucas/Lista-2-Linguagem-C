#include <stdio.h>
#define num_inicial 1
#define num_final 10

int main(void) {

    //variaveis declaradas
    int num, inteiro;
    int resultado;

    printf("\n");
    printf(" X TABUADA X \n");  
    printf("Informe o numero desejado: ");
    scanf("%d",&inteiro);

    //funcao principal
    for (int num = num_inicial; num <= num_final; num++){
        resultado = num * inteiro;
        printf("%d x %d = %d\n", inteiro, num, resultado);
    }

return 0;
}
