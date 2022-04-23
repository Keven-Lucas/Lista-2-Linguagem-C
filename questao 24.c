#include <stdio.h>

int main(){

    int cat1,cat2,hipotenusa;

    for (hipotenusa = 1;hipotenusa <= 500;hipotenusa++){
        for(cat1 = 1; cat1 <= 500; cat1++){
            for(cat2 = 1; cat2 <= 500; cat2++){
                int lado_esquerdo = cat1 * cat1 + cat2 * cat2;
                int lado_direito = hipotenusa * hipotenusa;

                if(lado_esquerdo == lado_direito){
                    printf("E uma tripla de Pitagoras %d - %d - %d\n",hipotenusa,cat1,cat2);
                }else if(lado_esquerdo > lado_direito){
                    //Os valores nao formam a tripla de Pitagoras!
                break;
                }
            }
        }
    }

    return 0;
}
