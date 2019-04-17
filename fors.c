/* Utilizando for's  */
#include<stdio.h>

int main(void)
{
    /* declarando variables */
    int neg = -1, pos = 1;

    /* for positivo, al llegar i = 1 es igual a pos, por lo que deja de trabajar*/
    printf("For con 1\n");
    for( int i = 0; i < pos; i++)
        printf("%d\n", i);

    /* for negativo mientras j sea menor que -1, al ser 0 menor no hace nada*/
    printf("\nFor con -1\n");
    for (int j = 0; j < neg; j++)
        printf("%d\n", j);

    /* if */
    int a = 1, b = 1;
    if ( a < b)
        printf("a < b activada por 1 < 1\n");

    /* un for que cuenta desde numeros negativos */
    for (int i = -1; i < 10; i++)
        printf("%d\n", i);

    return 0;
}