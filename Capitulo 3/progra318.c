/* Programa 318 tienda departamental */
#include<stdio.h>

int main(void)
{
    /* declarando e inicializando valores*/
    float saldo_inicial = 0, total_cargos = 0, total_creditos = 0, lim_credito = 0, total_final = 0;
    int numero_cuenta = 0;

    /* comenzando a obtener datos*/
    printf("Introduzca numero de cuenta: ");
    scanf("%d", &numero_cuenta );

    while( numero_cuenta != -1 ){
        printf("Introduzca saldo inicial: ");
        scanf("%f", &saldo_inicial);
        printf("Introduzca total de cargos: ");
        scanf("%f", &total_cargos);
        printf("Introduzca total de creditos: ");
        scanf("%f", &total_creditos );
        printf("Introduzca limite de creditos: ");
        scanf("%f", &lim_credito );

        /* Imprimiendo resultados */
        printf("Cuenta %d \nLimite de credito %.2f \n", numero_cuenta, lim_credito);
        total_final = saldo_inicial+total_cargos-total_creditos;
        printf("Saldo %.2f\n", total_final );

        /* Decidiendo si paso el limite de credito */
        if ( total_final > lim_credito ){
            printf("Limite de credito excedido\n");
        }

        /* regresando a 0 todas las variables */
        saldo_inicial = 0,total_cargos = 0, total_creditos = 0, lim_credito = 0; total_final = 0, numero_cuenta = 0;

        /* Comenzando el programa de nuevo */
        printf("Introduzca numero de cuenta: ");
        scanf("%d", &numero_cuenta );

    }

}