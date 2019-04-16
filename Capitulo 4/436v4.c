/* Programa 4.37 para el despliegue del los calendarios 1994 - 1999 */
#include<stdio.h>

int main(void)
{
    /* Declarando las variables */
    int linea = 1, dia_s = 1, dias = 1, dia_com = 3, dias_2 = 1, dia_com2 = 6;
    int dias_3 = 1, dia_com3 = 3, dias_4 = 1, dia_com4 = 6;
    int ano = 1995;
    /* Obteniendo el ano correcto */


    printf("\t\t\t\t\tAÑO %d\n\n",ano);
    /* Imprimiendo un mes de 31*/

    while( linea <= 3){

    if (linea == 1){
        printf("\tEnero\t\t\tFebrero\t\t\tMarzo\t\t\tAbril\n");

    }
    if (linea == 2){
        printf("\tMayo\t\t\tJunio\t\t\tJulio\t\t\tAgosto\n");

    }
    if (linea == 3){
        printf("\tSeptiembre\t\tOctubre\t\t\tNoviembre\t\tDiciembre\n");

    }

    /* Imprimiendo los dias de la semana */
    printf("%3c%3c%3c%3c%3c%3c%3c", 'L', 'M', 'M', 'J', 'V', 'S', 'D');
    printf("%3c%3c%3c%3c%3c%3c%3c%3c",' ', 'L', 'M', 'M', 'J', 'V', 'S', 'D');
    printf("%3c%3c%3c%3c%3c%3c%3c%3c", ' ', 'L', 'M', 'M', 'J', 'V', 'S', 'D');
    printf("%3c%3c%3c%3c%3c%3c%3c%3c\n", ' ', 'L', 'M', 'M', 'J', 'V', 'S', 'D');

        while(dias_4 <= 28){

            /* imprimiendo los espacios de los primeros dias */
            if (dias == 1){
                for( int i = 1; i <= dia_com-1; i++)
                    printf("%3s", " ");
            }
            else if (dias != 1){
                dia_com = 1;
                dia_com2 = 1;
                dia_com3 = 1;
                dia_com4 = 1;
            }

            /* for para comenzar los dias */
            for (dia_s = dia_com; dia_s <= 7; dia_s++){
                if ( dias > 31){
                    for( int i = 1; i <= 8-(dia_s-1); i++)
                    printf("%3s", " ");
                    break;
                }
                printf("%3d", dias);
                dias++;

                if (dia_s == 7){
                    printf("\t");
                }
            }

            ///////////////     2     ////////////////
            if (dias_2 == 1){
                for( int i = 1; i <= dia_com2-1; i++)
                    printf("%3s", " ");
            }

            /* for para comenzar los dias */
            for (dia_s = dia_com2; dia_s <= 7; dia_s++){
                if ( dias_2 > 28){
                    for( int i = 1; i <= 8-(dia_s-1); i++)
                    printf("%3s", " ");
                    break;
                }
                printf("%3d", dias_2);
                dias_2++;

                if (dia_s == 7){
                    printf("\t");
                }
            }

            ///////////////////////////////
            if (dias_3 == 1){
                for( int i = 1; i <= dia_com3-1; i++)
                    printf("%3s", " ");
            }

            /* for para comenzar los dias */
            for (dia_s = dia_com3; dia_s <= 7; dia_s++){
                if ( dias_3 > 31){
                    for( int i = 1; i <= 8-(dia_s-1); i++)
                    printf("%3s", " ");
                    break;
                }
                printf("%3d", dias_3);
                dias_3++;

                if (dia_s == 7){
                    printf("\t");
                }
            }


            ///////////////////////////////
            if (dias_4 == 1){
                for( int i = 1; i <= dia_com4-1; i++)
                    printf("%3s", " ");
            }

            for (dia_s = dia_com4; dia_s <= 7; dia_s++){
                if ( dias_2 > 30){
                    printf("\n");
                    break;
                }

                printf("%3d", dias_4);
                dias_4++;

                if (dia_s == 7){
                    printf("\n");
                }
            }

        }

    dias = 1;
    dias_2 = 1;
    dias_3 = 1;
    dias_4 = 1;

    dia_com = 1;
    dia_com2 = 1;
    dia_com3 = 1;
    dia_com4 = 1;

    linea++;

    printf("\n");

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


ocurria esto cuando terminaba el mes por que el mes anterior pasaba el dia en que terminaba hasta el final


L  M  M  J  V  S  D     L  M  M  J  V  S  D
        1  2  3  4  5                    1 6  2 7
  6  7  8  9 10 11 12     3 1  4 2  5 3  6 4  7 5  8 6  9 7
 13 14 15 16 17 18 19    10 1 11 2 12 3 13 4 14 5 15 6 16 7
 20 21 22 23 24 25 26    17 1 18 2 19 3 20 4 21 5 22 6 23 7
 27 28 29 30 31          24 6 25 7
                 26 1 27 2 28 3

if ( dias > 31){
    printf("\t\t");
    dia_com2 = dia_s;
    break;
}

    */