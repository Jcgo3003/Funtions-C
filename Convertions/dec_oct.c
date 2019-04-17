/* Programa para convertir un numero decimal a octal utilizando el prog de dec-octagecimal */
#include<stdio.h>
#include<math.h>

int main (void)
{
    /* declaranado las variables */
    int numero, cont_o = -1, oct = 0, base8, residuo = 1000, temp;

    /* imprimiendo instrucciones */
    printf("Introduce un numero para convertirlo en Octagecimal ");
    scanf("%d", &numero);

    if (numero > 0){
        /* obteniendo el numero que mas se acerca a 'numero' */
            while( numero >= oct ){
                cont_o++;
                oct = pow( 8, cont_o);
            }
            /* Ajustando la variable que cuenta las potecias de 8*/
            cont_o -= 1;

            /* iniciando las operaciones de conversion */
            while ( cont_o >= 0  ){
                if (numero == 0){
                    printf("0");
                    cont_o--;
                    continue;
                }
                else{
                    /* La potencia sera igual a 8 ^ (cont_o - 1) */
                    base8 = pow ( 8 , cont_o );
                    residuo =  numero / base8;

                    /* imprimiendo los digitos de izquierza a derecha */
                    printf("%d", residuo);

                    /* Multiplicando el numero */
                    temp = residuo * base8;

                    /* restando */
                    numero -= temp;

                    /* Cont_n sirve para hacer decender la potencia de cont_o*/
                    cont_o--;
                }
            }

        printf("\n");
    }
    else
        printf("0\n");

    return 0;
}

/*  Pasos para transformar un numero decimal a octagecimal
    1 Determinar el numero con base 8 (n_8) mas cercano sin ser mayor que el numero a convertir
    2 Usando el numero del inciso 1 (n_8) se divide el numero, el residuo decimal se convierte en el primer numero
        de izquierda a derecha, imprimir dicho numero
    3 El residuo se multiplica por la base 8 (n_8) el resultado se le resta a el numero a convertir

    4 Al resultado del inciso 3, se le aplica el mismo proceso con la diferencia que la base 16 deciende un numero
        esto se repite hasta que el resultado del inciso 3 es menor que 16

    por eso mismo se puede ocupar el resultado del inciso 4 como para detener el while, asi como while numero > 0

    PROCURAR QUE LA VARIABLE QUE VAYA A CANCELAR WHILE ESTE AL FINAL DEL WHILE DE ESA MANERA
    EL PROGRAMA EJECUTA LAS INTRUCCIONES Y LAS DETIENE CON LA ULTIMA LINEA

    */
