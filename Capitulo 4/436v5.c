/* Programa 4.37 para el despliegue del los calendarios 1994 - 1999 */
#include<stdio.h>

int main(void)
{
    /* Declarando las variables */
    int dia_s = 1, linea = 1, bisiesto = 0, dia_com_global = 0, ano = 1995;
    int dias = 1, dias_2 = 1, dias_3 = 1, dias_4 = 1;
    int dia_com = 0, dia_com2 = 0, dia_com3 = 0, dia_com4 = 0;
    int mes_1, mes_2, mes_3, mes_4;

    /* Obteniendo el ano correcto */
    printf("Elige un un año para desplegar su calendario(entre 1994 - 1999) ");
    scanf("%d", &ano);
    while( ano < 1994 || ano > 1999 ){
        printf("Elige un un año para desplegar su calendario(entre 1994 - 1999) ");
        scanf("%d", &ano);
    }

    /* Asignando el dia de la semana con el que comenzo el ano
       Se puede agregar un algoritmo para calcular el dia en que comienza un ano *cualquier ano*,
       simplemente agregando la salida a dia_com_global, de esta forma el codigo puede ser modificado
       para mostrar el calendario gregoriano de cualquier ano */

    if (ano == 1994)
        dia_com_global = 6;
    if (ano == 1995)
        dia_com_global = 7;
    if (ano == 1996)
        dia_com_global = 1;
    if (ano == 1997)
        dia_com_global = 3;
    if (ano == 1998)
        dia_com_global = 4;
    if (ano == 1999)
        dia_com_global = 5;

    /* Algoritmo para determinar si el ano es bisiesto */
    if (!(ano%4)){
        bisiesto = 1;
        if ( !(ano%100) ){
            bisiesto = 0 ;
            if( !(ano%400)){
                bisiesto  = 1;
            }
        }
    }

    /* imprimiendo el ano hasta arriva del todo */
    printf("\n\t\t\t\t\tAÑO %d\n\n",ano);

    /* varibles que serviran para calcular los dias de inicio de los meses */
    int x = 0, y = 0, z = 0;

    /* Comenzando un while que imprimira 3 lineas y en cada linea imprimira 4 meses*/
    while( linea <= 3){

        /* Linea de los primeros 4 meses */
        if (linea == 1){
            printf("\tEnero\t\t\tFebrero\t\t\tMarzo\t\t\tAbril\n");
            /* Asignando duracion a los meses*/
            mes_1 = 31;
            /* Febrero */
            mes_2 = 28 + bisiesto;

            /* Marzo */
            mes_3 = 31;
            /* abril */
            mes_4 = 30;

            /* Calculando el dia de inicio para los siguientes meses */
            /* Enero*/
            dia_com = dia_com_global;

            /* Comienzo para febrero */
            x = 31 + (dia_com - 1);
            y = x / 7;
            z = x - (y * 7);
            dia_com2  = z + 1;


            /* Para marzo */
            x += 28 + bisiesto;
            y = x / 7;
            z = x - (y * 7);
            dia_com3  = z + 1;

            /* Para abril */
            x += 31;
            y = x / 7;
            z = x - (y * 7);
            dia_com4  = z + 1;

        }
        /* Linea de los segundos 4 meses y sus respectivos cambios en variables */
        if (linea == 2){
            printf("\tMayo\t\t\tJunio\t\t\tJulio\t\t\tAgosto\n");
            /* Asignando duracion a los meses*/
            mes_1 = 31;
            /* junio */
            mes_2 = 30;
            /* julio */
            mes_3 = 31;
            /* agosto */
            mes_4 = 31;

            ////////* Calculando el dia de inicio para los siguientes meses *////////
            /* Para mayo */
            x += 30;
            y = x / 7;
            z = x - (y * 7);
            dia_com  = z + 1;

            /* Para Junio */
            x += 31;
            y = x / 7;
            z = x - (y * 7);
            dia_com2  = z + 1;

             /* Para julio */
            x += 30;
            y = x / 7;
            z = x - (y * 7);
            dia_com3  = z + 1;

             /* Para agosto */
            x += 31;
            y = x / 7;
            z = x - (y * 7);
            dia_com4  = z + 1;

        }
        /* Linea de los ultimos 4 meses y sus respectivos cambios en variables */
        if (linea == 3){
            printf("\tSeptiembre\t\tOctubre\t\t\tNoviembre\t\tDiciembre\n");
            /* Asignando duracion a los meses*/
            mes_1 = 30;
            /* Octubre */
            mes_2 = 31;
            /* Noviembre */
            mes_3 = 30;
            /* Diciembre */
            mes_4 = 31;

            ////////* Calculando el dia de inicio para los siguientes meses *////////
            /* Para Septiembre */
            x += 31;
            y = x / 7;
            z = x - (y * 7);
            dia_com  = z + 1;

            /* Para Octubre */
            x += 30;
            y = x / 7;
            z = x - (y * 7);
            dia_com2  = z + 1;

             /* Para Noviembre */
            x += 31;
            y = x / 7;
            z = x - (y * 7);
            dia_com3  = z + 1;

             /* Para Diciembre */
            x += 30;
            y = x / 7;
            z = x - (y * 7);
            dia_com4  = z + 1;
        }

        /* Imprimiendo los dias de la semana */
        for (int d_s = 1; d_s <= 4; d_s++){
        printf("%3c%3c%3c%3c%3c%3c%3c%3c", 'L', 'M', 'M', 'J', 'V', 'S', 'D', ' ');
        }
        printf("\n");

        /* Imprimiendo la linea de 4 meses */
        while( dias <= mes_1 || dias_2 <= mes_2 || dias_3 <= mes_3 || dias_4 <= mes_4  ){
            //////////////   Mes 1    ////////////////
            /* imprimiendo los espacios de los primeros dias */
            if (dias == 1){
                for( int i = 1; i <= dia_com-1; i++)
                    printf("%3s", " ");
            }
            /* Para que despues de la primer semana imprima desde el lunes */
            if (dias != 1){
                dia_com = 1;
                dia_com2 = 1;
                dia_com3 = 1;
                dia_com4 = 1;
            }

            /* for para comenzar los dias */
            for (dia_s = dia_com; dia_s <= 7; dia_s++){
                /*impriendo los espacios de la parte de abajo del mes*/
                if ( dias > mes_1){
                    for( int i = 1; i <= 8-(dia_s-1); i++)
                    printf("%3s", " ");
                    break;
                }
                printf("%3d", dias);
                dias++;
                /* espacio \t para comenzar a imprimier el proximo mes*/
                if (dia_s == 7){
                    printf("\t");
                }
            }

            //////////////   Mes 2     ////////////////
            /* Imprimiendo espacios arriba*/
            if (dias_2 == 1){
                for( int i = 1; i <= dia_com2-1; i++)
                    printf("%3s", " ");
            }

            /* Imprimiendo mes*/
            for (dia_s = dia_com2; dia_s <= 7; dia_s++){
                /*impriendo los espacios de la parte de abajo del mes*/
                if ( dias_2 > mes_2){
                    for( int i = 1; i <= 8-(dia_s-1); i++)
                    printf("%3s", " ");
                    break;
                }

                printf("%3d", dias_2);
                dias_2++;

                /* espacio \t para comenzar a imprimier el proximo mes*/
                if (dia_s == 7){
                    printf("\t");
                }
            }

            ///////////////     Mes 3   ////////////////
            /* Imprimiendo espacios*/
            if (dias_3 == 1){
                for( int i = 1; i <= dia_com3-1; i++)
                    printf("%3s", " ");
            }

            /* Imprimiendo mes*/
            for (dia_s = dia_com3; dia_s <= 7; dia_s++){
                /*impriendo los espacios de la parte de abajo del mes*/
                if ( dias_3 > mes_3){
                    for( int i = 1; i <= 8-(dia_s-1); i++)
                    printf("%3s", " ");
                    break;
                }

                printf("%3d", dias_3);
                dias_3++;

                /* espacio \t para comenzar a imprimier el proximo mes*/
                if (dia_s == 7){
                    printf("\t");
                }
            }

            ////////////////    Mes 4   ///////////////
            /* Imprimiendo espacios*/
            if (dias_4 == 1){
                for( int i = 1; i <= dia_com4-1; i++)
                    printf("%3s", " ");
            }
            /* Imprimiendo mes*/
            for (dia_s = dia_com4; dia_s <= 7; dia_s++){
                /* /n para imprimir el siguiente linea */
                if ( dias_4 > mes_4){
                    printf("\n");
                    break;
                }

                printf("%3d", dias_4);
                dias_4++;

                /*  \n para comenzar a la proxima linea*/
                if (dia_s == 7){
                    printf("\n");
                }
            }
            //////////////////////////////////////////////////

        }
        /* Regresando los valores que calculan los dias a 1 */
        dias = 1;
        dias_2 = 1;
        dias_3 = 1;
        dias_4 = 1;

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

  ---- Anos bisiestos -------
Los años divisibles entre 4 son años bisiestos…  mod%4
…con la excepción de que los años divisibles entre 100 no son años bisiestos… mod%100
…excepto los años que también son divisibles entre 400, que sí son bisiestos.
si se pueden dividir entre 4 bisiesto
    si se puede dividir entre 100 No bisiesto
        si es divisible entre 400 si es bisiesto
if (!(ano%4)){
    bisiesto = 1;
    if ( ano%100){
        bisiesto = 0;
        if( !(ano%400)){
            bisiesto  = 1;
        }
    }
}

    */