#include<stdio.h>

int main(void)
{
    /* Declarando las variables */
    int contador, numero, total = 0;

    /* Imprimiendo en pantalla para obtener primer dato*/
    printf("Introdusca el numero de datos a sumar: ");
    scanf("%d", &contador);

    /* iniciando for loop */
    for( int i = 1; i <= contador; i++){
        printf("Introduzca el #%d ", i);
        scanf("%d", &numero);
        total += numero;
    }

    printf("El total es %d\n", total);
}