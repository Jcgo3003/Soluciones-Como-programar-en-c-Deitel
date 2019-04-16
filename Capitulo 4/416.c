/* 4.16 Programa para imprimir patrones */
#include<stdio.h>

int main(void)
{
    /* Declarando variables y inicilizandolas */
    int cf_a = 1, cf_s_a = 0, cf_b = 10, cf_s_b = 4;

    /* imprimiendo encabezado */
    printf("%7s%12s%14s%12s\n", "A", "B", "C", "D");


    /* Iniciando for */
    for(int i = 1; i <= 10; i++){

        /* Imprimiendo a 'A' */
        for(int a = 0; a < cf_a; a++)
            printf("*");

        /* Imprimiendo los espacios entre 'A' */
        for(int a_s = 12; a_s > cf_s_a ; a_s--)
            printf(" ");

        /* Imprimiendo 'B' */
        for(int b = 0; b < cf_b; b++)
            printf("*");

        /* Imprimiendo espacios entre b */
        for(int b_s = 1; b_s < cf_s_b; b_s++)
            printf(" ");

        /* Imprimiendo c que es copia de b */
        for(int b = 0; b < cf_b; b++)
            printf("*");

        /* Espacios entre c que son copia de los espacios entre a */
        for(int a_s = 12; a_s > cf_s_a ; a_s--)
            printf(" ");

        /* imprimiendo d que es copia de a */
        for(int a = 0; a < cf_a; a++)
            printf("*");

        cf_a++;
        cf_s_a++;
        cf_b--;
        cf_s_b += 2;
        printf("\n");
    }

    return 0;
}

/* El patro funciona matematicamente asi
    *  ' '    *  ' '   *  ' '   *
    1 - 15 - 10 - 3 - 10 - 15 - 1
    2 - 14 - 9  - 5 - 9  - 14 - 2
    3 - 13 - 8  - 7 - 8  - 13 - 3

    Para A el numero va aumentado
    para espacio entre a disminuye
    para b el numero disminuye
    para espacio entre b el numero aumenta de 2 en 2

    para c el numero dimisnuye exactamente igual que con b
    para espacio entre c el numero disminuye exactamente al mismo ritmo que espacio entre a
    para d el numero aumenta exactamente igual que en a

    hace un for que haga que los demas for trabajen de esta manera
    Para a cf sera 1 despues 2 despues 3 so on and so fort
    para espacio entre a poner una segunda varible  cf2 15 esta ira diminuyendo cada vez
    para b cf3 esta ira disminuyendo tambien pero comenzara en 10
    para espacio entre b esta sera e_p y comenzara en 5 y aumentara en 2 cada ocasion
    Esta varibles se podran hasta arriva y cada que termine el for todas cambiaran de valor
    cf_a cambia uno a la vez cf_a++, cominza en 0
    cf_s_a resta - 1, comenzando desde 15 asi que seria algo asi como cf_s_a --
    cf_b es una resta - 1, comenzando desde 10
    cf_s_b es una suma de +2, comenzando desde 3

    las que faltan solo son copias de los for en distintos lugares



*/