/* Programa 4.33 Escriba un programa que imprima una tabla de
todos lo números romanos equivalentes a los números decimales en el rango de 1 a 100*/
#include<stdio.h>

int main(void)
{
    /* Declarando variables */
    char v;

    /* Declarando un for que cuente hasta 100*/
    // for (int contador = 1; contador <= 100; contador++){
    //     /* for para los i */
    //     for( int cont_i = -1; cont_i <= 3; cont_i++){
    //         if ( cont_i = 0 ){
    //             printf("V")
    //         }
    //         else
    //             while( lim <= 4; lim++)
    //                 printf("I")
    //     }
    // }
    for(int otro = 1; otro <= 4; otro++){
        /* Iterando 'V' solo en numeros pares */
        if ( !(otro%2)){
            v = 'V';
        }
        else
            v = ' ';
        /* Iterando x */
        if ( otro > 1){

        }

        /* for por cada 5 unidades*/
        for( int num = -1; num <= 3; num++){
            /* imprimiendo el numero a la izquierda */
            if ( num == -1){
                printf("%c", 'I');
                printf("%c", v);
                printf("\n");
            }
            /* imprimiendo el nuevo digito */
            if ( num == 0 ){
                printf("%c", v);
                printf("\n");
            }
            /* imprimiendo el nuevo digito +  I's */
            else{
                printf("%c", v);
                for (int cont = 0; cont < num; cont++ )
                    printf("%c", 'I');
                printf("\n");
            }
        }

    }
}
/* los numeros romanos funcionan de la siguiente manera                             Debo declarar una variable por cada 'digito'
    I       1   del 1 al 3 solo se usaron I's                                       Una para I, V, X, L y C
    II      2   Excepto por los I todas la siguientes
    III     3   secuencias cada 5 digitos agragan un nuevo 'digito'                 Despues debo crear una sentencia para que cada
    ------------------------------------------                                      que pasen 5 numeros se agregue otro digito
    IV      4   a partir del 4 se utiliza V's
    V       5   primero agraganel nuevo digito a la derecha de el que ya estaba     Primeros los I's de deven imprimir en este orden
    VI      6   despues dejan el digito solo, despues I's cuentan hasta 3           1 I, 0 I, 1 I, 2 I y 3 I cuando I = 0
    VII     7   siempre despues del nuevo digito                                    se comienza a agregar el nuevo digito
    VIII    8
    ------------------------------------------                                      V aparece solo una vez cada 5 unidades, por lo que se puede
    IX      9   a partir del 9 se utiliza X's                                       Utilizar una sentencia de mod para iterarlo solo con num pares
    X       10
    XI      11
    XII     12
    XIII    13
    ------------------------------------------
    XIV     14  de nuevo aqui se utiliza el V's
    XV      15
    XVI     16

    XX      20 a partir del 20 se utiliza doble X
    LX      40 a partir del 40 se utiliza L y se ulitizara hasta el 89
    XC      90 a partir del 90 se utiliza el c y se utilizara hasta el 139

*/