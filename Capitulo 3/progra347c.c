/* Programa 3.47 b calculando e */

#include<stdio.h>
#include<math.h>

int main(void)
{
    /* declarando variables e inicializandolas */
    int contador_f, x;
    float n = 0, contador = 1, factorial = 0;

    /* obteniendo datos, suponiendo que el usurio es quien decide x*/
    printf("Introducir el numero para realizar su e ^ x\nx: ");
    scanf("%d", &x);


    /* realizando su factorial*/
    while ( contador < 100){ /* aqui estoy desarrollando la formula hasta 100*/

        /* calculando el factorial de un numero */
        factorial = contador;
        contador_f = factorial - 1;
            while (contador_f > 0){
                factorial *= contador_f;
            contador_f--;
            }

        /* e */
        n += ( pow (x, contador) / factorial);

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

    No entido bien la formula por imagino que x es una variable que yo dada por el usurio
    y la puedo desarrollar hasta 15 como en este programa o hasta el infinito

    parece que si desarrolle bien la formula, e ^ 3 es 20.o85 segun mi calculadora

    */