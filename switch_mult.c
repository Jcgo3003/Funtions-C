/* Este es un switch que se modifica cada que viene un multiplo de 8, esto se hizo para el programa de desplegar # romanos */
#include<stdio.h>

int main(void){
    int indi = 0;
    for(int num = 1; num < 30; num++){
        printf("%d Estado %d", num, indi);
        if (!(num%8)){
            if (indi == 0)
                indi = 1;
            else
                indi = 0;
        }

        printf("\n");
    }


}