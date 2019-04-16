/* 4.33 Programa para desplegar numeros romanos */
#include<stdio.h>

int main(void)
{
    /* Declarando las variables */
    // int x, l, c;
    int lim_x = 0;

    /* Inciando for global */
    for(int num = 1; num <= 5; num++){
        // printf("%d\n",num);

        /* Varible limite de X cambia con num pares*/
        if ( (num%2) && num >= 3){
            lim_x++;
            // printf("lim%d\n",lim_x);
        }

        /* -------------- ciclo de 5 numeros ----------------- */
        for(int cont_i = -1; cont_i < 3; cont_i++){





            /* Para los X Solos */
            if( cont_i == 0 && num >= 2 && (num%2)){
                for ( int cont_x = 0; cont_x <= lim_x; cont_x++)
                        printf("X");
                printf("\n");
            }
            /* Para los X Solos impares para V */
            if( cont_i == 0 && num >= 3 && !(num%2)){
                for ( int cont_x = 0; cont_x <= lim_x; cont_x++)
                        printf("X");

            }

            /* Para los X cuatros pares */
            if( cont_i == -1 && num >= 3 && !(num%2)){
                for ( int cont_x = 0; cont_x <= lim_x; cont_x++)
                        printf("X");
            }


            /* Despliegue de 'X' de la izquierda */
            if (num >= 3 && cont_i >= 0){
                for ( int cont_x = 0; cont_x <= lim_x; cont_x++)
                        printf("X");
            }




            /* Despligue de 'X' para hacer '9's */
            if( cont_i == -1 && (num%2) && num > 1)
                    printf("IX");


            /* Imprimiendo 'I's 'positivos'*/
            if( (num%2) ){
                for( int i_s = 0; i_s <= cont_i; i_s++)
                    printf("I");
            }


            /* imprimiendo los i de la izquierda para cada caso */
            /* Para los 5 */
            if (cont_i == -1 && !(num%2))
                printf("IV");


            /* imprimiendo para los casos de cont_i = 0, cuando aparece un X o V*/

            /* Para los V solos*/
            if( cont_i == 0 && !(num%2))
                printf("V\n");

            /* Para imprimir los V */
            if( !(num%2) && cont_i >= 0){
                printf("V");
                 /* Imprimiendo 'I's 'positivos'*/
                for( int i_s = 0; i_s <= cont_i; i_s++)
                    printf("I");

            }
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

