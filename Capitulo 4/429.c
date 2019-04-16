/* Programa 4.29 leyes de Morgan
Utilice las leyes de De Morgan para escribir expresiones equivalentes para cada
una de las siguientes expresiones logicas, y después escriba un programa que muestre que
en cada caso, tanto la expresión original como la nueva expresion son equivalentes.*/
#include<stdio.h>

int main(void)
{
    /* declarando las variables */
    int a, b = 1, g, i, j, x, y;

    /* Obteniendo las variables del usuario */
    printf("Para la expresion !( x < 5 ) && !( y >= 7 )\n");
    printf("Introduzca VALORES para x y y\n");
    scanf("%d%d", &x, &y);
    printf("Resultado %d\n", !( x < 5 ) && !( y >= 7 ) );
    printf("Utilizando un teorema de morgan queda asi\n");
    printf("!( ( x < 5) || (y >= 7) ) \n");
    printf("Modificando la expresion\nResultado es %d\n", !( (x <  5) || ( y >= 7 ) ) );
    printf("--------------------------------------------\n\n");

    printf("Para la expresion !(a == b) || !( g !=5 ) \n");
    printf("Introduzca valores para a y g\n");
    scanf("%d%d", &a, &g);
    printf("Resultado %d\n", !( a == b ) || !( g != 5) );
    printf("! ( ( a == b ) && ( g != 5) ) \n");
    printf("Modificando la expresion\nResultado es %d\n", ! ( ( a == b ) && ( g != 5) ) );
    printf("--------------------------------------------\n\n");

    printf("Para la expresion !( ( x <= 8) && !( y > 4) )\n");
    printf("Introduzca valores para x y y\n");
    scanf("%d%d", &x, &y);
    printf("Resultado %d\n", !( ( x <= 8) && !( y > 4) ) );
    printf(" !( x <= 8 ) || !!( y > 4)  \n");
    printf("Modificando la expresion\nResultado es %d\n", !( x <= 8 ) || !!( y > 4) );
    printf("--------------------------------------------\n");


    printf("Para la expresion !( ( i > 4 ) || ( j <= 6 ) ) \n");
    printf("Introduzca valores para i y j\n");
    scanf("%d%d", &i, &j);
    printf("Resultado %d\n", !( ( i > 4 ) || ( j <= 6 ) ) );
    printf("!( i > 4 ) && !( j <= 6 )\n");
    printf("Modificando la expresion\nResultado es %d\n", !( i > 4 ) && !( j <= 6 ) );
    printf("--------------------------------------------\n");

    return 0;

}
/* expresiones originales
    !(x<5)&&!(y>=7) esta expresion es  !( ) AND !( ) aplicando el teorema es  !( () OR () ) , !() || !()

    !(a==b) || !(g!=5) esta expresion queda como ! ( ( a == b ) AND !( g != 5) )

    ! (  ( x<=8 ) && !( y>4 )  )

    !( ( i > 4 ) || ( j <= 6 ) -- esta expresion asi esta en el libro le falta una parentesis

    */