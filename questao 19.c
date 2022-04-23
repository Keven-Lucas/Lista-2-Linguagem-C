#include <stdio.h>

int main(){

    float a,b,c,media=0,i,soma;

    printf("Informe o inicio da contagem:\n");
    scanf("%f",&a);

    printf("Informe o final da contagem:\n");
    scanf("%f",&b);

    if(a > b){
        c = b;
        b = a;
        a = c;
    }
    for(i = a; i <= b;i++){
            soma = i;
            printf("+%.f ",soma);
            media = (media + soma);
            
        }   
    printf("= %.f \nMedia = %.2f\n",media,media/b); 
    return 0;
}
