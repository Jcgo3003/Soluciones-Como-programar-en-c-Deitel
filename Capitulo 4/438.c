/* Programa 4.38 que hace este programa ?*/
#include<stdio.h>

int main (void)
{
    /*Variables */
    int i, j, k;

    /* intruciones */
    for( i = 1; i <= 5; i++ ){
        for ( j = 1; j <= 3; j++ ) {
            for ( k = 1; k <= 5; k++ )
                printf("%d*", k);
            printf("  %d\n", j);
        }
        printf("%d\n", i);
    }
    return 0;

}