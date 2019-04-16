/* 4.14 Programa para calcular un los factoriales del 1-5 y desplegarlos en una tabla */
#include<stdio.h>

int main(void)
{
    /* Declarando las variables e inicializandolas*/
    int facto = 1;

    /* Imprimiendo los tittulos y bordes de la tabla */
    printf("Factoriales del 1 al 5 \n");
    printf("%5c%5c\n", 'n', 'f');

    /* imprimiendo y desplengando la tabla */
    for (int i = 1; i < 6; i++){
        facto *= i;
        printf("%5d%5d\n", i, facto);
    }

    return 0;
}