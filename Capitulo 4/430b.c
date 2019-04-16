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
        if (calificacion == 'A' || calificacion ==  'a')
            ++cuentaA;

        if (calificacion == 'B' || calificacion == 'b')
            ++cuentaB;

        if (calificacion == 'C' || calificacion == 'c')
            ++cuentaC;

        if (calificacion == 'D' || calificacion == 'd')
            ++cuentaD;

        if (calificacion == 'F' || calificacion == 'f')
            ++cuentaF;

        if (calificacion == '\n' || calificacion == '\t' || calificacion == ' ')
        ;
        if( calificacion != 'A' && calificacion != 'a' && calificacion != 'B' && calificacion != 'b' && calificacion != 'C' && calificacion != 'c' &&
    calificacion != 'D' && calificacion != 'd' && calificacion != 'F' && calificacion != 'f' && calificacion != ' ' && calificacion != '\n'&& calificacion != '\t')
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

/* No se me ocurre que hacer para que if tome proporcion las opciones default
un metodo seria que ponga un else a cada uno de esos valores
este no porque crea un conflito con las demas haciendo que despliegue como 7 veces
el mensaje de error

y otro que ponga un super mega if que sea casi tan largo como todas las opciones
opuestas
aun asi despliga dos veces el mensaje de error maldicion!!!
No se me ocurre nada hasta ahora

if( calificacion != 'A' || calificacion != 'a' || calificacion != 'B' || calificacion != 'b' || calificacion != 'C' || calificacion != 'c' ||
    calificacion != 'D' || calificacion != 'd' || calificacion != 'F' || calificacion != 'f' || calificacion != ' ' || calificacion != '\n'|| calificacion != '\t')
    printf("Introdujo una letra incorrecta\nIntroduzca una nuerva calificacion\n");

    el error fue que le puse que a todos  OR con uno que fuera verdadero todos serian verdadero

if( calificacion != 'A' && calificacion != 'a' && calificacion != 'B' && calificacion != 'b' && calificacion != 'C' && calificacion != 'c' &&
    calificacion != 'D' && calificacion != 'd' && calificacion != 'F' && calificacion != 'f' && calificacion != ' ' && calificacion != '\n'&& calificacion != '\t')
    printf("Introdujo una letra incorrecta\nIntroduzca una nuerva calificacion\n");
*/