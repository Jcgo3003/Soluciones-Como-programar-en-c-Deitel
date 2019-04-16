/* 4.22 Modificando el programa 4.7 de manera que calcule el promedio de calificaciones del grupo. */
#include<stdio.h>

int main(void)
{
    /* declarando la variables */
    int calificacion, suma, promedio;
    int cuentaA = 0, cuentaB = 0, cuentaC = 0, cuentaD = 0, cuentaF = 0;

    /* imprimiendo instrucciones */
    printf("Introduzca la letra que corresponde a la calificacion\n");
    printf("Introduzca el caracter EOF para finalizar la entrada de datos\n");

    /* iniciando while*/
    while ((calificacion = getchar()) != EOF ){
        switch( calificacion ){
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
                printf("Introdujo una letra incorrecta\n");
                printf("Introduzca una nueva calificacion\n");
                break;
        }
    }

    printf("\nLos totales por calificacion son:\n");
    printf("A: %d\n", cuentaA);
    printf("B: %d\n", cuentaB);
    printf("C: %d\n", cuentaC);
    printf("D: %d\n", cuentaD);
    printf("F: %d\n", cuentaF);
    /* suma del numero de alumnos */
    suma = cuentaA + cuentaB + cuentaC + cuentaD + cuentaF;

    cuentaA *= 10;
    cuentaB *= 9;
    cuentaC *= 8;
    cuentaD *= 7;
    cuentaF *= 6;

    promedio = (cuentaA + cuentaB + cuentaC + cuentaD + cuentaF) / suma;

    printf("El promedio del grupo es %d", promedio );

    return 0;
}

/* como calcular el promedio si aqui no hay calificaciones numericas a lo mas seria como
   sacar la calificacion mas recurrente
    1 sumar todos los numeros
   */