/* programa para entender como trabajan los operadores "<" y ">" */
#include<stdio.h>

int main(void)
{


    /* haciendo un for de prueva para contar desde cero utlizando solo < */
    for( int i = 0; i < 10; i++)
        printf("%d", i);
    printf("\n");
    /* for contado desde 1 hasta 10 usando <= */
    for( int j = 1; j <= 10; j++)
        printf("%d", j);
    printf("\n");

    return 0;
}
/*  ambos cuentan 10 veces con la diferencia que uno comienza en 0
    y otro comienza en 1 pero igualmente cuentan 10 veces
    por lo mismo uno termina en 9 y otro termina en 10

    conclusion:
        un for con una sentencia como esta 0 < 10 CONTARA 10 VECES
        pero terminara en 9
        si comenzara en 1; 1 < 10, CONTARA 9 VECES seguiria terminando en 9
        el programa imprime los numeros que son menores pero solo los MENORES
        SI ES IGUAL O MAYOR NO LO HACE!!

        1 <= 10 CONTARA 10; es para principiantes muy facil de usar y entender
        pero en computacion casi siempre se cuenta desde el 0
        eso hay que siempre tenerlo en cuenta
    */
