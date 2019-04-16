/*Rescriba el programa de la figura 4.7 y remplace la instrucción switch
con una instrucción if...else anidada; sea cuidadoso al manejar el caso
default. Después, rescriba esta nueva versión reemplazando la instruccio
́n anidada if...else con una serie de instrucciones if; aquí también teng
a cuidado al manejar el caso default (es- to es más difícil que la versio
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
        switch(calificacion) {
            case 'A':
            case 'a':
                ++cuentaA;
                break;

            case 'B':
            case 'b':
                ++cuentaB;
                break;

            case 'C':
            case 'c':
                ++cuentaC;
                break;

            case 'D':
            case 'd':
                ++cuentaD;
                break;

            case 'F':
            case 'f':
                ++cuentaF;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                printf("Introdujo una letra incorrecta. \n");
                printf("Introduzca una nueva calificacion \n");
                break;
        }
    }

    return 0;
}