#include <stdio.h>
/* la función main inicia la ejecución del programa */
int main()
{
    int fila = 10; /* inicializa la fila */
    int columna; /* declara columna */

    while ( fila >= 1 ) { /* repite el ciclo hasta que fila < 1 */
        columna = 1; /* establece la columna en 1 al comenzar la iteración */
        while (columna <= 10){
            printf("%s", fila % 2 ? "<" : ">");
            columna++;
        }
    fila--;
    printf( "\n" );
    }
    return 0;
}