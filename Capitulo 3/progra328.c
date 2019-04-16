/* Figura 3.10: fig03_10.c Análisis de los resultados de un examen */
#include <stdio.h>

/* la función main inicia la ejecución del programa */
int main()
{
    /* inicializa las variables en las declaraciones */
    int resultado; /* resultado de un examen */
    int aprobados = 0; /* número de aprobados */
    int reprobados = 0; /* número de reprobados*/
    int estudiante = 1; /* contador de estudiantes */

    /* procesa 10 estudiantes mediante un ciclo controlado por contador */
    while ( estudiante <= 10 ) {               /* indica al usuario que introduzca un valor */
        printf( "Introduzca el resultado ( 1=aprobado,2=reprobado ): " );
        scanf( "%d", &resultado );

        while (resultado != 1 && resultado !=2){
            printf("Numero invalido\n");
            printf( "Introduzca el resultado ( 1=aprobado,2=reprobado ): " );
            scanf( "%d", &resultado );
        }


        /* si el resultado es igual que 1, incrementa aprobados */
        if ( resultado == 1 ) {
            aprobados = aprobados + 1;
        }
        else {                  /* de lo contrario, incrementa reprobados */
            reprobados = reprobados + 1;
        }

        estudiante = estudiante + 1; /* incrementa el contador de estudiante */
    } /* fin de while */

    /* fase de terminación; despliega el número de aprobados */
    printf( "Aprobados %d\n", aprobados );
    printf( "Reprobados %d\n", reprobados );

    /* si aprobaron más de ocho estudiantes, imprime "objetivo alcanzado” */
    if ( aprobados > 8 )
      printf( "Objetivo alcanzado\n" );
}