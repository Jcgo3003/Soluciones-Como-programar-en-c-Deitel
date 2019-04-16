/* Programa 3.29 */
#include<stdio.h>

int main(void)
{
    int contador = 1;

    while (contador <= 10){
        /* imprime si contador mod 2 es verdadero */
        /* printf ("%d\n", contador % 2 ? "verdadero" : "falso");*/
        // printf("%s ", contador % 2 ? "*****" : "++++++++");

        // printf("\t %d \n", contador % 2);
        printf ("%s ", contador % 2 ? "TRUE" : "FALSE");
        printf ("Contador es %d modulo es %d \n",contador, contador % 2);
        contador++;
    }
    return 0;
}
/// printf(" %s \n", blabla ? "adfds": "fdadsfs");