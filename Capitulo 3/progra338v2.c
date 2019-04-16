/*  Programa 3.38 Escriba un programa que despliegue 100 asteriscos, uno a la vez. Después de cada diez asteriscos,
    el programa de- be desplegar un carácter de nueva línea. [Pista: Cuente de 1 a 100. Utilice el operador módu
    lo para reconocer ca- da vez que el contador alcance un múltiplo de 10.] */
#include<stdio.h>

int main (void)
{
    /* Declarando e inicializando variables */
    int contador = 1;

    /* iniciando ciclo */
    while ( contador < 101){
        /* imprimiendo en pantalla */
        printf("* ");
        //printf("%d ", contador);

        /* Utilizando modulo para imprimir cada 10 */
        if (contador % 10 == 0 ){
            printf("\n");
        }
    contador++;
    }

    return 0;
}
/* este programa utiliza modulo para operar
    cuando cuando i % 10

cuando es multiplo de 10 obtengo 0 como resultado
es decir 10 % 10 = 0
         23 % 10 = 3

/////// si contador comenzara con 0 y terminara en 99 esto es lo que ocurre
*
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * *

*/
