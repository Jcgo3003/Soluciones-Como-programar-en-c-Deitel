/* Programa 3.17
Los condutores estan preocupados por el ... */

#include<stdio.h>

int main(void)
{
    int litros = 0, kilometros = 0, total_litros = 0, total_kilometros = 0;

    while (litros != -1) {
        printf("Introduzca los litros utilizados(-1 para terminar): ");
        scanf("%d", &litros);
        total_litros += litros;

        if (litros == -1)
            break;

        printf("introduzca los kilometros conducidos: ");
        scanf("%d", &kilometros);

        total_kilometros += kilometros;

        if (litros > 0 && kilometros > 0)
            printf("Los kilometros por litro de este tanque son:  \n");
        else{
            printf("Error!\n");
            break;
        }
    }

    printf("esta linea se imprime antes de la division");
    if (total_litros > 0 && total_kilometros > 0)
        printf("El promedio general de kilometros/litro fue %d\n", total_litros/total_kilometros);
    return 0;
}