/* Fig. 5.4
    Encontrando el Maximo de tres enteros */

#include <stdio.h>

/* Funcion para encontrar el maximo */
int maximo (int am, int bm, int cm);

int main(){

    /* Enteros para contar */
    int a, b, c;

    /* Obteniendo algunos numeros del usuario */
    printf("Introduzca algunos numeros \n");
    scanf("%d%d%d", &a, &b, &c);

    /* Llamando a la funcion maximo*/
    printf("El maximo es %d\n", maximo(a, b, c));

    return 0;

}/* Fin de main*/

/* Definiendo la funcion maximo */
int maximo (int am, int bm, int cm){
    int max = am;

    /* Encontrando el maximo*/
    if (bm > max){
        max = bm;
    }

    /* Encontrando el maximo */
    if (cm > max){
        max = cm;
    }

    return max;

}/* Fin de funcion maximo */