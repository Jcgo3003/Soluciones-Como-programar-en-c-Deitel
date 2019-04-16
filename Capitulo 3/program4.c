/* Programa para indicar a un usuari@ si un numero es mas grande que otro*/
#include<stdio.h>

int main(void)
{
    int a,b;

    printf("Dame un numero \n");
    scanf("%d%d", &a, &b );

    printf("Es mas grande\n");

    if (a == b)
    {
        printf("Estos numeros son iguales\n");
    }
}