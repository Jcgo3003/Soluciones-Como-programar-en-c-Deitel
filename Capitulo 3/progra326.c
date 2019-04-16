/* Programa 3.26 */
#include<stdio.h>

int main(void)
{
    /* Inicializando valores*/
    int i = 3;

    /* imprimiendo cabezera */
    printf("A \t A+2 \t A+4 \t A+6 \n\n");

    /* Iniciando ciclos */
    while (i < 6){
        printf("%d \t %d \t %d\t %d \n", 3*i, 3*i+2, 3*i+4, 3*i+6);
        i++;
    }

    return 0;
}