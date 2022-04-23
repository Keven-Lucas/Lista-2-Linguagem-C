#include <stdio.h>

int main(){

    int a,b,c,somatorio=0,receptor,reg;

    puts("Informe o inicio de sua contagem: ");
    scanf("%d",&a);

    puts("Informe o fim de sua contagem: ");
    scanf("%d",&b);

    if(a > b){
        c = b;
        b = a;
        a = c;
    }
    for(reg = a; reg <= b;reg++){
        if(reg %2==0){
            receptor = reg;
            somatorio = somatorio + receptor;
         printf("%d ",somatorio);    
        }  
    }
        
    return 0;
}
