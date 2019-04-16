/* 4.33 Programa para desplegar numeros romanos */
#include<stdio.h>

int main(void)
{
    /* Declarando las variables */
    // int x, l, c;
    int lim_x = 0, c_l = 0;

    /* Inciando for global */
    for(int num = 1; num <= 20; num++){

        /* Varible limite de X cambia con num pares*/
        if ( (num%2) && num >= 3){
            lim_x++;
        }

        /* Restaurando ciclos para x y l */
        if (lim_x == 4){
            lim_x = -1;
            if (c_l == 0)
                c_l = 1;
            else
                c_l = 0;
        }

        /* -------------- ciclo de 5 numeros ----------------- */
        for(int cont_i = -1; cont_i <= 3; cont_i++){

            /* ---------------------    C   ------------------------ */
            /* Para 90 - 93 */
            if( lim_x == -1 && (num%2) && cont_i >= 0 && num >15  )
                        printf("XC");
            /* 94 - 98*/
            if( lim_x == -1 && !(num%2) && cont_i >= -1 && num >15  )
                        printf("XC");
            // /* Para 99 */
            // if( lim_x == 0 && (num%2)   && cont_i == -1)
            //             printf("XC");


            /* ---------------------    L   ------------------------ */
            /* Para 50 - 53  */
            if( lim_x == 0 && (num%2) && cont_i >= 0 && c_l == 1  )
                        printf("L");
            /* Para > 54  */
            if( lim_x >= 0 && num >= 12 && c_l == 1 )
                        printf("L");
            /* Para > 59  */
            if( lim_x == -1 && num == 19  && cont_i == -1)
                        printf("L");

            /* Despligue de 'L' para hacer '39's */
            if( lim_x == -1 && (num%2) && cont_i == -1 )
                        printf("XXX");

           /* Despligue de 'L' para hacer 40's */
            /* 40 - 43 */
           if( lim_x == -1 && (num%2) && cont_i >= 0 && c_l == 1  )
                        printf("XL");
            /* 44 - 48*/
           if( lim_x == -1 && !(num%2) && cont_i >= -1 && c_l == 1  )
                        printf("XL");
            /* 49 */
           if( lim_x == 0 && (num%2) && cont_i == -1 && c_l == 1  )
                        printf("XL");

            /* Despligue de 'L' para hacer '89's */
            if( lim_x == 0 && (num%2) && cont_i == -1 && c_l == 0 && num >= 9   )
                    printf("L");

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
    printf("XCIX\n");
    printf("C\n");

    return 0;
}

/*
    Hubo varios problemas pero en general
    c, x y i tienen un comportaminedo simililar
    cada 4 ciclos comienza su numeracion
*/

