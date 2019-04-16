/* 4.18 Programa para obtener un numero e imprimirlo en  '*' */
#include<stdio.h>

int main(void)
{
    /* Declarando variables */
    int numero = 0;

   /* construyendo un while para verificar que el numero obtenido este entre 1-30 */
   while( numero < 1 || numero > 30){
    /* imprimiendo en pantalla */
    printf("Introduce un numero\n");
    scanf("%d", &numero);
   }

    /*imprimiendo asteriscos */
    for( int i = 0; i < numero; i++){
        printf("*");
    }
    printf("\n");

    return 0;
}

/* olvide que tiene que ser un numero entre 1 y 30

*/