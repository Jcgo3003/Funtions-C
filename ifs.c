/* Programa para entender mejor los if's */
#include<stdio.h>

int main(void)
{
    for( int a = 0; a <= 2; a++){
        for( int i  = 0; i < 5; i++){
            if (!(a%2))
                printf("A %d par %d \n", a, i);
        }
    }
}