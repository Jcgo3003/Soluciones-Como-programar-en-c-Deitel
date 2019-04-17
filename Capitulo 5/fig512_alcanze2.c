/* Figura 5.12 fig05_12
    Ejemplo de alcanze */
#include<stdio.h>

/* Funciones */
void usoLocal(void);
void usoStaticLocal(void);
// void usoGlobal(void);

/* Variable global*/
int x = 1;

/* Main */
int main(){
    /* Variable local */
    int x = 5;
    printf("La x local en el alcance externo de main es %d\n", x);

    if (x == 5 ){ /* Comienza nuevo alcance */
        int x = 7;
        printf("La x local en el alcance interno de main es %d\n", x);
    } /* Fin de alcance interno */

    printf("La X local en el alcance interno de main es %d \n", x);

    usoLocal(); /* Llama a la funcion que contiene una x local */
    usoStaticLocal(); /* Llama a la funcion que contiene una x local estatica */
    // usoGlobal(); /* usoGlobal Utiliza una x global */
    usoLocal(); /* UsoLocal reicnicializa la x local automatica */
    usoStaticLocal(); /* static local x retiene su valor previo */
    // usoGlobal(); /* X global tambien retiene su valor */

    printf("\nXlocal en main es %d\n", x);

    return 0;
}/* fin de main */

/* usoLocal reinicializa a la variable local X durante cada llamada */
void usoLocal(void){
    int y = 25;
    printf("\nLa X local en usoLocal es %d despues de entrar a usoLocal\n", y);
    y++;
    printf("La x local en usoLocal es %d antes de salir de usoLocal\n", y);

}/* fin de la funcion usoLocal */

void usoStaticLocal(void){
    /* se inicializa solo la primera vez que se invoca a usoStaticLocal*/
    static int x = 50;
    printf("\nLa X local estatica es %d al entrar a usoStaticLocal\n", x);

    printf("La x local estatica es %d al salir de usoStaticLocal\n", x);

}/* Fin de la funcion usoStaticLocal */

// void usoGlobal (void){
//     printf("\nLa X global es %d al entrar a usoGlobal\n", x);
//     x *= 10;
//     printf("La x global es %d al saliar de usoGlobal\n", x);

// }/* Fin de la funcion usoGlobal */

/* Conclusiones
    Las versiones nuevas de c no permiten que el programa se desarrolle como en el libro
    el compilador arroja error por el alcanze de las variables no permitiendo asi que sea compilado

    fig512_alcanse.c:16:9: error: declaration shadows a variable in the global scope [-Werror,-Wshadow]
    int x = 5;
        ^
    fig512_alcanse.c:11:5: note: previous declaration is here
    int x = 1;
        ^
    fig512_alcanse.c:20:13: error: declaration shadows a local variable [-Werror,-Wshadow]
            int x = 7;
                ^
    fig512_alcanse.c:16:9: note: previous declaration is here
        int x = 5;
            ^
    fig512_alcanse.c:40:9: error: declaration shadows a variable in the global scope [-Werror,-Wshadow]
        int x = 25;
            ^
    fig512_alcanse.c:11:5: note: previous declaration is here
    int x = 1;
        ^
    3 errors generated.
    make: *** [fig512_alcanse] Error 1


    La variable globa es la que esta haciendo que no me permita declarar otra variable con el mismo nombre
    por lo que no puedo declarar otro X mientras 'int x' global exista


    fig512_alcanze2.c:20:13: error: declaration shadows a local variable [-Werror,-Wshadow]
        int x = 7;
            ^
    fig512_alcanze2.c:16:9: note: previous declaration is here
        int x = 5;

    En verdad que no puedo crear varibles con el mismo nombre porque manda este error.

    */