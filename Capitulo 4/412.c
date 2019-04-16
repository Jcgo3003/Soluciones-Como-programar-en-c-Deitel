/* 4.12 programa para sumar numeros enteros  pares del 2 al 30 */
#include<stdio.h>

int main(void)
{
    /* declarando variables */
    int contador, total = 0;

    /* Realizando la suma de los numeros*/
    for( contador = 0; contador <= 30; contador ++){
        if (contador % 2 )
            total += contador;
    }

    /* imprimiendo la suma */
    printf("La suma de la serie de numeros pares entre 0 - 30 es %d\n", total );

    return 0;
}