/* Una crítica de las instrucciones break y continue es que no son estructuradas
En realidad, las instrucciones break y continue siempre se pueden remplazar con
instrucciones estructuradas, sin embargo, hacerlo puede resultar perjudicial.

En general, describa cómo eliminaría cualquier instrucción break de un ciclo,
y cómo la remplazaría con algún equivalente estructurado.
[Pista: La instrucción break abandona un ciclo desde el cuerpo mismo del ciclo.
La otra manera de abandonar el ciclo es al fallar la condición de terminación de éste.
Considere utilizar una prueba de continuación de ciclo como una segunda prueba
que indique un “abandono temprano debido a una condición break”.] Utilice la técnica
que desarrolló aquí, para eliminar la instrucción break del programa de la figura 4.11.
*/
#include <stdio.h>

/* la función main comienza la ejecución del programa */
int main()
{
    int x; /* contador */

    /* repite 10 veces el ciclo */
    for ( x = 1; x <= 10; ++x ) {

        /* si x es 5, termina el ciclo */
        if ( x == 5 ) {
            printf("abandono temprano debido a una condición break ");
            x = 11; /* rompe el ciclo al cambiar el valor de x*/
         } /* fin de if */

        printf("%d ", x ); /* despliega el valor de x */

    } /* fin de for */

    printf( "\nRompe el ciclo en x == %d\n", x );
    return 0;/* indica la terminación exitosa del programa */


}/* fin de la función main */

/*
Para terminar emular la fucion break solamente hago que la variable x sea 10 de esa
manera el ciclo for termina antes

el x termina en con +1 a la final por que el ciclo for agrega uno al final cuando
termina las intrucciones que estan dentro de {} sin importar si la instruccion es ++x o x++,
despues de sumar uno evalua la condicion



Programa original
/Figura 4.11: Uso de la instrucción break dentro de la instrucción for /
#include <stdio.h>

/ la función main comienza la ejecución del programa /
int main()
{
    int x; / contador /

    / repite 10 veces el ciclo /
    for ( x = 1; x <= 10; x++ ) {

        / si x es 5, termina el ciclo /
        if ( x == 5 ) {
            break; / rompe el ciclo sólo si x es 5 /
         } / fin de if /

        printf("%d ", x ); / despliega el valor de x /

    } / fin de for /

    printf( "\nRompe el ciclo en x == %d\n", x );
    return 0;/ indica la terminación exitosa del programa /


}/fin de la función main/
*/