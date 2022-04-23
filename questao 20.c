#include <stdio.h>

int main(){

    int F,nFat,i;

    nFat = 1;

    do{
        printf("Insira um numero para saber seu fatorial: ");
        scanf("%d",&F);
        for (i = 1; i <= F; i++){
            nFat = nFat * i;
            printf("%d ",i);   
        }

    }while(F == 1);

    printf("\nFatorial de %d: %d\n",i-1,nFat);

    return 0;
}
