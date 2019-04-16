/* 4.21 modificando programa 4.2
Rescriba el programa de la figura 4.2 de manera que la inicialización de la variable contador se haga en la dec
ración, en lugar de hacerlo en la instrucción for.*/
#include<stdio.h>

int main(void)
{
    /* declarando contador */
    int contador = 1;

    /* Iniciando for */
    for(;contador <= 10; contador++){
        printf("%d", contador);
    }
    printf("\n");

    return 0;
}