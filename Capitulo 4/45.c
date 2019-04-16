#include<stdio.h>

int main(void)
{
    /* Definiedo valores */
    int valor;

    /* Obteniendo valores */
    printf("Introduse un valor para 'valor'");
    scanf("%d", &valor);

    /* switch */
    switch (valor % 2){
        case 0:
            printf("Entero par\n");
            break;
        case 1:
            printf("Entero impar\n");
            break;
    }
}