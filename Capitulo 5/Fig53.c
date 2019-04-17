/* Fig. 5.3
    Creacion y uso de una funcion definida por el usuario */

#include <stdio.h>

/* Funcion */
int cuadrado (int y);

/* Funcion Main */
int main()
{

    /* For para repetir 10 veces la funcion */
    for( int x = 1; x <= 10; x++ ){
        printf("X %d ", x);
        printf(" %d \n", cuadrado(x));
    }/* Fin de for */

     return 0;
} /* Fin de MAIN */

/* Funcion de cuadrado */
int cuadrado (int y){
    return y * y;
}/* Fin de la funcion */
