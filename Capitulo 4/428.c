/* Programa para calcular el salario de 4 tipos distintos de empleados */
#include<stdio.h>

int main(void)
{
    /* Declarando la variables para el switch*/
    int codigo, num_sem = 1;

    /* Declarando la variables para las cuentas */
    double sal_ger = 100, sal_hor, horas, ventas, elem, num_elem ;

    /* imprimiendo informacion para el usuario */
    printf("Programa para saber el salario para cada tipo de empleado\n");
    printf("Seleccione el codigo de empleado\n1 - Gerentes\n2 - Empleados por hora\n3 - Empleados por comision\n4 - Empleados por destajo\n");
    printf("Control + c - Terminar programa\n");

    /* Iniciando while para obtener el char */
    while( (codigo = getchar()) != EOF ){
        /*determinado el codigo y las operaciones para cada caso*/\
        switch ( codigo ){
            case '1':
                printf("El salario del generente para la semana %d es de %.2f$\n", num_sem, sal_ger );
                num_sem++;
                break;

            case '2':
                    printf("Salario por horas\nCuanto cobrara por hora ");
                    scanf("%lf", &sal_hor);
                    printf("Cuantas horas han sido trabajadas?");
                    scanf("%lf", &horas);
                        if ( horas <= 40 )
                            printf("El salario es de %.2f$\n", sal_hor * horas );
                        else
                            printf("El salario por total por hora es de %.2f$\n", (40 * sal_hor) + ( (horas - 40) * (1.5 * sal_hor) ) );
                                break;

            case '3': printf("Salario por comision\n");
                        printf("De cuanto han sido las ventas?\n");
                        scanf("%lf", &ventas);
                        printf("El salario sera de %.2f$\n", (ventas * .057) + 250);
                    break;

            case '4': printf("Salario de empleados de destajo\n");
                        printf("Cuanto cobra por elemento? ");
                        scanf("%lf", &elem);
                        printf("Cuantos elementos termino? ");
                        scanf("%lf", &num_elem);
                        printf("El salario del empleado de destajo es de %.2f$\n", elem * num_elem);
                        break;

            case '\n':
            case '\t':
            case ' ':
                        break;

            default: printf("Numero erroneo\nIntrodusca un codigo de empleado\n");
                        break;
        }
    }

    return 0;

}