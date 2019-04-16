/* Programa 3.40 imprimiendo patrones en pantalla */
#include<stdio.h>

int main(void)
{
    /* Declarando e inicializando variables */
    int contador = 1, contador2 = 0;

    /* Comenzando while */
    while( contador < 81){
        printf("* ");
        if (contador % 8 == 0){
            printf("\n");
            contador2++;
            if (contador2 % 2)
                printf(" ");
        }
        contador++;
    }
    return 0;
}