/* Programa 3.25 programa de hacer una tabla utilizando ciclos */

#include<stdio.h>

int main(void)
{
    /* declarando variables */
    int n = 1;

    /* Impriendo cabezera */
    printf("N\t10*n\t100*n\t1000*n\n\n");

    /* Iniciando ciclo*/
    while (n < 11){
        printf("%d\t%d\t%d\t%d\n", n, n*10, n*100, n*1000);
        n +=1;
    }

    return 0;
}