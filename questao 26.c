#include <stdio.h>
#define TAM 256

int main(){

    int intervalo, binario[TAM],aux;

    printf("BINARIO - OCTAL - HEXADECIMAL\n");
    
    for(aux = TAM-1;aux >=0;aux--){
        binario[aux] = (intervalo%2)==0 ? 0 : 1;
        intervalo = intervalo/2;
    }
    for(aux = 1;aux <= TAM;aux++){
        printf("%d",binario[aux]);
        printf(" B:%d   -   O:%o    -   H:%x\n",binario,intervalo,intervalo);
    }
    return 0;
}
