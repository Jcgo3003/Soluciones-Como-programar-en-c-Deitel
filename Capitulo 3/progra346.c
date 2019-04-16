/* Programa 3.46 Encriptando */
#include<stdio.h>
#include<math.h>

int main(void)
{
    /* Declarando variables */
    int numero = 0, dig1, dig2, dig3, dig4;

    /* inicializando while*/
    while (numero < 999 || numero > 9999){
        printf("Introducir un numero de 4 digitos: ");
        scanf("%d", &numero);
    }

    /* separando digitos*/
    dig1 = numero * pow(10, -3);
    dig2 = (numero % 1000) / 100;
    dig3 = ((numero % 1000) % 100)/10;
    dig4 = (((numero % 1000) % 100 ) % 10);

    /* aplicando la formula a cada numero*/
    dig1 = ( dig1 + 7) % 10;
    dig2 = ( dig2 + 7) % 10;
    dig3 = ( dig3 + 7) % 10;
    dig4 = ( dig4 + 7) % 10;

    /* desplegando datos*/
    printf(" %d %d %d %d \n", dig3, dig4, dig1, dig2);

}
/*
1 declarar variables
2 obtener dicho numero
3 separar dicho numero en digitos
4 por cada digito utilizar la la formula (digito) + 7) % 10
5 desplegar el digito '
*/