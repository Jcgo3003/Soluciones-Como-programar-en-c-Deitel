/* Programa 3.27 */
#include<stdio.h>

int main(void)
{
    /* Declarando e inicialinzando valores */
    int contador = 1, numero = 0, mayor1 = 0, mayor2 = 0;

    /* Imprimiendo cabezera */
    printf("Programa para determinar quien vendio mas y el segundo lugar\n\n");

    /* Inciando ciclo */
    while (contador < 11){
        printf("#%d vendedor: ",contador);
        scanf("%d", &numero);
        if (numero > mayor1){
            mayor2 = mayor1;
            mayor1 = numero;
        }
        else if (numero < mayor1 && numero > mayor2){
            mayor2 = numero;
        }

        printf("La venta mayor hasta el momento es %d y la segunda mejor es %d\n", mayor1, mayor2);
        contador += 1;
    }
}