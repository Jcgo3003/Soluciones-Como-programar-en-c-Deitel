/* Programa 4.27 Encuentre todos los Triples Pitagoricos para lado1, lado2 y la hipotenusa que no sean mayores que 500*/
#include<stdio.h>
#include<math.h>

int main(void)
{
    /* declarando variables */
    int c, hip, poss = 0;

    /* iniciando for para cateto corto*/
    for(int i = 0; i < 10000; i++ ){
        /* iniciando for par catero largo*/
        for(int j = 0; j < 10000; j++){
            /*obteniendo el hipotenusa */
            c  = ( pow(i , 2) + pow (j , 2) );
            hip = sqrt(c);
            /* evaluando que la raiz cuadrada sea menor que 500 */
            if (hip <= 500)
                poss += 1;
        }
    }
    /* Imprimiendo resultados */
    printf("Las posibilidades son %d\n", poss);

    return 0;
}

/* la formula para obtener la hipotenusa es a² + b² = c².
    tengo que hacer un programa que encuentre todas la convinaciones para
    obtener una hipotenuza menor que 500,

    es decir hace que el el programa directamete revise a con una variable
    ejem a = 1, b = i, que i vaya iterando hasta que un resultado sea mayor que 500 una vez
    que llegue a 500 que sume a 'a' 1 y vaya iterando nuevamente b

    Hare que programa encuentre hasta hipotenuza = 500;
    Tengo que Utilizar un triple for anidado que intente todas las posibilidades.

    for(int i = 0; i < 5; i++ ){
            printf("i%d",i);
            for(int j = 0; j < 5; j++){
                printf(" j%d ", j);
                for(int k = 0; k < 5; k++){
                    printf("k%d", k);
                }
            }

    no entiendo porque un triple for anidado, creo que con un for doble seria mas que suficiente
    i0 j0 k0k1k2k3k4 j1 k0k1k2k3k4 j2 k0k1k2k3k4 j3 k0k1k2k3k4 j4 k0k1k2k3k4
    i1 j0 k0k1k2k3k4 j1 k0k1k2k3k4 j2 k0k1k2k3k4 j3 k0k1k2k3k4 j4 k0k1k2k3k4
    i2 j0 k0k1k2k3k4 j1 k0k1k2k3k4 j2 k0k1k2k3k4 j3 k0k1k2k3k4 j4 k0k1k2k3k4
    i3 j0 k0k1k2k3k4 j1 k0k1k2k3k4 j2 k0k1k2k3k4 j3 k0k1k2k3k4 j4 k0k1k2k3k4
    i4 j0 k0k1k2k3k4 j1 k0k1k2k3k4 j2 k0k1k2k3k4 j3 k0k1k2k3k4 j4 k0k1k2k3k4
    esto es lo que ocurre con un for triple;
    llamare a i cateto corto, j cateto largo y k hipotenuza
    aqui veo que con cc va modificando cl cada vez, y en  hipotenuza hace 5 operaciones cada vez

    como lo veo seria que if hipotenusa <= 500
        agregar uno al contador de posibilidades
        hipotenusa = a² + b²

        seria entonces como
            a= 1² ... b = 1², b = 2² etc. agregado  if en hipotenusa <= 500

    Esto arroja esto:

    Las posibilidades son 197627
    */