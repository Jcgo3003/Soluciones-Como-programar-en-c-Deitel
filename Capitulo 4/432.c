/* 4.31 Programa para imprimir un diamante con un numero ajustado por el usuario */
#include<stdio.h>

int main(void)
{
    /* Declarando variables */
    int lim_esp, lim_ast, lineas = 0;

    /* Imprimiendo instruciones al usuario en un while mientras no sea un numero entre 1-19 y ademas non */
    while( (lineas <= 0 || lineas > 20) || !(lineas%2) ){
    printf("Por favor introdusca un numero entre 1 - 19 para imprimir un rombo ");
    scanf("%d", &lineas);
    }

    /* aplicando cambos a las varaibles */
    lim_esp = lineas - 2, lim_ast = 1;

    /* Iniciando for */
    for(int i = 0; i < lineas; i++){
    /* for para imprimir espacios */
        for(int s = 0; s < lim_esp ; s++)
            printf(" ");

        /* for para imprimir asteriscos */
        for (int a = 0; a < lim_ast; a++)
            printf("*");

        /* actualizando los limites de cada variable e imprmiendo "\n" */
        if ( i < (lineas/2)){
            lim_esp--;
            lim_ast += 2;
            printf("\n");
        }
        else{
            lim_esp++;
            lim_ast -= 2;
            printf("\n");
        }

    }

    return 0;
}
/*  Sera el exactamente el mismo programa pero manipulando
    las variables de entrada en el ejemplo principal son 9 lineas
    y para esas nueve lineas hubo esta cofiguracion
    lim_esp = 4, lim_ast = 1 solo hay que modificar estas varialbles en
    teniendo en cuenta que el programa solo aceptara numeros que nones

    Esto funciona asi, el numero non sera el centro del diamante ejem,
    # 1             *
    # 3             *
                   ***
                    *
                    *
    #5             ***
                  *****
                   ***
                    *           etc.
    Esto funciona asi
    # 1 *   esp 0, 1 ast

    # 3 *   esp 1, 1 ast
            esp 0, 3 ast
             imp reflejo
    # 5     esp 3, 1 ast
            esp 1, 3 ast
            esp 0, 5 ast

    # 7     esp 5, 1 ast
            esp 3, 3 ast
            esp 1, 5 ast
            esp 0, 7 ast

    En el ejemplo anterior
    para comenzar al numero de 'lineas' -2 para esp, y llega hasta 'lineas' en ast
    asi exepto en 1, si es uno 'lineas' solo llega al limite 0 no -1.

    LO MALO ES QUE EL FOR ESTA PENSADO PARA IMPRIMIR LINEAS NO CENTROS COMO ES QUE FUNCIONA
    EL ROMBO. MAL!!! si funciona de esa manera 1 ast crea 1 linea, 3 ast crea 3 lineas etc.

    para lineas funciona asi
    1 linea  imp 1 ast
    2 lineas imp 3 ast
    3 lineas imp 5 ast
    4 lineas imp 7 ast
    5 lineas imp 9 ast
    simple hago funcionar el for con nones

    Todo esta correcto hasta que empieza el # 5 ahi hay un espacio de mas que no deberia haber
    1 y 3 estan correctos pero 1 no deveria funcionar y aun asi funciona.

    */