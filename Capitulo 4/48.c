#include<stdio.h>

int main(void)
{
    /* Declarando variables */
    int x, y, i, j;

    /* imprimiendo en pantalla */
    printf("Introdusca dos enteros entre 1 y 20: ");
    scanf("%d%d", &x, &y );

    /* Comenzando for's */
    for ( i = 1; i <= y; i++){

        for (j = 1; j <= x; j++)
            printf("@");

    printf("\n");
    }

    return 0;

}