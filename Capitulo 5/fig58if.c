/* Figura 5.8
    Tiro de un dado de seis lados 6000 veces */

#include <stdio.h>
#include <stdlib.h>

/* Main */
int main(){

    /* Contadores de los tiros */
    int frecuencia1 = 0;
    int frecuencia2 = 0;
    int frecuencia3 = 0;
    int frecuencia4 = 0;
    int frecuencia5 = 0;
    int frecuencia6 = 0;

    /* Contador de tiros, valores de 1 a 6000*/
    int tiro;

    /* Representa un tiro del dado, valores de 1 a 6 */
    int cara;

    /* For para repetir 6000 veces y resumir los resultados */
    for (tiro = 1; tiro <= 6000; tiro++){
        /* Numero aleatorio del 1 al 6 */
        cara = 1 + rand() % 6;

        /* DEtermina el valor de cara e incrementa el contador apropiado pero con if's*/
        if (cara == 1){
            ++ frecuencia1;
        }
        else if (cara == 2){
            ++ frecuencia2;
        }
        else if (cara == 3){
            ++ frecuencia3;
        }
        else if (cara == 4){
            ++ frecuencia4;
        }
        else if (cara == 5){
            ++ frecuencia5;
        }
        else if (cara == 6){
            ++ frecuencia6;
        }

    }/* Fin de for */

    /* Despliega los resultados en forma tabular */
    printf(" %s%13s\n", "Cara", "Frecuencia");
    printf(" 1%13d\n", frecuencia1);
    printf(" 2%13d\n", frecuencia2);
    printf(" 3%13d\n", frecuencia3);
    printf(" 4%13d\n", frecuencia4);
    printf(" 5%13d\n", frecuencia5);
    printf(" 6%13d\n", frecuencia6);

    return 0;
}/* Fin de Main */

/* Listo el programa corre sin ningun problema aparente y muestra los mismos
   resultados que cuando funciona con switch    conclusion todo esta bien */