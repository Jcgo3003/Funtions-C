/* Programa para convertir de decimal a binario */
#include<stdio.h>
#include<math.h>

int main(void)
{
    /* Declarando algunas variables */
    int numero, temp, contador = 0, final = 0;

    /* imprimiendo en pantalla */
    printf("Introduce un numero para convertirlo en binario ");
    scanf("%d", &numero);

    /* comenzando conversion */
    while( numero > 0 ){
        /* obteniendo el valor mas a la derecha */
        temp = numero %2;

        /* dividiendo el numero entre 2 */
        numero /= 2;

        /* guardando el numero en final */
        final += temp * (pow ( 10 , contador));

        /* agragando +1 a contador */
        contador++;
    }

    /* imprimiendo resultado final */
    printf("El numero en binario es %d\n", final);

    return 0;
}


/* para convertir un numero en binario es un procedimiento mucho mas complejo
    de que parece

    primero tengo que hacer que se divida el numero entre 2
    si la operacion es exacta esa cifra queda como 0 si no queda como 1
    1 sacar el reminder del numero con mod 2 guardar ese resultado
    2 dividir ese numero entre 2

    Volver a hacer el numero 1 hasta que la division entre 2 de 0
    while numero != 0

    colocar los numeros que se guardaron de izquierda a derecha es decir
    el primer numero que se hizo sea el ultimo numero de la operacion

    necesito saber el numero de ocaciones que esto ocurra - crear un contador

    Intentare guardarlo todo como un int
    el problema es que no me las logro igeniar para que el si en numero es 0
    se guarde

    Estare utlizando potencias para poder guardarlo como int
    necesito que numero vaya sumando potecias cada vez que contador se activa


    */