/* 4.19 Escriba un programa para obtener los siguientes datos
a) Número de producto.
b) Cantidadvendidaduranteeldía.
Su programa debe utilizar una instrucción switch determinar el precio de lista de cada producto.
Su programa debe calcular y desplegar el valor total de venta de todos los productos vendidos la semana pasada. */

#include<stdio.h>

int main(void)
{
    /* declarando variables utilizar */
    int semana = 1, dia = 1, producto;
    int prod_1 = 0, prod_2 = 0, prod_3 = 0, prod_4 = 0, prod_5 = 0;
    float pre_1 = 2.98, pre_2 = 4.50, pre_3 = 9.98, pre_4 = 4.49, pre_5 = 6.87, total = 0;

    /* imprimiendo en pantalla las intruciones */
    printf("Introducir numero de producto\n");
    printf("Introducir '0' para terminar dia\n");
    printf("Dia %d\n", dia);

    /* iniciando while para iniciar swich */
    while( (producto = getchar()) != EOF ){
        printf("Total de productos vendidos este dia\n");
        printf("1=%d 2=%d 3=%d 4=%d 5=%d\n", prod_1, prod_2, prod_3, prod_4, prod_5);
        switch( producto ){
            /* producto 1 */
            case '1': ++prod_1;
            break;
            /* producto 2 */
            case '2': ++prod_2;
            break;
            /* producto 3*/
            case '3': ++prod_3;
            break;
            /* producto 4*/
            case '4': ++prod_4;
            break;
            /* producto 5*/
            case '5': ++prod_5;
            break;
            /* final de dia */
            case '0':
                ++dia;
                if ( dia < 8){
                printf("Dia terminado\nDia %d semana %d\n", dia, semana);
                }
                else { /* terminando una semana */
                    /* reniciando la sig. semana*/
                    dia = 1;
                    ++semana;

                    /* imprimiendo total de la semana - sumando elementos*/
                    total = (prod_1 * pre_1) + (prod_2 *pre_2) + (prod_3 * pre_3) + (prod_4 * pre_4) + (prod_5 * pre_5);
                    printf("\n");
                    printf("El total es %.2f\nDia %d semana %d\n", total, dia, semana);

                    /* reiniciando los productos */
                    prod_1 = prod_2 = prod_3 =  prod_4 = prod_5 = 0;
                }
                break;
            /* ignorando lineas nuevas, tabuladores y espacios */
            case '\n':
            case '\t':
            case ' ':
                break;
            /* Imprimiendo errores */
            default:
                printf("Introdujo un producto inexistente\n");
                printf("Introduzca numero de producto\n");
                break;
        }
    }

    return 0;
}

/* la linea 23 es completamete ignorada la primera vez que corre el programa
    despues de recibir el char imprime cada vez el # de productos vendidos
    no me gusta que get char pueda obtner varios numero en una sola lina lo
    hace confuso y problematico
    un numero como 572 hace que 5 aumente 1, mande mensaje de error y 2 aumente
    NOT NICE!
    */
