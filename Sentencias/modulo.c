/* programa para obtener moludo de numeros */
#include<stdio.h>

int main(void)
{
    /* Declarando variables e inicianizandolas */
    int a = 0, b = 0;

    /* imprimiendo en pantalla y obteneindo resultados*/
    printf("Programa para obtener modulo de numeros\n");
    printf("Que numero quieres obtener modulo\n");
    scanf("%d", &a);

    printf("Que modulo obtengo\n");
    scanf("%d", &b);

    /* imprimiedo resultados*/
    printf("El modulo %d de %d es %d\n", b, a, a%b);
    return 0;
}