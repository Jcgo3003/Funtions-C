/* Programa para convertir un numero decimal a hexagecimal */
#include<stdio.h>
#include<math.h>

int main (void)
{
    /* declaranado las variables */
    int numero, cont_h = -1, hex = 0, base16, residuo = 1000, temp, cont_n = 1;

    /* imprimiendo instrucciones */
    printf("Introduce un numero para convertirlo en Hexagecimal ");
    scanf("%d", &numero);

    /* segurando que el numero sea mayor que 16 */
    if (numero >= 16){

        /* obteniendo el numero que mas se acerca a 'numero' */
        while( numero >= hex ){
            cont_h++;
            hex = pow( 16, cont_h);
        }

        /* iniciando las operaciones de conversion */
        while ( numero >= 16 ){
            /* La potencia sera igual a 16 ^ (cont_h - 1) */
            base16 = pow ( 16 , (cont_h - cont_n) );
            residuo =  numero / base16;

            /* imprimiendo los digitos de izquierza a derecha */
            if ( residuo < 10 )
                /* imprimiendo # en caso de que sea un numero del 0 - 9*/
                printf("%d", residuo);
            else
                /* Imprimiendo una letra en caso de que sea mayor que 9 */
                printf("%c", residuo + 55);

            /* Multiplicando el numero */
            temp = residuo * base16;

            /* restando */
            numero -= temp;

            /* Cont_n sirve para hacer decender la potencia de cont_h*/
            cont_n++;
        }
        /* imprimiendo el numero final*/
        if ( numero < 10 )
                printf("%d", numero);
        else
            printf("%c", numero + 55);
    }
    else if ( numero < 10 )
                printf("%d", numero);
    else
        printf("%c", numero + 55);

    printf("\n");

    return 0;
}

/*  Pasos para transformar un numero decimal a hexagecimal
    1 encontrar el numero en potencia 16 que mas se acerque al numero deseado a convertir sin superarlo
    2 Dividir el numero entre aquella potencia
    3 Se multiplica el cociente decimal de la divicion por el numero potencia 16 que tenemos del inciso 1
    4 al numero original se le resta el resultado del inciso 3
    5 se regresa al inciso uno al resultado del inciso 4 se le aplican las operaciones del inciso 1

    por eso mismo se puede ocupar el resultado del inciso 4 como para detener el while, asi como while numero > 0

    PROCURAR QUE LA VARIABLE QUE VAYA A CANCELAR WHILE ESTE AL FINAL DEL WHILE DE ESA MANERA
    EL PROGRAMA EJECUTA LAS INTRUCCIONES Y LAS DETIENE CON LA ULTIMA LINEA

    printf("R%c", residuo < 10 ? residuo : (residuo + 55) );
    printf("r%d",residuo);

    1 Determinar el numero con base 16 (n_16) mas cercano sin ser mayor que el numero a convertir
    2 Usando el numero del inciso 1 (n_16) se divide el numero, el residuo decimal se convierte en el primer numero
        de izquierda a derecha
    3 El residuo se multiplica por la base 16 (n_16) el resultado se le resta a el numero a convertir

    4 Al resultado del inciso 3, se le aplica el mismo proceso con la diferencia que la base 16 deciende un numero
        esto se repite hasta que el resultado del inciso 3 es menor que 16

    */