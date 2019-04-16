/* Programa 321 "desarrolle un programa que determine ..."*/
#include<stdio.h>

int main(void)
{
    /* Declaramos e inicializamos variables*/
    int horas_trabajadas = 0;
    float pago, salario = 0;

    /* Imprimir en pantalla y pedir por horas trabajadas y guardar el resultado*/
    printf("Introduzca el No. de horas laboradas (-1  para terminar programa): ");
    scanf("%d", &horas_trabajadas );

    /* Iniciar while*/
    while (horas_trabajadas != -1){
        printf("Introduzca el pago por hora del empleado: ");
        scanf("%f", &pago);
        if (horas_trabajadas < 41){
            salario = pago * horas_trabajadas;
            printf("El salario es: $ %.2f \n\n", salario);
        }
        else {
            salario = (pago * 40) + ( (horas_trabajadas - 40) * (pago * 1.5) );
            printf("El salario es: $ %.2f \n\n", salario);
        }
        /*reiniciando varialbles */
        horas_trabajadas = 0, pago = 0, salario = 0;

        /* Imprimir en pantalla y pedir por las horas trabajas y guardar el resultado*/
        printf("Introduzca el No. de horas laboradas (-1 para terminar programa): ");
        scanf("%d", &horas_trabajadas );

    }
    return 0;

}