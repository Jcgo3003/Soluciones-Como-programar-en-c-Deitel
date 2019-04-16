/* Programa 3.22 "Escriba un programa que desmuestre la diferencia..."*/
#include<stdio.h>

int main(void)
{
    /* Declaro mis variables para demostrar las direncias*/
    int a = 0, b = 0;

    /* Imprimo en pantalla las variables con ++ antes y despues*/
    printf("Esta es la variable a %d\n", a);
    printf("Esta es la variable ++a %d\n", ++a);
    printf("Ahora la misma variable despues de ++ %d\n\n", a);
    printf("Esta es la variable b %d\n", b);
    printf("Esta es la variable b++ %d\n", b++);
    printf("Esta es la variable b despues %d\n", b);

    return 0;

}