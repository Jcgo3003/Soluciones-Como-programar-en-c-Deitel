/* 4.31 Programa para imprimir un diamante  */
#include<stdio.h>

int main(void)
{
    /* Declarando variables */
    int lim_esp = 4, lim_ast = 1;

    printf("\n");
    /* Iniciando for */
    for(int i = 0; i < 5; i++){
    /* for para imprimir espacios */
        for(int s = 0; s < lim_esp ; s++)
            printf(" ");

        /* for para imprimir asteriscos */
        for (int a = 0; a < lim_ast; a++)
            printf("*");

        /* actualizando los limites de cada variable e imprmiendo "\n" */
        lim_esp--;
        lim_ast += 2;
        printf("\n");
    }
    /* imprimiendo el diamante invertido*/
    lim_esp = 1;
    lim_ast = 7;
    for(int i = 0; i < 5; i++){
        /* for para imprimir espacios */
        for(int s = 0; s < lim_esp ; s++)
            printf(" ");

        /* for para imprimir asteriscos */
        for (int a = 0; a < lim_ast; a++)
            printf("*");

        /* actualizando los limites de cada variable e imprmiendo "\n" */
        lim_esp++;
        lim_ast -= 2;
        printf("\n");
    }

    return 0;
}

/*  el diamante se forma de la siguiente manera
    4 espacios  1 asterisco
    3 espacios  3 asteriscos
    2 espacios  5 asteriscos
    1 espacio   7 asteriscos
    0 espacios  9 asteriscos
    1 espacio   7 asteriscos y asi.. se repite 10 veces

    el limite se debe estar actualizando cada linea es decir
    que el for de cada uno de espacio y asterisco se actulicen
    cada vez que termina una linea
    lim_esp   lim_ast

    */