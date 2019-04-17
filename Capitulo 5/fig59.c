/* Figura 5.9
    Ramdomizacion del programa de dados */
#include <stdlib.h>
#include <stdio.h>

/* Funcion main */
int main(){
    /* Contador */
    int i;

    /* Numero que se utiliza para establecer la semilla del generador de muneros aleatorios */
    unsigned semilla;

    printf("Introduzca la semilla: ");
    scanf(" %u", &semilla);

    /* Establece la semilla del generador de numeros aleatorios */
    srand(semilla);

    /* for para repetir 10 veces */
    for( i = 1; i <= 10; i++){

        /*obtiene y despliega un numero aleatorio entre 1 y 6 */
        printf("%10d", 1 + (rand()%6 ) );

        /* Si el contador es divisible entre 5, hara una nueva linea, de esta manera los datos se desplegaran como tabla */
        if ( i % 5 == 0){
            printf("\n");
        }
    }/* Fin de for */

    return 0;
}/* fin de Main */