/* 4.17 Programa para calcular nuevos limites de creditos para 3 clientes */
#include <stdio.h>

int main(void)
{
    /* Declarando las variables y los clientes */
    int cuenta_a = 4321, limite_c_a = 2000, saldo_a = 123;
    int cuenta_b = 4323, limite_c_b = 5000, saldo_b = 1203;
    int cuenta_c = 4493, limite_c_c = 10000, saldo_c = 4321;
    int bla;

    /* desplegando el switch */
    while( ( bla = getchar()) != EOF){
        switch( bla){
            case('A'):
            case('a'):
                printf("Cuenta cliente a \n");
                printf("%5s%5s%5s%5s\n", "# de Cuenta", "Limite de credito", "Nuevo limite de credito", "saldo actual");
                printf("%7d%5d$%5d$%5d$\n", cuenta_a, limite_c_a, limite_c_a / 2, saldo_a);
                break;
            case('B'):
            case('b'):
                printf("Cuenta cliente b \n");
                printf("%5s%5s%5s%5s\n", "# de Cuenta", "Limite de credito", "Nuevo limite de credito", "saldo actual");
                printf("%7d%5d$%5d$%5d$\n", cuenta_b, limite_c_b, limite_c_b / 2, saldo_b);
                break;
            case('C'):
            case('c'):
            printf("Cuenta cliente c \n");
                printf("%5s%5s%5s%5s\n", "# de Cuenta", "Limite de credito", "Nuevo limite de credito", "saldo actual");
                printf("%7d%5d$%5d$%5d$\n", cuenta_c, limite_c_c, limite_c_c / 2, saldo_c);
                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                printf("Letra de cliente inexistente\n");
                break;

        }
    }

    return 0;
}
/* para desplegar la informacion se utilisara un switch
   si a presionado desplegar informacion del usurio guardada en una variable para
   cada usuario */