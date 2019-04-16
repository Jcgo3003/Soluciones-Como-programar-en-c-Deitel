/* Modifique el programa de la figura 4.6 de manera que sólo utilice
enteros para calcular el interés compuesto. [Pista:
Trate todas las cantidades monetarias como números enteros de centavos/ quiere decir que tomo lo conviera a centavos
Luego, “rompa” el resultado en su parte entera y de centavos mediante el uso de las operaciones de división y de residuo,
respectivamente Inserte un punto. */
#include<stdio.h>
#include<math.h>

int main(void)
{
    /*declarando variables */
    float monto;
    int principal = 100000; /* en centavos 1000 = 100000 */
    float tasa = 0.05;
    int anio;
    float monto_en_cent;

    /* mas progmacion */
    printf("%4s%21s\n", "anio", "monto del deposito");

    /*calcula el nuevo monto para el ano especificado */
    for( anio = 1; anio <= 10; anio++){
        monto = principal * (100 * pow (1.0 + tasa, anio));
        monto_en_cent = monto / 10000 ;
        /* muestra una linea de la tabla */
        printf("%4d%21.2f\n", anio, monto_en_cent);
    }
    return 0;
}
/*  el anio no lo modifico esta bien
    el monto monto no puede ser modificado porque aunque es el contenedor necesita ser double para poder mostrar los datos
    !la tasa es el mayor problema n
    principal es la cantidad de dinero puede quedarse como int */