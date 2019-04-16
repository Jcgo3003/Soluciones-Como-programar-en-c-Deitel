/* Programa 3.47 b calculando e */

#include<stdio.h>

int main(void)
{
    /* declarando variables e inicializandolas */
    float contador_f, contador = 1, factorial = 0;
    float n = 0;

    /* obteniendo datos */
    printf("Calculando e (solo con 15)\n");


    /* realizando su factorial*/
    while ( contador < 15){
        printf("Contador %f\n", contador);
        factorial = contador;
        /* calculando el factorial de un numero */
        contador_f = factorial - 1;
            while (contador_f > 0){
                factorial *= contador_f;
            contador_f--;
            }
        printf("factorial %f\n", factorial);

        /* e */
        n += (1 / factorial);
        printf("e %f\n", n);
        contador++;
    }
    n++;

    /* imprimiendo el resultado */
    printf("E es  %f\n", n);

    return 0;
}
/* e = 1 + 1/1! + 1/2! + 1/3! + ...
    el numero de abajo va en aumento, debo hacer que
    dentro de un while alla otro while que haga el factorial cada vez que es llamado
    utilizare a el contador para que vaya aumentado el factorial

    SOLO SE PUEDEN DIVIRDIR ENTRE LOS MISMOS TIPOS DE DATOS
    INT / FLOAT ESTA *** PROHIBIDO *** no funciona!!!!

    */