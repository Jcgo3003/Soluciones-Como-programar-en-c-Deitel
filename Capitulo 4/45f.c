#include<stdio.h>

int main(void)
{
    /* Deiniendo variables */
    int contador = 2;

    /* do while */

    do{
        if (contador % 2 == 0)
            printf("%d\n", contador);
    contador += 2;
    }while (contador <= 100);
}