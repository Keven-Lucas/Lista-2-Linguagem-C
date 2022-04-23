#include <stdio.h>

int main(){

    int Pedro,Jose,anos;

    Pedro = 110;
    Jose= 150;

    do{
        Jose = Jose + 2;
        Pedro = Pedro + 3;
        anos = Jose - Pedro + 1;
    }while(Pedro > Jose);

    printf("Pedro sera maior que Jose depois de anos %d\n ",anos);
    return 0;
}
