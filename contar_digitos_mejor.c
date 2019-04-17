#include <stdio.h>
#include <math.h>
int main()
{
    long long n, copia_n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    /* ajustando copia */
    copia_n = n;

    while(n != 0)
    {
        /* con este n regresa a su estado original para poder seguir haciendo prubas*/
        n = copia_n;
        ++count;

        n = n * pow(10, (-1 * count) );
        printf("%lld ",n);
    }

    printf("Number of digits: %d\n", count);
}

/* fuente: https://www.programiz.com/c-programming/examples/digits-count
Este programa lo mejore de esta manera

    while ( copia_binario != 0){
        copia_binario = binario;
        contador_digitos++;

        copia_binario = copia_binario * pow(10, (-1 * contador_digitos));
        printf("contador %lld ", copia_binario);
    }
    printf("\nContador digitos %d\n\n", contador_digitos );


*/