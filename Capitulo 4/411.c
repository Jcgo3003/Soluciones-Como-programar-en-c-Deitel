#include<stdio.h>

int main(void)
{
    /* Declarando e iniciliznado variables */
    int numero, menor, numeros , contador = 0;

    /* imprimiendo en pantalla */
    printf("introducir una serie de numeros para encotrar el menor\n");
    printf("Cuantos numeros vas a introducir? ");
    scanf("%d", &numeros );

    /* Obteniendo el primer numero */
    printf("Cual es el primer numero ");
    scanf("%d", &menor);

    /* buscando el numero menor */
    while(contador < (numeros - 1) ){
        printf("Escribe un numero ");
        scanf("%d", &numero );

        /* encontrando el  menor */
        if ( numero < menor )
            menor = numero;
        /* agregando 1 al contador*/
        contador++;
    }

    printf("El numero menor es %d\n", menor );

    return 0;
}


/* encontrando el  menor
        if ( menor > numero)
            menor = numero;
        agregando 1 al contador
        contador++;
   asi funciono correctamente pero da espacio a errores por lo que lo modifique
*/