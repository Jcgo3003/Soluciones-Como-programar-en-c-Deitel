/* Programa 4.37 para el despliegue del los calendarios 1994 - 1999 */
#include<stdio.h>

int main(void)
{
    /* Declarando las variables */
    int dias = 1, dia_s = 1, dia_com = 3;
    /* Obteniendo el ano correcto */


    /* Imprimiendo los dias de la semana */
    printf("%3c%3c%3c%3c%3c%3c%3c", 'L', 'M', 'M', 'J', 'V', 'S', 'D');
    printf("\t%3c%3c%3c%3c%3c%3c%3c\n", 'L', 'M', 'M', 'J', 'V', 'S', 'D');


    /* Imprimiendo un mes de 31*/

    /* imprimiendo los espacios de los primeros dias */
    if (dias == 1){
        for( int i = 1; i <= dia_com-1; i++)
            printf("%3s", " ");
    }


    while(dias <= 31){
        if (dias != 1)
            dia_com = 1;

        /* for para comenzar los dias */
        for (dia_s = dia_com; dia_s <= 7; dia_s++){
            if ( dias > 31){
                printf("\t");
                break;
            }
            printf("%3d", dias);
            dias++;

            if (dia_s == 7){
                printf("\t");
            }
        }
        ///////////////
        for (dia_s = dia_com; dia_s <= 7; dia_s++){
            if ( dias > 31){
                printf("\n");
                break;
            }
            printf("%3d", dias);
            dias++;

            if (dia_s == 7){
                printf("\n");
            }
        }

    }

    return 0;
}

/* Los meses estan divididos en Meses de 31 dias, 30 dias y de 28-29 dias por lo que se deben hacer diferentes
    ciclos while para representar cada uno

    los meses de 31 dias son Ene, Mar, May, Jul, Agos, Oct, dic es total 7
    Los meses de 30 dias son Abr, Jun, Sep y Oct en total 4
    El mes de 28-29 dias es Feb cada 4 anos cambia su valor a 29

    Para despblegar un mes se utilizara un while
    se necesitan varios parametros como la cantidad de dias y que dia comenzo el mes



    */