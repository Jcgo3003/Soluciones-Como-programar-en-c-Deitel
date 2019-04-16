/* 4.15 modificando el programa para calcular interés del 5 por ciento,
6 por ciento, 8 por ciento, 9 por ciento, y 10 por ciento. */
#include<stdio.h>
#include<math.h>

int main(void)
{
    /* Declarando las variables */
    double monto;
    double principal = 1000.0;
    double tasa;
    int anio, i;

    for (i = 6; i<=10; i++){
        if (i == 7)
            continue;
        /* definiendo el valor de la tasa */
        tasa = i * pow(10, -2);

        /* Encabezado */
        printf("%4s%21s%10s%.2f%2s\n", "Anio", "Monto del deposito", "tasa del ", tasa, "%");

        /* calcula el monto del deposito para caca uno de los 10 anion */
        for ( anio = 1; anio <= 10; anio++){

            /*calucla el nuevo monto para el anio especificado */
            monto = principal * pow(1.0 + tasa, anio);

            /* muestra una linea de la tabla */
            printf("%4d%21.2f\n", anio, monto);
        }
    }

    return 0;

}