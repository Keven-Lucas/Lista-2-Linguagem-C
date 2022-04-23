#include <stdio.h>

int main(){

    int a,b,c,i,rec,aux;

    puts("Informe o inicio de sua contagem: ");
    scanf("%d",&a);

    puts("Informe o fim de sua contagem: ");
    scanf("%d",&b);

    if(a > b | b > a){
        c = b;
        b = a;
        a = c;
    }

  for(rec=a;rec <= b;rec++){
    aux = rec;
    printf("%d ",aux);
  }
  for(i=b;i <= a;i++){
    aux = i;
    printf("%d ",aux);
  }
  
    return 0;
}
