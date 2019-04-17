/* programa para entender mejor los < y > de nuevo */
#include<stdio.h>

int main(void)
{
    /* Declarando algunas variables */
    int numero = 100;

    /* imprmiendo informacion al usuario */
    while( (numero < 0 || numero > 11) || !(numero%2) ){
        printf("Dame un numero entre 1-10 y que sea par\n");
        scanf("%d", &numero);
    }

    printf("Numero correcto\n");

    return 0;

}
/*  error cuando intente hacer esto
    ERROR!!!
        quiero que elija un numero entre 1 - 10
        while( (numero > 0 && numero < 11) ) con numero = 100 no lograba que el while arrancara
        el programa lo saltaba directamente
             dentro de while la sentencia es falso

        un while funciona mientas sea verdadero por lo que tengo que invertir
        la sentencia esta vez buscando que sea verdadera para que trabaje
                AL CONTRARIO DE LOS IF QUE SI SE UTILZAN CUANDO UNA SENTENCIA ES FALSA

        quiero que esa sentencia se imprima - sea verdadera - hasta que un numero entre 1-10 entre
        ahi es cuando quiero que la sentencia detenga a whila es decir que sea falsa

            para utilizar while de esta manera recomiendo preguntar
                Cuando deseo que este while se detenga - sea falso?
                    cuando entre un numero entre 1 - 10
                    Tene que ser falso cuando un numero entre 1-10 entre
                    (numero < 0 || numero > 11)
                    esta sentencia es falso cuando hay un numero entre 1-10

            ahora necesito que pare de contar cuando sea non
                modulo 3 sera 0 - falsa cuando haya un numero impar
                modulo 3 sera 1 - verdadero cuando haya un numero par
                modulo 2 sera 0 - falsa cuando haya un numero par
                modulo 2 sera 1 - verdadero cuando haya un numero impar
                    queremos que la sentencia sea falsa para parar el programa
                    modulo 3 falsa detendra el programa cuando sea impar
                    modulo 2 falsa detendra el programa cuando sea par

                    como el programa debe para cuando sea par
                        elijo modulo 2

            ahora porque el operador OR
            numero = 100
            (numero < 0 || numero > 11) el numero es mayor que 11 por lo que sera verdadero el while sigue
            numero % 2 es 0 - falso es decir se detendria
            esto quedaria 0  1  0 haciendo las opercaiones or da 1 por lo que programa sigue
            para  numero = 9
            numero es mayor que 0 y es menor que 11; por lo que da 0 or 0 da como resultado 0
            modulo 2 de 9 es 1 en total es  0 or 1 da como resultado 1
            para numero 8
            numero es mayor que 0 y menor que 11, 0 or 0 resultado 0
            mod2 de numero 8 es 0 , 0 or 0 es 0 FALSO

            si lo hiera con AND
            numero = 100
            (numero < 0 && numero > 11) numero < 0; falso - 0, numero > 11; 1,  0 AND 1; 0 falso OK
            numero % 2 es 0 - falso es decir se detendria
            esto quedaria 0 AND 0; detendria el programa aunque no es un numero entre 1-10
            para  numero = 9
            numero es > 0; 1, y menor que 11; 1, 1 and 1 = 1 verdadero
            modulo 2 de 9 es 1 en total es  1 and 1 da como resultado 1 es VERDADERO por lo que while seguiria
            para numero 8
            numero es > 0; 1, y menor que 11; 0, 1 and 0 resultado 0
            mod2 de numero 8 es 0 , 0 and 0 es 0 FALSO

            Conclusion:
                OR da mas oporotunidades de ser verdadero por lo que discrimina mejor
                AND casi simpre da falso en haciendo que de arruine esta operacion

            PARA OBTENER NUMEROS IMPARES POR UNA SENTENCIA FALSA HACE FALTA HACER UN NOT
                        !(tu_variable%2)    SIEMPRE ESTE DENTRO DE UN PARENTESIS

*/