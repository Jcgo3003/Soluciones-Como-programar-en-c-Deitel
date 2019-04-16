/* 4.33 Programa para desplegar numeros romanos */
#include<stdio.h>

int main(void)
{
    /* Declarando las variables */
    // int x, l, c;
    int lim_x = 0;

    /* Inciando for global */
    for(int num = 1; num <= 20; num++){

        /* Varible limite de X cambia con num pares*/
        if ( (num%2) && num >= 3){
            lim_x++;
            // printf("lim%d\n",lim_x);
        }
        /* Para evitar que se despliguen mas de 3 'x' */
        if (lim_x == 4)
            lim_x = 0;

        /* -------------- ciclo de 5 numeros ----------------- */
        for(int cont_i = -1; cont_i <= 3; cont_i++){

            // /* Para desplegar numeros mayores a 38 */
            // /* 40's */
            // if( lim_x == 0 && num > 8 )
            //     printf("XXX");

            /* ---------------------    L   ------------------------ */
            /* Despligue de 'L' para hacer '39's */
            if( lim_x == 0 && num > 8 && (num%2) && cont_i == -1 ){
                        printf("XXX");

            }

            /* Despligue de 'L' para hacer '79's */
            if( lim_x == 0 && num > 16 && (num%2) && cont_i == -1 )
                for ( int cont_x = 1; cont_x <= lim_x; cont_x++)
                    printf("LXXX");

            /* Para l   */
            if( lim_x >= 0 && num >= 9 ){
                        printf("L");
            }



            /* ---------------------    X   ------------------------ */
            /* Despligue de 'X' para hacer '9's */
            if( cont_i == -1 && num > 2 && (num%2) ){
                for ( int cont_x = 1; cont_x <= (lim_x - 1); cont_x++)
                        printf("X");
                    printf("IX");
            }

            /* Despligue de 'X' para hacer '4's */
            if( cont_i == -1 && num > 2 && !(num%2) )
                for ( int cont_x = 1; cont_x <= lim_x; cont_x++)
                    printf("X");

            /* Para 10 - 14 */
            if( cont_i >= 0 && num >= 3 ){
                for ( int cont_x = 1; cont_x <= lim_x; cont_x++)
                        printf("X");
            }




            /* ---------------------    I   ------------------------ */
            if( (num%2) ){
                for( int i_s = 1; i_s <= cont_i; i_s++)
                    printf("I");
            }


            /* ---------------------    V   ------------------------ */
            /*  Imp. 4  */
            if (cont_i == -1 && !(num%2))
                printf("IV");


            /* Para imprimir los V  de 5 - 8*/
            if( !(num%2) && cont_i >= 0){
                printf("V");
                 /* Imprimiendo 'I's 'positivos'*/
                for( int i_s = 0; i_s < cont_i; i_s++)
                    printf("I");
            }
            /* terminando de imprimir el numero */
            printf("\n");
        }
    }
}

/*
    el programa despliega correctamente hasta el XXXIX
    for(int num = 1; num <= 8; num++){

    Despues de ese punto se deven modificar parametros


    Asi como esta ahora llega hasta 88

    problemas  no imprime correctamente 38 agrega el L
        buscar una sentencia que que logra superar las el  numero 38
            que variables hay justo cuando llega a 39

*/

