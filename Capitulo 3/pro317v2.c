/* programa 317 version 2 */

#include<stdio.h>

int main(void)
{
    /* introduciendo e inicializando variables*/
    float litro = 0, kilometro = 0, t_litros = 0, t_kilometros = 0;

    /* imprimiendo el primer litro */
    printf("Introduzca la cantidad de litros utilizados (-1 para terminar): ");
    scanf("%f", &litro);

    /* inicializando while*/
    while (litro != -1) {
        t_litros += litro;

        printf("Introduzca los kilometros coducidos: ");
        scanf("%f", &kilometro);
        t_kilometros += kilometro;

        printf("Los kilometros por litro de este tanque fueron: %f \n\n", kilometro/litro);

        printf("Introduzca la cantidad de litros utilizados (-1 para terminar): ");
        scanf("%f", &litro);

    }

    printf("El promedio general de kilometros/litro fue de %f \n", t_kilometros/t_litros);
}