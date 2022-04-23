#include <stdio.h>

int main(){

    int a,b,c,rec,v,divisivel=0,soma=0;

    printf("Informe o inicio da contagem:\n");
    scanf("%d",&a);

    printf("Informe  o final da contagem:\n");
    scanf("%d",&b);

    printf("INFORME (0:dividir por 3) ou (1:dividir por 5)\n");
    scanf("%d",&rec);

    if(a > b){
        c = b;
        b = a;
        a = c;
    }

    for (v = a;v <= b;v++){
        if(rec == 0){
            if(v%3 ==0){
            divisivel = v;
            soma = soma + divisivel;
            printf("%d ",divisivel);
            }
            
        }else if(rec == 1){
            if(v%5 ==0){
            divisivel = v;
            soma = soma + divisivel;
            printf("%d ",divisivel);
            }
        }
        
    }

    printf("\nSomatorio :%d ",soma);

    return 0;
}
