/* Programa 3.36 porgrama para transformar numeros
   Binarios en numeros enteros */
#include<stdio.h>
#include<math.h>

int main(void)
{
    /* Declarando variables*/
    long long binario, copia_binario;
    int contador_digitos = 0 ;
    int contador, numero = 0, doble = 0, total = 0;

    /* Imprimiendo en pantalla*/
    printf("Introducir numero Binario: ");
    scanf("%lld", &binario);

    copia_binario = binario; /* copia binario sera destruido para saber cuantos digitos tengo*/
    printf("Binario %lld \n", copia_binario);

    /* Contando los digitos*/
    while ( copia_binario != 0){
        copia_binario = binario;
        contador_digitos++;

        copia_binario = copia_binario * pow(10, (-1 * contador_digitos));
        printf("contador %lld ", copia_binario);
    }
    printf("\nContador digitos %d\n\n", contador_digitos );
    /* Regresandi a binario a su valor original*/
    copia_binario = binario;


	/* while */
	contador = 0;
    while ( contador < contador_digitos ){
        contador++;

        /* obteniedo el numero de mas a la izquierda */
        numero = binario * pow(10, (-1 * (contador_digitos - contador) ) );
	    printf("Numero %d\n", numero);

        // /* asegurando que el numero sea Binario*/
        // if (numero != 1 && numero != 0){
        //     printf("Numero invalido\n");
        //     break;
        // }


        /* convirtiendo el numero en entero */
        doble = pow( 2, contador_digitos - contador );
        printf("D %d\n", doble);
        total += numero * doble;

        /* restando a binario el numero que obtuve*/
	    binario -= numero * pow (10 , (contador_digitos - contador));
	   // printf("# Bin resta %d\n\n", binario);

	   // /* procesando el ultimo numero*/
	   // if ( contador == contador_digitos - 1){
	   //     printf("Ultimo numero %d\n", binario);
	   //     total += binario * doble;
	   //     printf("D f %d\n", doble);
	   // }


    }

    printf("\nEntero %d\n", total);


}

/* 1 Problema
    Necesito que binario identifique cuantos digitos tiene un numero
    - El problema es mucho mas complicado de lo que parece
      incluye formulas complejas que dudo que el compilador pueda hacer nativamente

    #include <stdio.h>
int main()
{
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
---- este programa cuenta el numero de digitos en un numero

    2 Ya se el tamano del numero binario ahora debo asegurar que es un numero binario
        - serando cada digito
        - Mientras separo si el digito que arroja es diferente de 0 o 1 entonces cancelo el programa

    hacer un while
        utilizando el programa anterior el contador va a ser quien ordene las potencias aunque esto se debe hacer por recurcion



*/