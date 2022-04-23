#include <stdio.h>

int main(){

    int celsius,fahrenheit, c;

    for (c = 1;c <= 10; c++){
        celsius = 10 * c;
        fahrenheit = celsius * 1.8 + 32;
        printf("C - %d |",celsius);
        printf("F - %d\n",fahrenheit);
    }

    
    return 0;
}
