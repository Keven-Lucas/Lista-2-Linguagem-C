#include <stdio.h>

int main() {
  int num,        /* numero dado                                  */
      aux,        /* guarda o pedaco do numero que resta inverter */
      contrario;    /* guarda o numero de tras para frente          */

  printf("Digite um natural: ");
  scanf("%d", &num);

  /* inicializacoes */
  aux = num;
  contrario = 0;

  while (aux != 0) {
    contrario = contrario * 10 + aux % 10;  /* acrescenta mais um digito a direita */
    aux = aux / 10;                     /* joga fora esse digito */
  }

  if (contrario == num)
    printf("%d e palindromo\n", num);
  else
    printf("%d nao e palindromo\n", num);

  return 0;
}
