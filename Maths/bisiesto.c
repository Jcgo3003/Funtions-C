/* Programa para determinar si un ano es bisiesto o no */
#include<stdio.h>

int main(void){
    /* declarando las variables */
    int ano, bisiesto = 444;

    /* Obteniendo el ano  */
    printf("Elige un un año para determinar si es bisiesto o no ");
    scanf("%d", &ano);
    while( ano < 0 || ano > 2500 ){
        printf("Elige un año para determinar si el bisiesto (entre 0 - 2500) ");
        scanf("%d", &ano);
    }

    /* Algoritmo para determinar si el ano es bisiesto */
    if (!(ano%4)){
        bisiesto = 1;
        if ( !(ano%100) ){
            bisiesto = 0 ;
            if( !(ano%400)){
                bisiesto  = 1;
            }
        }
    }

    /* impriendo resultado */
    if (bisiesto == 1)
        printf("El ano es bisiesto\n");
    else
        printf("EL ano no es bisiesto\n");

}
/*
  ---- Anos bisiestos -------
Los años divisibles entre 4 son años bisiestos…  mod%4
…con la excepción de que los años divisibles entre 100 no son años bisiestos… mod%100
…excepto los años que también son divisibles entre 400, que sí son bisiestos.
si se pueden dividir entre 4 bisiesto
    si se puede dividir entre 100 No bisiesto
        si es divisible entre 400 si es bisiesto

        if (!(ano%4)){
            bisiesto = 1;
            if ( ano%100){
                bisiesto = 0;
                if( !(ano%400)){
                    bisiesto  = 1;
                }
            }
        }

Un año es bisiesto en el calendario Gregoriano,
si es divisible entre 4, excepto aquellos divisibles entre 100 pero no entre 400.
Multiplo de 4 if ( (!(ano%4)) bisiesto = 1

si es divisible entre 100 (if ( (ano%100) != 0 ) AND (ano%400) ))
si  !mod%100  and mod%400

/ if (  !(ano%4) ){/// && !(ano%100) &&  (ano%400 != 0 ) ){
    //     bisiesto = 1;
    // }
    // if (  !(ano%100)  ){
    //     bisiesto = 1;
    // }

    // if (  !(ano%400)  ){
    //     bisiesto = 1;
    //     printf("divisible\n");
    // }


((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

( !(ano%4)  && (ano%100 != 0)   || ano%400 )
div 4       no es div entre 100  ||  div entre 400
https://es.wikibooks.org/wiki/Algoritmo_bisiesto
http://www.calculadoras.uno/ano-bisiesto/
*/