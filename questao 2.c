#include <stdio.h>

int main(){

    int dia;

    do{
        printf("Informe um numero de (1 ate 7):\n ");
        scanf("%d", &dia);

        if(dia > 7){
            printf("Numero invalido!\n");
        }else
        if (dia == 1){
            printf("Domingo!\n");
        
        }else
        if(dia == 2){
            printf("Segunda-feira!\n");
            
        }else
        if(dia == 3){
            printf("Terca-feira!\n");
            
        }else
        if(dia == 4){
            printf("Quarta-feira!\n");
            
        }else
        if(dia == 5){
            printf("Quinta-feira!\n");
            
        }else
        if(dia == 6){
            printf("Sexta-feira!\n");
            
        }else
        if(dia == 7){
            printf("Sabado!\n");   
        }
         if(dia == 0){
            break;
        }

    }while(dia != 0);

    return 0;
    }
