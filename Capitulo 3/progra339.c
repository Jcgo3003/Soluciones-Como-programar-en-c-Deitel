/* Programa 3.39 Escriba un programa que lea un número entero  decimal y
que determine y despliegue cuántos dígitos del entero son sietes

Creo que quiere que divida los digitos de numero entero en digitos */
#include<stdio.h>
#include<math.h>

int main(void)
{
    /* Declarando varialbles e inicializandolas */
    long long numero = 0, copia_numero = 0;
    int contador_digitos = 0, contador = 0, contador_sietes = 0, digito;

    /* obteniendo el numero entero*/
    printf("Dame un numero entero: ");
    scanf("%lld", &numero);

    copia_numero = numero;

    /* inicializando su un while para obtener cada digito */
    while (copia_numero != 0){
        copia_numero /= 10;
        //printf("%lld", copia_numero)
        contador_digitos++;
    }
    //printf("Este numero tiene %d digitos\n", contador_digitos);

    copia_numero = numero;

    /* separando los digitos del numero entero */
    while(contador < contador_digitos){
        contador++;

        /* obteniendo digitos */
        digito = copia_numero * pow(10, (-1 * (contador_digitos - contador)));
        //printf("digito es %d\n", digito);

        /* averiguando si el digito es 7*/
        if (digito == 7){
            //printf("Aqui hay un siete\n");
            contador_sietes++;
        }

        /* restando ese digito a copia_numero */
        copia_numero -= digito * pow(10, contador_digitos - contador);
        //printf("numero es ahora %lld\n", copia_numero);

        /* agregando 1 a contador */
    }

    printf("En %lld hay %d sietes\n", numero, contador_sietes);
    return 0;

}