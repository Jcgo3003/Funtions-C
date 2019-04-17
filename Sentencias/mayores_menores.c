/* programa para entender como trabajan los operadores "<" y ">" */
#include<stdio.h>

int main(void)
{
    /* declarando algunas variables */
    int a = 1, b = 2, c = 2;

    /*iniciando algunas operaciones */
    if ( a < b )
        printf("a es mayor que b\n");
    if ( b < c)
        printf("b es igual a c no < aun asi estas viendo este mensaje");
    if ( b > c)
        printf("b es igual a c no < aun asi estas viendo este mensaje");
    if ( b >= c)
        printf("b es igual o mayor a c\n");

}
/*  a es menor que b por lo que imprime el mensaje
    b es igual a c asi que no imprime el mensaje porque no supera al numero
    b es igual a c no imprime mensaje mientras no supere al numero
    conclusion:
    el programa imprime los numeros que son menores pero solo los MENORES
        SI ES IGUAL O MAYOR NO LO HACE!!!

    */
