/* 4.31 Programa para imprimir un diamante  */
#include<stdio.h>

int main(void)
{
    /* Declarando variables */
    int lim_esp = 4, lim_ast = 1;

    printf("\n");
    /* Iniciando for */
    for(int i = 0; i < 9; i++){
        printf("i = %d\t", i);
        printf("lim_esp %d\t", lim_esp);
        printf("lim_ast %d\t", lim_ast);
    /* for para imprimir espacios */
        for(int s = 0; s < lim_esp ; s++)
            printf(" ");

        /* for para imprimir asteriscos */
        for (int a = 0; a < lim_ast; a++)
            printf("*");

        /* actualizando los limites de cada variable e imprmiendo "\n" */
        if ( i < 4){
            lim_esp--;
            lim_ast += 2;
            printf("\n");
        }
        else{
            lim_esp++;
            lim_ast -= 2;
            printf("\n");
        }

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

    porque i < 4? que pasa cuando llega a 4?
        el for trabaja restando a espacios y sumando +2 a asteriscos
            hasta que llega a el numero 3
        cuando pasa a el numero 4
          comienza a agregar +1 a espacios y restas -2 a asteriscos

i = 0   lim_esp 4       lim_ast 1           *
i = 1   lim_esp 3       lim_ast 3          ***
i = 2   lim_esp 2       lim_ast 5         *****
i = 3   lim_esp 1       lim_ast 7        *******
i = 4   lim_esp 0       lim_ast 9       *********
i = 5   lim_esp 1       lim_ast 7        *******
i = 6   lim_esp 2       lim_ast 5         *****
i = 7   lim_esp 3       lim_ast 3          ***
i = 8   lim_esp 4       lim_ast 1           *

        Como adicion
            Cuando comienzo un contador en 0 < X significa que hara tal accion
                x veces por ejemplo
                0 < 9
                contara 9 veces
                tambien puedes comenzar desde 1
                1 <= 10
                equivale a lo mismo solo que se tiene mejor estilo contar solo con < y >

    para el if que se utiliza en medio utilizo una division, una division entre int queda de la sig
    manera, al ser int's redondea al numero, ejem 9/2 = 4, 5/2 = 2, etc.

    */