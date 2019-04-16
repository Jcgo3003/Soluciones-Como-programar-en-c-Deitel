/* Programa 4.37 para el despliegue del los calendarios 1994 - 1999 */
#include<stdio.h>

int main(void)
{
    /* Declarando las variables */
      ///mes_30, mes_28_29;
    int dia = 1, dia_m = 5;
    int dia_s;
    /* Obteniendo el ano correcto */

    printf("%3c%3c%3c%3c%3c%3c%3c\n", 'L', 'M', 'M', 'J', 'V', 'S', 'D');
    /* imprimiendo el ano*/
    while( dia <= 31)
    {
        /* Imprimiendo la semana */
        for (dia_s = dia_m; dia_s <= 7; dia_s ++){
            /*Imprimiendo el dia */
            printf("%3d", dia);
            if (!(dia_s%7)){
                printf("\n");
            }
            dia++;
        }
        dia_s = 1;
    }
    printf("\n");
    
    return 0;
}

/* Los meses estan divididos en Meses de 31 dias, 30 dias y de 28-29 dias por lo que se deben hacer diferentes
    ciclos while para representar cada uno

    los meses de 31 dias son Ene, Mar, May, Jul, Agos, Oct, dic es total 7
    Los meses de 30 dias son Abr, Jun, Sep y Oct en total 4
    El mes de 28-29 dias es Feb cada 4 anos cambia su valor a 29

    Para despblegar un mes se utilizara un while */