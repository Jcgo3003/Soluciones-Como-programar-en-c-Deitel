/* Programa  3.31 */
#include<stdio.h>

int main(void)
{
    int x = 5, y = 8;

    if ( y == 8 ){
        if ( x == 5 )
            printf( "@@@@@\n" ); // este//
        else
            printf( "#####\n" );

        printf( "$$$$$\n" );    // este //
        printf( "&&&&&\n" );    // este //
    }
    return 0;
}