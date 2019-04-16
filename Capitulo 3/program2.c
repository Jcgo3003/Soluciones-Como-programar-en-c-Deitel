/* programa 2 un programa que calculara el producto de 3 enteros */
#include<stdio.h>

int main(void)

{
    int x, y, z, resultado;

    printf("Introducir entero numero 1 \n");
    scanf("%d", &x);
    printf("introducir entero numero 2 \n");
    scanf("%d", &y);
    printf("Introducir entero numero 3 \n");
    scanf("%d", &z);

    resultado =  x * y * z;

    printf("El producto es %d\n", resultado);

    return 0;
}