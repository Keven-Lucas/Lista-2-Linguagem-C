#include <stdio.h>

int main()
{
  float n=0;
  int v=0;
      
  for(n=1;n>=0 && v!=64;n=n+n){
   v++;
    printf("%i° Quad. tem %.0f grãos\n",v,n );
  }
  return 0;
}
