/* programa para entender > y >= */
#include<stdio.h>

int main(void)
{
    /* declarando algunas variables */
    int numero;

    /* necesito una sentencia que funcione con numero que sea mayor que 16 y que incluya al 16*/
    /* esta sentencia solo aceptara numero mayores que 16*/
    numero = 15;
    if ( numero > 16 )
        printf("1 Ninguno es aceptado\n");
    numero = 16;
    if ( numero > 16 )
        printf("2 Ninguno es aceptado\n");

    /* esta sentencia si acepta 16 pero no acepta 15*/
    numero = 15;
    if  ( numero > 15 )
        printf("3 16 aceptado pero no 15 \n");
    numero = 16;
    if  ( numero > 15 )
        printf("4 16 aceptado pero no 15 \n");

    /* con >=  se solucionan todos los problemas */
    numero = 15;
    if  ( numero >= 16 )
        printf("5 16 aceptado \n");
     numero = 16;
     if  ( numero >= 16 )
        printf("5 16 aceptado \n");
}
/*
    Necesito que admida un numero mayor que 15 y al 15 tambien
    La diferencia entre  ( numero > 16)  y ( numero >= 15 ) es:
    ( numero > 16) admite 15 pero no admite 16 solo arriva de 16 - 16 queda fuera y lo necesito dentro
    ( numero > 15) admite 16 pero no admite 15 y necesito 15
    ( numero >= 15) es perfecto admite 15, y comienza a discriminar despues de 15

    Conclusion
    Una sentencia tipo > , < solo sirven para limitar de un solo lado
    como en los for ( int i = 0; i < 10; i++)

    pero en los while es mejor tener sentencias con <= , >= asi se puede utilizar el numero
    dentro de la sentencia
    while ( numero >= 16) mientras que numero mayor o igual que 16 - de 16 para arriva
     15 - falso , 16 - verdadero
    while ( numero > 16 ) mientras que numero mayor que 17
    15 - falso, 16 falso , 17 - verdadero

*/
