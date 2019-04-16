/*  Programa 3.38 Escriba un programa que despliegue 100 asteriscos, uno a la vez. Después de cada diez asteriscos,
    el programa de- be desplegar un carácter de nueva línea. [Pista: Cuente de 1 a 100. Utilice el operador módu
    lo para reconocer ca- da vez que el contador alcance un múltiplo de 10.] */
#include<stdio.h>

int main (void)
{
    /* Declarando e inicializando variables */
    int contador = 1, m_diez = 10, diez = 10, mult = 2;

    /* iniciando ciclo */
    while ( contador < 101){
        /* imprimiendo en pantalla */
        printf("* ");
        //printf("%d ", contador);

        /* necesito que cada 10 pare para imprimir un salto de pantalla */
        if (contador == m_diez ){
            printf("\n");
            m_diez = diez * mult;
            mult++;
        }

    contador++;
    }
    return 0;
}