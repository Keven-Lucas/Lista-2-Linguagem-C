#include <stdio.h>
//#include <math.h>

int main() {
  double pi,soma;
  int i,j;

  printf("Digite o numero de iteracoes para calcular o pi: ");
  scanf("%d", &j);

  soma = 0;
  for (i = 0; i < j; i++) {
    // Alternativa:
    // soma = soma + pow(-1,i)/(2*i + 1);
    
    if (i % 2 == 0) {
      soma = soma + 1.0/(2*i + 1);
    }
    else {
      soma = soma - 1.0/(2*i + 1);
    }
    printf("%d - ",i);
    printf("%.3lf\n", 4*soma);
  }

  pi = 4*soma;
  printf("O valor aproximado de pi e %.3lf\n", pi);
  
  return(0);
}
