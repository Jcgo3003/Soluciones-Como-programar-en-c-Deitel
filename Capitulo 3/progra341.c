/* Programa 3.41 Calculando  Diametro, circunferencia y area de un circulo*/
#include<stdio.h>

int main (void)
{
    /* Definiendo variables e inicializando variables */
    float pi = 3.14159, radio;

    /* Obteniendo datos*/
    printf("Dame el radio de un circulo: ");
    scanf("%f", &radio);

    /* Imprimiendo datos de salida*/
    printf("El diametro es %.2f\n", radio * 2);
    printf("La circunferencia es %.2f\n", (radio * 2) * pi );
    printf("El area es de %.2f \n", (radio*radio)* pi);

    return 0;
}