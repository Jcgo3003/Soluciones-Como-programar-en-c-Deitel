/* Programa 3.24 El proceso para encontrar el numero mas grande...*/
#include<stdio.h>

int main(void)
{
    /* Declarar e inicializar las variables */
    int contador = 1, numero = 0, mayor = 0;

    /* Presentando el programa */
    printf("Programa para determinar el numero mayor de una serie de 10 numeros\n");

    /* Inicializar el loop */
    while ( contador < 11){
        printf("#%d - ", contador);
        scanf("%d", &numero);
        /* tomando la decision de guardar o el no el numero */
        if (numero > mayor ){
            mayor = numero;
        }

        printf("Numero mayor al momento %d \n", mayor);

        contador += 1;
    }

    printf("El numero mayor final es %d\n", mayor);
    return 0;
}