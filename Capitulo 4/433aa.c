/* 4.33 Programa para desplegar numeros romanos */
#include<stdio.h>

int main(void)
{
    /* Declarando las variables */
    // int x, l, c;
    int lim_x = 0;

    /* Inciando for global */
    for(int num = 1; num <= 10; num++){
        // printf("%d\n",num);

        /* Varible limite de X cambia con num pares*/
        if ( (num%2) && num >= 3){
            lim_x++;
            // printf("lim%d\n",lim_x);
        }

        /* -------------- ciclo de 5 numeros ----------------- */
        for(int cont_i = -1; cont_i <= 3; cont_i++){

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

            // }

            // /* Para los X cuatros pares */
            // if( cont_i == -1 && num >= 3 && !(num%2) ) {
            //     for ( int cont_x = 0; cont_x <= lim_x; cont_x++)
            //             printf("X");
            // }



            // /* Despliegue de 'X' de la izquierda */
            // if (num >= 3 && cont_i >= 0){
            //     for ( int cont_x = 0; cont_x <= lim_x; cont_x++)
            //             printf("X");
            // }

            /* ------- Imprimiendo 'I's 'positivos' ----------*/
            if( (num%2) ){
                for( int i_s = 1; i_s <= cont_i; i_s++)
                    printf("I");
            }
            // /* Imprimiendo 'I's 'positivos' en pares*/
            // if( !(num%2) ){
            //     for( int i_s = 0; i_s <= cont_i; i_s++)
            //         printf("I");
            // }


            /* -- Imprimiendo 4 - 8 ----- */
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

*/

