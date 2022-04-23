#include <stdio.h>

int main(){

    int multiplos, quadrados,m;

    //Desenvolvimento
    for (m = 15; m <= 90; m++){
        if(m % 4==0){
        multiplos = m;
        quadrados = multiplos * multiplos;
        printf(" multiplos de 4:%d\n quadrados:%d\n\n",multiplos,quadrados);
        }
    }

    return 0;
}
