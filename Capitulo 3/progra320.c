/* Programa 3.20 'El interes simple para un prestamo...'*/
#include<stdio.h>

int main(void)
{
    /* Declarando e inicializando variables */
    float prestamo = 0, tasa = 0, dias = 0, interes = 0;

    /* Imprimiendo en pantalla y obteniendo el valor para prestamo*/
    printf("Introduzca el monto del prestamo (-1 para terminar el programa):");
    scanf("%f", &prestamo);

    /* Iniciando while*/
    while (prestamo != -1 ){
        /* Imprimiendo valores y obteniendo valores*/
        printf("Introduzca la tasa de interes:");
        scanf("%f", &tasa);
        printf("introduzca el periodo del prestamo en dias:");
        scanf("%f", &dias);
        interes = prestamo * tasa * dias / 365;
        printf("El monto de interes en $%.2f \n\n", interes);

        /*reseteando los valores para comenzar de nuevo*/
        prestamo = 0, tasa = 0, dias = 0, interes = 0;

        /* imprimiendo y obteniendo resultados para  prestamo*/
        printf("Introduzca el monto del prestamo (-1 para terminar el programa):");
        scanf("%f", &prestamo);
    }
    return 0;
}