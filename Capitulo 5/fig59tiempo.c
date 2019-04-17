/* Figura 5.9
    Ramdomizacion del programa de dados
    Pero esta vez la semilla la dara la computadora misma
    con la libreria tiempo.
    */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Funcion Main - Principal */
int main (){

    /* Este es el receptor de la semilla donde se le esta inyentado tiempo */
    srand(time(NULL));
    printf("Tiempo %ld\n", time(NULL));

    /* for con contador includo para contar 10 veces */
    for (int i = 1; i <= 10; i++){

        /* Desplegando el resultado aleatorio*/
        printf( "%4d" , 1 + (rand()%6) );

        /* Imprimiendo una linea mas de los resultados*/
        if (i % 5 == 0){
            printf("\n");
        }
    }/* Fin de for */

    return 0;
}/* Fin de Main - Principal */

/* Observaciones:
   - srand() Obtiene un numero para que la funcion rand
     cree un numero aleratorio en base a esa 'Semilla'

   - La funcion time(NULL) agrega un numero sin signo (unsigned) de esta
     Manera se introduce a srand numeros como 1542162094
        Sin el "NULL" la funcion time no despliega nada, produce error
        Consultar la informacion sobre la biblioteca time.h
*/
