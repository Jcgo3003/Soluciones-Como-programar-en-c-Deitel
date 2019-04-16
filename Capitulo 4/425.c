/* Programa 4.25 imprimiendo conversiones de un numero */
#include<stdio.h>
#include<math.h>

int main(void)
{
    /* Inicializando variables */
    int numero;

    /* imprimiendo tabla */
    printf("%s\t%s\t%s\t%s\t\n", "Dec", "Bin", "Hex", "Oct");
    /* Inicializando un for para desplegar numero del 1-10*/
    for( numero = 0; numero <= 35; numero++){
        /*imprimiendo decimal */
        printf("%3d", numero);

        /* comenzando conversion a binario */
        int temp = 0, bin = 0, cont_bin = 0, num_bin = numero;
        while( num_bin > 0 ){
            /* obteniendo el valor mas a la derecha */
            temp = num_bin %2;

            /* dividiendo el numero entre 2 */
            num_bin /= 2;

            /* guardando el numero en final */
            bin += temp * (pow ( 10 , cont_bin));

            /* agragando +1 a contador */
            cont_bin++;
        }
        printf("%6d\t", bin);

        /* declarando variables para hex */
        int  base16, residuo, num_h = numero, cont_n = 1,cont_h = -1, hex = 0;

        /* segurando que el numero sea mayor que 16 */
            if (num_h >= 16){

                /* obteniendo el numero que mas se acerca a 'numero' */
                while( num_h >= hex ){
                    cont_h++;
                    hex = pow( 16, cont_h);
                }

                /* iniciando las operaciones de conversion */
                while ( num_h >= 16 ){
                    /* La potencia sera igual a 16 ^ (cont_h - 1) */
                    base16 = pow ( 16 , (cont_h - cont_n) );
                    residuo =  num_h / base16;

                    /* imprimiendo los digitos de izquierza a derecha */
                    if ( residuo < 10 )
                        /* imprimiendo # en caso de que sea un numero del 0 - 9*/
                        printf("%d", residuo);
                    else
                        /* Imprimiendo una letra en caso de que sea mayor que 9 */
                        printf("n%c", residuo + 55);

                    /* Multiplicando el numero */
                    temp = residuo * base16;

                    /* restando */
                    num_h -= temp;

                    /* Cont_n sirve para hacer decender la potencia de cont_h*/
                    cont_n++;
                }
                /* imprimiendo el numero final*/
                if ( num_h < 10 )
                        printf("%d", num_h);
                else
                    printf("%c", num_h + 55);
            }
            else if ( num_h < 10 )
                        printf("%d", num_h);
            else
                printf("%c", num_h + 55);

        printf("\t");

        /* declaranado las variables */
        int num_oct = numero, cont_o = -1, oct = 0, base8, res_o = 1000, temp_o;

        if (num_oct > 0){
            /* obteniendo el numero que mas se acerca a 'numero' */
                while( num_oct >= oct ){
                    cont_o++;
                    oct = pow( 8, cont_o);
                }
                /* Ajustando la variable que cuenta las potecias de 8*/
                cont_o -= 1;

                /* iniciando las operaciones de conversion */
                while ( cont_o >= 0  ){
                    if (num_oct == 0){
                        printf("0");
                        cont_o--;
                        continue;
                    }
                    else{
                        /* La potencia sera igual a 8 ^ (cont_o - 1) */
                        base8 = pow ( 8 , cont_o );
                        res_o =  num_oct / base8;

                        /* imprimiendo los digitos de izquierza a derecha */
                        printf("%d", res_o);

                        /* Multiplicando el numero */
                        temp_o = res_o * base8;

                        /* restando */
                        num_oct -= temp_o;

                        /* Cont_n sirve para hacer decender la potencia de cont_o*/
                        cont_o--;
                    }
                }
        }
        else
            printf("0");
        printf("\n");

    }
    return 0;
}
