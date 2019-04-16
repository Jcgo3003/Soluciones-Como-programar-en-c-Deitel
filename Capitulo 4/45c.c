#include<stdio.h>

int main(void)
{
    /* Definiendo variables */
     int valorEnt, valorCarac;

    /* Rellenando variables */
    //printf("Introducir valor entero\n");
    scanf("%d", &valorEnt);
    //printf("Introducir un carater\n");
    while( (valorCarac = getchar()) == '\n' && (valorCarac = getchar()) == '\t' && (valorCarac = getchar()) == ' ')
        valorCarac = getchar();

    /* Imprimiendo variables */
    printf("Entero: %d\nCaracter: %c\n", valorEnt, valorCarac);
}

/*  scanf("%d", &valorEnt);  **** si lo dejo de esta manera no me permite introducir el dato para el carcter
    valorCarac = getchar();  **** Se salta directamente a imprimir los datos  Mal!!!
    ahora si le agrago printf entre eso ...
    tampoco me lo permite la funcion getchar() se la salta directamente!!!!
    while( (valorCarac = getchar()) == '\n' && (valorCarac = getchar()) == '\t' && (valorCarac = getchar()) == ' ')
        valorCarac = getchar();
    Solo funciono agregando al final este while la funcion getchar esta muy propensa a recibir datos 'indeseables'
    Un poco complicada de ulitilizar pensado que utilise varias lineas de codigo en comparacion de usa sola

*/