/* 4.39 Describa en general cómo eliminaría cualquier instruccion
continue de un ciclo, y cómo la remplazaría con alguna estructura
equivalente.
Utilice la técnica que desarrolló aquí, para eliminar la instrucción
continue del programa de la figura 4.12.*/
#include <stdio.h>

int main()
{
    int x; /* contador */

    /* repite el ciclo 10 veces */
    for ( x = 1; x <= 10; x++ ) {

        /* si x es 4, continúa con la siguiente iteración del ciclo */
        if ( x == 5 ) {
                x = 6; /*  salta el 5 modificando el valor de x  */
        }

        printf("%d ", x ); /* despliega el valor de x */
    } /* fin de for */

    printf( "\nModifica el valor de x para saltar la impresion del valor 5\n" );
    return 0; /* indica la terminación exitosa del programa */

} /* fin de la función main */

/*



Programa original
int main()
{
    int x; / contador /

    / repite el ciclo 10 veces /
    for ( x = 1; x <= 10; x++ ) {

    / si x es 5, continúa con la siguiente iteración del ciclo /
        if ( x == 5 ) {
            continue; / ignora el resto del código en el cuerpo del ciclo /
        } / fin de if /

        printf("%d ", x ); / despliega el valor de x /
    } / fin de for /

    printf( "\nUtiliza continue para ignorar la impresion del valor 5\n" );
    return 0; / indica la terminación exitosa del programa /

} / fin de la función main /
*/