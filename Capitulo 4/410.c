#include<stdio.h>

int main(void)
{
    /* Declarando variables*/
    int promedio = 0, numero = 0, contador = 0;

    /* imprimiendo en pantalla */
    printf("Introducir una serie de numeros\n");
    printf("el programa hara un promedio de ellos para terminar escriba 9999\n");
    printf("introduce el primer numero ");
    scanf("%d", &numero);

    /* while */
    while( numero != 9999){
        promedio += numero;
        contador++;
        printf("Escribe un numero ");
        scanf("%d", &numero);
    }
    printf("El promedio es %d\n", promedio/contador);

    return 0;
}