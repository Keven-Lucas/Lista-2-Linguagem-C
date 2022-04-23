#include <stdio.h>

int main(){

    int n,maior=0,menor=0,i=0,produto;

    do{
        printf("Digite um valor:\n");
        scanf("%d", &n);

        if(i==0){
            maior = n;
            menor = n;
            i++;
        }
        else if (n < 0 && n%2==0){
            break;
        }
        else if (n > 0){
            maior = n;
        }
        else if( n < menor){ 
            menor = n;
        }

        produto = maior * menor;

    }while(1);

    printf(" %d\n ",produto);

    return 0;
}
