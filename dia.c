/* Programa para determinar con que dia comenzara un segundo mes sabiendo el dia en que comenzo el primer mes */
#include<stdio.h>

int main(void)
{


            int dia_com = 7;
            int dia_com2;
            printf("////%d////",dia_com);
            /* Comienzo para febrero */
            int x = 31 + (dia_com - 1);
            int y = x / 7;
            int z = x - (y * 7);
            dia_com2  = z + 1;
            printf("////%d/*////\n",dia_com2);

}
