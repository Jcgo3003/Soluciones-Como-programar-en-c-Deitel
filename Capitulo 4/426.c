/* 4.26 Programa para calcular Calcule el valor de π a partir de la serie 'infinita' */
#include<stdio.h>

int main(void)
{
    /* Declarando variables */
    float num = 3, pi = 4, resta = 0;

    /* inciando calculos */
    for (int i = 1; i <= 100000; i++){

        /* para lograr la suma resta, si el numero es non */
        if ( i%2 )
            resta += ( 4 / num );
        else /*si el numero es par*/
            resta -= ( 4 / num );
        /* actualizando el numero */
        num += 2;
    }

    pi -= resta;

    /* imprimiendo datos */
    printf("Pi = %f, esto dividiendo 100000\n", pi);
}