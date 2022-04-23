#include <stdio.h>

int main(){

    int F,nFat,i;

    printf("Insira um numero para saber seu fatorial: ");
    scanf("%d",&F);

    nFat = 1;

    do{
        for (i = 1; i <= F; i++){
            nFat = nFat * i;
            printf("%d ",i);
        }
    }while(F == 1);

     printf("Fatorial: %d\n",nFat);

    return 0;
}
