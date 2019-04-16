/* Programa 3.46 Encriptando */
#include<stdio.h>
#include<math.h>

int main(void)
{
    /* Declarando variables */
    int numero = 0, dig1, dig2, dig3, dig4;

    /* inicializando while*/
    // while (numero < 999 || numero > 9999){
    // }
        printf("Introducir un numero de 4 digitos: ");
        scanf("%d", &numero);

    /* separando digitos*/
    dig1 = numero * pow(10, -3);
    dig2 = (numero % 1000) / 100;
    dig3 = ((numero % 1000) % 100)/10;
    dig4 = (((numero % 1000) % 100 ) % 10);



    /* aplicandola tabla de abajo*/
    if (dig1 > -1 && dig1 < 7)
        dig1 += 3;
    else
        dig1 -= 7;

    if (dig2 > -1 && dig2 < 7)
        dig2 += 3;
    else
        dig2 -= 7;

    if (dig3 > -1 && dig3 < 7)
        dig3 += 3;
    else
        dig3 -= 7;

    if (dig4 > -1 && dig4 < 7)
        dig4 += 3;
    else
        dig4 -= 7;


    /* desplegando datos*/
    printf(" %d %d %d %d \n", dig3, dig4, dig1, dig2);

}
/*
1 declarar variables
2 obtener dicho numero
3 separar dicho numero en digitos
Todo igual hasta aqui

4 por cada digito utilizar la la formula (digito) + 7) % 10\

como deshacer modulo 10
es imposible deshacer mod porque mod 10 de 17 es 7 y de 7 tambien 7
pero a mi favor tengo que todos estos numeros despues de la suma solo van de 7 a 16
es decir si el numero original era
#   sum7  mod10
0   7   7
1   8   8
2   9   9
3   10  0
4   11  1
ETC
5 desplegar el digito '
*/