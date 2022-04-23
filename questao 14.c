#include <stdio.h>

int main(){

    int a,b,c,divisivel=0;

    printf("Informe o inicio da contagem:\n");
    scanf("%d",&a);

    printf("Informe  o final da contagem:\n");
    scanf("%d",&b);

    if(a > b){
        c = b;
        b = a;
        a = c;
    }

    for (int v = a;v <= b;v++){
        if(v%3 ==0){
            printf("%d ",v);
            divisivel = divisivel + 1;
        }
    }

    printf("%d",divisivel);

    return 0;
}
