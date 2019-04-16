/* Programa para sacar promedio, producto y max y min*/

#include<stdio.h>

int main(void)
{
    int a, b, c;

    printf("Dame tres numeros\n");
    scanf("%d%d%d", &a, &b, &c);

    printf("La suma es %d\n", a+b+c);
    printf("El promedio es %d\n", (a + b + c) / 3 );
    printf("El producto es %d\n", a*b*c);

    if (a < b && a < c)
    {
        printf("El numero mas pequeno es %d \n", a);
    }
    else if (b < a && b < c)
    {
        printf("El numero mas pequeno es %d \n", b);
    }
    else if (c < b && c < a)
    {
        printf("El numero mas pequeno es %d \n", c);
    }

    if (a > b && a > c)
    {
        printf("El numero mas grande es %d \n", a);
    }
    else if (b > a && b > c)
    {
        printf("El numero mas grande es %d \n", b);
    }
    else if (c > a && c > b)
    {
        printf("El numero mas grande es %d \n", c);
    }
    return 0;

}