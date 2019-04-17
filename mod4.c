/* de nuevo entendiendo a % mod */
#include<stdio.h>

int main(void)
{
    /* comenzado for*/
    for (int i = 0; i < 10; i++){
        /* imprimiendo pares */
        printf("%d\n", !(i%2) ? i : 0);
    }
    return 0;
}
/* i % 2
   1 % 2 hace 1 v
   2 % 2 hace 0 f
   3 % 2 hace 1 v
   */