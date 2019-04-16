/* 4.33 Programa para desplegar numeros romanos */
#include<stdio.h>

int main(void)
{
    /* Declarando las variables */
    // int x, l, c;
    int lim_x = 0, c_l = 0;

    /* Inciando for global */
    for(int num = 1; num <= 19; num++){
        printf("N %d lum_x%d\n", num, lim_x);
        /* Varible limite de X cambia con num pares*/
        if ( (num%2) && num >= 3){
            lim_x++;
        }


        /* Para evitar que se despliguen mas de 3 'x' */
        if (lim_x == 4)
            lim_x = -1;

        /* -------------- ciclo de 5 numeros ----------------- */
        for(int cont_i = -1; cont_i <= 3; cont_i++){

             /* ---------------------    C   ------------------------ */
            if( lim_x >= 0 && num >= 17 && num<=18 ){
                        printf("XC");
            }
            if( lim_x >= 0 && num == 19 && cont_i >= -1){
                        printf("C");
                        lim_x = 0;
            }



            /* ---------------------    L   ------------------------ */
            if( lim_x > 0 && num >= 9 && c_l == 1 ){
                        printf("L");
            }


            /* Despligue de 'L' para hacer '39's */
            if( lim_x == 0 && (num%2) && cont_i == -1 && c_l == 1  )
                        printf("XXX");

           /* Despligue de 'L' para hacer 40's */
           if( lim_x == -1 && (num%2) && cont_i >= 0 && c_l == 1  ){
                        printf("XL");
                        lim_x = 0;
           }

            /* Despligue de 'L' para hacer '79's */
            if( lim_x == 0 && (num%2) && cont_i == -1 && c_l == 0 && num >= 9   )
                    printf("LXXX");

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

        /* Varible limite de L cambia con por multiplos de 8 */
        if (!(num%8)){
            if (c_l == 0)
                c_l = 1;
            else
                c_l = 0;
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

    para L cuando numero = 9 es el cambio de valores el siguiente numero es 17
    25,... entonces los numeros son 9 ,17, 25 el sig. seria 33 son cada 8 numeros apartir de 9

    Para L se necesita que este activo de 9 a 17, de 25 a 33, 40 a 48 ...
    cada 9 + 16 se activa, cada 9 + 8 se desactiva
    // esto es cada (8 * x)  1 es cambio es decir s


    se tiene que hacer una excepsion par 39, el l no aparesca y para 89 para que l aparesca al principio
    de hecho cuando numero = 17 'L' deja de aparecer hasta que numero = 25

    cuando numero = 17 c aparece

    Los C comienzan a aparecer apartir del 17
    pero comienza como XC, seguramente tengo que hacer un funcion del switch como la de la




*/

