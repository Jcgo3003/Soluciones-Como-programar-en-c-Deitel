/* Fig 5.7
    Escalamiento y cambio de enteros producidos por 1 + rand() % 6 */

#include <stdio.h>
#include <stdlib.h>

/* Main */
int main(){

    /* contador */
    int i;

    /* repetir 20 veces */
    for (i = 1; i <=20; i++ ){

        /* obtiene y despliega un numero aleatoria entre 1 y 6  - El 1 + siver para que solamente
        haya numeros entre el 1 y el 6, si no lo tuviera tambien apareceria el 0 -  en %10d es para agregar un espacio*/
        printf( " %d ",  1 + ( rand() % 6 ) );

        /* si el contador es divisible entre 5, comienza una nueva linea de salida - Todo esto para crear la tabla */
        if ( i % 5 == 0){
            printf("\n");
        }

    }/* Fin de for*/

    return 0;

}/* Fin de Main */

/* Super Interesante
Modifique el for de este programa solamente para generar otros 20 numeros pero
comenzando desde 0, y ...
for (int i = 0; i < 20; i++){
    printf("%d ", i);
}
Es verdad esta es otra opcion para generar otros 20 numeros pero los genera del 0 al 19.
La cosa es que el programa colocaba un '\n' cada que aparecia un multiplo de 5 es decir
if ( i % 5 == 0) {
    printf("/n");
}

cuando i fuera 5, 10, 15 o 20, de esa manera desplegaba una tabla muy bonita y estetica al usuario
Sin complicarse mucho
~/workspace/ $ ./fig57
 I1 2  I2 5  I3 4  I4 2  I5 6
 I6 2  I7 5  I8 1  I9 4  I10 2
 I11 3  I12 2  I13 3  I14 2  I15 6
 I16 5  I17 1  I18 1  I19 5  I20 5
~/workspace/ $ make fig57

PROBLEMA
Al momento que modifique el for para que comenzara con 0 inmediatamente el if se acciono y '\n' fue agregado perdiendo
la estetica completamente!!!!

~/workspace/ $ ./fig57
 I0 2
 I1 5  I2 4  I3 2  I4 6  I5 2
 I6 5  I7 1  I8 4  I9 2  I10 3
 I11 2  I12 3  I13 2  I14 6  I15 5
 I16 1  I17 1  I18 5  I19 5 ~/workspace/ $

Lo arruino todo porque ahora la tabla desplegada tiene un '/n' donde no deberia y le fata otro
justo al final para que no se junte con el siguiente entrada de texto.

CONCLUSION
    A veces sobre todo para el despliegue de datos no es tan mal idea utilizar un for que comienze desde 1
        Al final depende para que proposito necesitas el for y que tipo de numeros se acomodan mejor para tu proyecto
        Si 1 - 20 pueden ser tus 20 numeros, muy bien!!!
        Si 0 - 19 te pueden ser utiles tambien que bien!!!

LECCION !!!!!!!!!!!!!!!
Puedes utlizar un if para agregar y crear una tabla estetica sin tantas complicaciones, solo necesitas
Aqui solo utilizo i para hacer la tabla
1 Un for que comienze en 1
2 Un if que interumpa cada que sea necesario tu for o le agregue algo mas como en este caso
  utilizo un if cada de el i del for es multiplo del 5 para agregar un '\n' y crear una tabla mucho mas estilizada
  y sin sentencias tan complicadas como ya he hecho anteriormente.

RAND
la funcion rand()
funciona asi

    rand() % 4 - '% 4' sera 3 sera el numero maximo que saldra de esta funcion
    Esto ira de un rango de 0 - 3

Como en ejemplo si lo hago de esta manera

    1 + rand() % 6 - Hara que la funcion vaya de 1 a 6


% 5 da el limite, es decir ahi el limite seria 5 - 1, es decir 4

Ejemplos muy interesantes !!!!!!!!!
Para hacer que rand() vaya de un rango muy personalisado se podria hacer de esta manera
3 + rand() % 4  Esta funcion desplegaria numeros del 3 al 6 solamente
10 + rand() % 6 Esta funcion solo iria del 10 al 15
100 + rand() % 21 Esta iria del 100 al 120
*/