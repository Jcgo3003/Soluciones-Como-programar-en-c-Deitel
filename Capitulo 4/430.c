/*Rescriba el programa de la figura 4.7 y remplace la instrucción switch
con una instrucción if...else anidada; sea cuidadoso al manejar el caso
default. Después, rescriba esta nueva versión reemplazando la instruccio
́n anidada if...else con una serie de instrucciones if; aquí también teng
a cuidado al manejar el caso default (esto es más difícil que la versio
́n con if...else anidado). Este ejercicio demuestra que switch es conveniente
y que cualquier instrucción switch se puede escribir únicamente con instrucciones
de selección simple  */
#include<stdio.h>

int main(void)
{
    /* Declarando la variables */
    int calificacion;
    int cuentaA = 0;
    int cuentaB = 0;
    int cuentaC = 0;
    int cuentaD = 0;
    int cuentaF = 0;

    /* Imprimiendo en pantalla */
    printf("Introduzca la letra que corresponde a la calificacion. \n");
    printf("Introduzca el caracter EOF para finalizar la entrada de datos.\n");

    /* Iniciando  while */
    while ( (calificacion = getchar()) != EOF){
        if ( calificacion == 'A' || calificacion ==  'a')
            ++cuentaA;
        else if (calificacion == 'B' || calificacion == 'b')
            ++cuentaB;
        else if (calificacion == 'C' || calificacion == 'c')
            ++cuentaC;
        else if (calificacion == 'D' || calificacion == 'd')
            ++cuentaD;
        else if (calificacion == 'F' || calificacion == 'f')
            ++cuentaF;
        else if ( calificacion == '\n' || calificacion == '\t' || calificacion == ' ');
        else
            printf("Introdujo una letra incorrecta\nIntroduzca una nuerva calificacion\n");
    }

    /* Mostrando los datos de salida */
    printf("\nLos totales por calificaciones son: \n");
    printf("A: %d\n", cuentaA);
    printf("B: %d\n", cuentaB);
    printf("C: %d\n", cuentaC);
    printf("D: %d\n", cuentaD);
    printf("F: %d\n", cuentaF);

    return 0;
}