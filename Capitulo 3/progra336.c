/* Programa 3.36 porgrama para transformar numeros
   Binarios en numeros enteros */
#include<stdio.h>
#include<math.h>

int main(void)
{
    /* Declarando variables*/
    int binario, contador, contador_digitos= 0 , copia_binario, guardar = 0;
    int numero = 0, borrar;

    /* Imprimiendo en pantalla*/
    printf("Introducir numero Binario: ");
    scanf("%d", &binario);

    copia_binario = binario; /* copia binario sera destruido para saber cuantos digitos tengo*/

    /* Contando los digitos*/
    while ( copia_binario != 0){
        copia_binario /= 10;
        contador_digitos++;
    }
    printf("Contador digitos %d\n\n", contador_digitos );

    /* Regresandi a binario a su valor original*/
    copia_binario = binario;


    /* numero de la izquierda */
    numero = copia_binario * pow(10, (-1 * (contador_digitos - 1) ) );
	printf("Numero %d\n", numero);

	guardar += numero * pow(10 , contador_digitos -1);
	printf("Guardar %d\n\n", guardar);


	copia_binario = binario;

	/* while */
	contador = 2;
    while ( contador < contador_digitos + 1){
	    borrar = numero * pow(10, contador - 1);
        printf("borrar %d\n", borrar);

        numero  = (binario * pow( 10,  (-1 * (contador_digitos - contador) ) ) );
	    printf("Numero sin borrar %d\n", numero);


	    numero  = (binario * pow( 10,  (-1 * (contador_digitos - contador) ) ) )  - borrar;
	    printf("Numero %d\n", numero);



	    guardar += numero * pow (10, (contador_digitos ));
	    printf("Guardar %d\n\n", guardar);


    contador++;
    }

    printf("\nGuardar  final %d\n", guardar);

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