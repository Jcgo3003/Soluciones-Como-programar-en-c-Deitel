/* 4.13 programa para calcular el producto de los enteros nones del 1 al 15 */
#include<stdio.h>

int main(void)
{
    /* Declarando variables */
    int contador = 0, suma = 0;

    /* sumando los numeros*/
    while (contador <= 15){
        if (contador % 2){
            printf("%d ", contador);
            suma += contador;
        }

        contador ++;
    }
    /* imprimiendo resultad */
    printf("La suma es %d\n", suma);

    return 0;
}
/* lo hice de esta manera pero esta mal el resultado deberia ser 64 no 56
 el problema fue que puse if (!(contador % 2)  ( cuando es par es verdadero ... MAL!) \
 eso hacia que sumara solo los numeros pares
 ahora lo solucione quitando ! dejandolo de esta manera if ( contador % 2)
 cuando es verdadero es cuando es impar cuando es par es 0 por lo que es falso
*/