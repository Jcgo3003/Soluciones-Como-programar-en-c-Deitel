/* Programa 3.35 para comprobar si un numero de 5 digitos es palindromo */
#include<stdio.h>

int main(void)
{
    /* Declarando las variables */
    int numero = 10000, d1, d2, d3, d4, d5;

    /* Pidiendo el numero de 5 digitos*/
    printf("Introducir un numero de 5 digitos: ");
    scanf("%d", &numero);

    /* Comprobando si el numero introducido tiene 5 digitos */
    while (numero < 9999 || numero > 99999){
        printf("Introducir un numero de 5 digitos:");
        scanf("%d", &numero);
    }

    /* separando el numero en digitos*/
    d1 = numero/10000;
    d2 = (numero % 10000)/1000;
    d3 = (numero % 10000)%1000 /100;
    d4 = ((numero %10000)%1000)%100/10;
    d5 = (((numero %10000)%1000)%100)%10;

    /* Comprobando si es un palindromo*/
    if (d1 == d5 && d2 == d4)
        printf("Es un palindromo\n");
    else
        printf("No es un palindromo\n");

    // printf("%d \n%d \n%d \n%d \n%d \n",d1, d2, d3, d4, d5);
    return 0;
}