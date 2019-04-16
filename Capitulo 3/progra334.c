/* Programa 3.33 Escriba un programa para que lea la medida de...*/
#include<stdio.h>

int main(void)
{
    /* Declarar mis variables */
    int x = 100 ;

    /* Comenzando while */
    while ( x < 0 || x > 21){       // necesito lograr que while sea falso para proseguir con el programa //
        /* Pidiendo al usuario que introduzca un valor */
        printf("Introducir el tamano del cuadrado: ");
        scanf("%d", &x);
    }

    /* aqui x es por seguridad mayor que 0 y menor que 21 */

    /* y contador de las veces que se construye en fila, ori contador para no olvidar el tamano del cuadro*/
    int  tamano = x, y = 0, espacios = tamano - 2;

    while ( x > 0){
        /* imprimiendo primer segmento de "*" Debe imprimirlo una sola vez */
        if (x == tamano){
            while( y < tamano){
                printf("*");
                ++y;
            }
        y = 0;
        --x;
        printf("\n");
        }

        /* Imprimiendo el lado izq */
        if ( x > 1 && x < tamano){
            printf("*");

        /* Imprimiendo el centro */
        while ( y < espacios ){
            printf(" ");
            ++y;
        }
        y = 0;

        /* Imprimiendo el lado der */

            printf("*\n");
        }

    /* imprimiendo segmento de "*" abajo Debe imprimirlo una sola vez */
    if ( x == 1){
            while( y < tamano){
                printf("*");
                ++y;
            }
            printf("\n");
        }

    /* Acomodando variables */
    y = 0;
    --x;
    }



    return 0;
}

/*
    Utilisando Falso para poder avanzar
    aqui estoy utilizando una declaracion que tiene que ser falsa para poder avanzar
    es decir si hago que while funcione asi x > 0 y x < 21 mientras el usuario inserte numeros entre 0 - 20 va a ser verdadero por
    lo que while se va a seguir ejecutando cuando buscamos lo CONTRARIO que el programa se detenga cuando introduccimos un numero entre 0 - 20
    para esto tenemos que hacer que el programa arroje falso(que deje de trabajar) cuando haya un numero entre 0 - 20
    por lo que hacemos que si x < 0 y x > 21 es decir si un numero menor que 0 o mayor que 21 sea verdadero el programa siga funcionando
    y cuando un numero entre 0 y 20 el programa se pare y podamos sacar el resultado
    IMPORTANTE!     utilizar or nunca and, porque de esa manera se hace una error de logica no existe un numero que al
                    mismo tiempo sea menor que 0 y mayor que 21 seria un numero menor positivo NO EXISTE!
                    utizar OR sive para decirle a la maquina que el numero que queremos o es mayor que 21 o es menor que 0
*/