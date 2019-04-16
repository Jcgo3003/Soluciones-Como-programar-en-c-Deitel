/* Programa  3.31 */
#include<stdio.h>

int main(void)
{
    int x, y;

    /* Obteniendo valores directamente de la persona*/
    printf("Valor para X:");
    scanf("%d", &x);
    printf("Valor para Y:");
    scanf("%d", &y);


    if ( y == 8 ){
        if ( x == 5 )
            printf( "@@@@@\n" );
    }
    else{
        printf( "#####\n" );
        printf( "$$$$$\n" );
        printf( "&&&&&\n" );
    }



    return 0;
}