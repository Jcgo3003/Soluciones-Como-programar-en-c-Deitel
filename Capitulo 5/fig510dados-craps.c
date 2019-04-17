/* Figura 5.10
    El jugador tira dos dados. Cada dado tiene seis caras. Estas caras contienen 1, 2, 3, 4, 5 y 6 puntos.
    Una vez que los dados caen, se calcula la suma de los puntos que se encuentran en las caras que ven hacia arriba.
    Si la su- ma es igual a 7 u 11 en el primer tiro, el jugador gana. Si la suma es 2, 3 o 12 en el primer tiro (llamado “craps”),
    el jugador pierde (es decir, la “casa” gana). Si la suma es 4, 5, 6, 8, 9, o 10 en el primer tiro, entonces la suma se convierte
    en el “punto” del jugador(Se refiere a que devo sacar ese numero en la suma para poder ganar). Para ganar, usted debe continuar tirando los dados hasta que “haga su punto”.
    El jugador pierde si tira un 7 antes de hacer su punto. */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* Constantes de enumeracion que represnetan el estado del juego - Aqui lo declara */
enum Estatus { CONTINUA, GANA, PIERDE };

/* Prototipo de la funcion */
int tiraDados (void);

/*Funcion Main - Principal */
int main(){

    int suma;/* Suma del tiro de datos*/
    int miPunto;/*Punto ganado */

    enum Estatus estatusJuego;/* Puede contener CONTINUA, GANA o PIERDE */

    /* Ramdomiza el generador de numeros aleatoriosmediante la funcion time*/
    srand(time(NULL));

    suma = tiraDados(); /* El primer tiro de los dados - manda a llamar la funcion tiraDados */

    /* Determina el estado del juego basado en la suma de los dados */
    switch ( suma ){
        /* Gana en el primer tiro */
        case 7:
        case 11:
            estatusJuego = GANA;
            break;

        /* Pierde en el primer tiro */
        case 2:
        case 3:
        case 12:
            estatusJuego = PIERDE;
            break;

        /* Recuerda el punto(El numero que debe salir para ganar) - En caso de que ningun de esos numeros saliera esto sucedera*/
        default:
            estatusJuego = CONTINUA;
            miPunto = suma;
            printf("Su punto es %d\n", miPunto);
            break;
    }/* Fin de switch */

    /* Mientras el juego no se complete */
    while (estatusJuego == CONTINUA){
        /* Tira de nuevo los dados*/
        suma = tiraDados();

        /* Determina el estatus del juego */
        if (suma == miPunto){/* Gana por punto */
            estatusJuego = GANA;
        }/* Fin de if */
        else{
            if ( suma == 7 ){/* Pierde al tirar 7*/
                estatusJuego = PIERDE; /*Termina el juego, el jugador pierde*/
            }/* Fin de if */
        }/*Fin de else */

    }/* Fin de while */

    /* Despliega mensaje de triunfo o derrota */
    if (estatusJuego == GANA ){
        printf("El jugador GANA\n");
    }/* Fin de if */
    else{
        printf("El jugador PIERDE\n");
    }/* Fin de else */

    return 0;

}/* Fin de Main */


/* Tiro de dados, calcula la suma y despliega los resultados */
int tiraDados(void){

    /* Variables para esta funcion */
    int dado1;
    int dado2;
    int sumaTemp;

    /* Sumas */
    dado1 = 1 + ( rand() % 6 );
    dado2 = 1 + ( rand() % 6 );
    sumaTemp = dado1 + dado2;

    /* Despliega los resultados de ese tiro */
    printf("El jugador tiro %d + %d = %d\n", dado1, dado2, sumaTemp);

    /* Devuelve la suma */
    return sumaTemp;
}/* Fin la funcion tiraDados*/

/* Notas
    - Una vez que srand fue ajustado en las primeras lineas, funcionara asi para todo el programa,
      No hubo necesidad de que srand fuera ajustado en cada llamada a 'tiraDados'
    - enum - es una constante de enumeracion
    - La funcion tiraDados no toma argumentos, pero eso no quiere decir que no regrese nada por eso
      Es correcto que este escrita como 'int tiraDados(void)', void solo dice que la funcion no tomara
      Argumentos, pero por su puesto que regresa un int, por eso esta declarada como 'int tiraDados(void)'
    - enum, es un conjunto de constantes enteras representadas por medio de identificadores. En ocasiones,
      a las constantes de enumeración se les llama cons- tantes simbólicas; esto es, constantes representad
      s por medio de símbolos. Los valores en una enumeración comienzan en 0 y se incrementan en 1. En la línea
      8, la constante CONTINUA tiene el valor 0. GANA tiene el valor 1 y PIERDE tiene el valor 2. También,
      en un enum, es posible asignar un valor entero a cada identifica- dor (revise el capítulo 13)
      . Los identificadores de una enumeración deben ser únicos, pero los valores pueden estar duplicados..
    - ESTRUCTURA DEL PROGRAMA
      La estructura del programa es muy interesante, va de esta manera
            Declara librerias
            Declara enum y funcion tiraDados
            Declara suma para llamar tiraDados en la funcion y mi punto para guardar el numero que debe salir en la tirada de dados
            Crea una variable Estatus(Es decir una enum que se declaro arriva)
            Pone srand en tiempo para que tenga rand tenga la semilla por medio del tiempo
            hace que la suma sea una llamada a la funcion tiraDados
                Segun el resultado de suma
            crea un switch para definir cada caso de la suma de los dados, define las reglas para ganar, perder o continuar en el primer tiro
                Si segun el switch no ocurre un 'ganar' o 'Perder' la variable estatus esta en 'continuar'
            crea un while para que mientras enum estatusJuego este en estado 'continuar' se siga activando el while
             if El while solo modificara el estado si suma al invocar a tiraDados es igual a miPunto(el numero que salio al principio)
                o en caso de que suma sea igual a 7
            Si se modifica el estatus de estatusJuego while termina
            Si el estatus es ganar imprime ganaste else imprime perdiste

            Funcion tiraDados
            declara las variables para cada dado y la variable para regresar al ser llamada 'sumaTemp'
                llama a rand para cada dado
                Suma los dos rand
                Regresa esa suma
