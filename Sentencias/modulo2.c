/* programa para entender meor modulo */
#include<stdio.h>

int main(void)
{
    /* declarando algunas variables */
    int par = 2, non = 3, numero = 100;

    /* imprimiendo resultados */
    printf("Modulo 2 de 2 es %d\n", par%2);
    printf("Modulo 2 de 3 es %d\n\n", non%2);

    /* decidiendo */
    if ( par%2)
        printf("IF Modulo 2 de 2 es 0\n");

    if ( non%2)
        printf("IF Modulo 2 de 3 es 1\n");

    if (numero > 0 && numero < 11 )
        printf("cero\n");
    if (1)
        printf("uno\n");

        return 0;
}
/*  modulo 2 de 2 da como resultado 0 -- POR LO TANTO LO IF LO IMPRIME
    modulo 2 de 3 da como resultado 1
    */

