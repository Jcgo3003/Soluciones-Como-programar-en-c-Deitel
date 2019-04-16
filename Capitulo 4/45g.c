#include<stdio.h>

int main(void)
{
    /* declarando variables */
    int total = 0;

    /* for */
    for (int x = 100; x <= 150; x++)
        total += x;

    /* imprimiendo resultados */
    printf("Total es %d\n", total);

}