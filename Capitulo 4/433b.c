/* 4.33 Programa para desplegar numeros romanos */
#include<stdio.h>

int main(void)
{
    /* Declarando las variables */
    // int x, l, c;


    /* Inciando for global */
    for(int num = 1; num <= 4; num++){

        /* ciclo de 5 numeros */
        for(int cont_i = -1; cont_i < 3; cont_i++){
            /* imprimiendo los i de la izquierda */
            if (cont_i == -1)
                printf("I0");


            /* Imprimiendo 'I's 'positivos'*/
            for( int i_s = 0; i_s <= cont_i; i_s++)
                printf("I");

            printf("\n");
        }

    }
}

/*
    Necesito saber si hay alguna manera de hacer que un chart se despliegue mas de una vez
    si la hay haciendo que una variable dentro del for, la que hace de limite se  modifique cada vez
    como lo esta haciendo el for en 'I's, cont_i sera el numero de 'I' que se imprimiran

    Necesito un for que me permita cambiar la cantidad de chars que ya estan dentro de un numero
    o quiza no chars pero si modificar el string, es decir si num = 1 char x = 'X' si num = 2 char x = 'XX'

*/

