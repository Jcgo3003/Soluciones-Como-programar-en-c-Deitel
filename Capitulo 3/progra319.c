/* Programa 3.19 */
#include<stdio.h>

int main()
{
    /* Declarando variables e inicializandolas */
    float salario_fijo = 200, ventas_semana = 0, total = 0, promedio_9 = 0;

    /* Imprimiendo en pantalla y pidiendo datos */
    printf("Introduzca las ventas en pesos (-1 para terminar): ");
    scanf("%f", &ventas_semana);

    /* comenzando ciclo */
    while (ventas_semana != -1 ){
        /* realizando operacion */
        promedio_9 = (ventas_semana * 9) / 100;
        total = salario_fijo + promedio_9;

        /* Imprimiendo resultados */
        printf("El salario es $%.2f\n", total);

        /* reseteando todas la variables */
        salario_fijo = 200, ventas_semana = 0, total = 0, promedio_9 = 0;
        printf("\n");

        /* imprimiendo en pantalla y pidiendo datos */
        printf("Introduzca las ventas en pesos (-1 para terminar): ");
        scanf("%f", &ventas_semana);

    }

    return 0;
}