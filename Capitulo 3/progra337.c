/* Programa 3.37 ciclo while que cuente de 1 a 300,000,000 */
#include<stdio.h>

int main(void)
{
    /* Declarando las varibles */
    long long  i = 0, j = 100000000, limite = j;
    int mult = 2;

    /* Comenzando ciclo */
    while( i < 300000000){
        /* Cuand i alcanzace a i */
        if (i == limite){
            /* imprimir en pantalla */
            printf("Multiplo de 100,000,000 alcanzado\n");

            /* limite es igual a limite * mult*/
            limite = j * mult;

            /* agrego 1 a mult*/
            mult++;
        }
        i++;
    }

    return 0;
}

/* Necesito que j cambien de valor cada vez que es alcanzado
j * 1
j * 2
j * 3

pero a la vez j debe permanecer con el mismo valor
no hay otra opcion que hacer una variable solo para eso

*/