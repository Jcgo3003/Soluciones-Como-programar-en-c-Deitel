/* Programa 3.45 programa para calcular la posibilidad de un triangulo recto */
#include<stdio.h>
#include<math.h>

int main(void)
{
    /* Declarando e inicializando variables */
    int lado_a = 0, lado_b = 0, hipotenusa = 0, comprobacion = 0;

    /* obteniendo datos */
    while ( lado_a == 0 || lado_b == 0 || hipotenusa == 0){
        printf("Introduce el lado a(lado mas largo): ");
        scanf("%d", &lado_a);

        printf("Introduce el lado b (lado mas corto): ");
        scanf("%d", &lado_b );

        printf("Introduce la hipotenusa: ");
        scanf("%d", &hipotenusa);
        printf("\n");
    }

    /* Procesando datos*/
    comprobacion = sqrt((lado_a * lado_a) + (lado_b *lado_b));
    if (comprobacion ==  hipotenusa )
        printf("Es un triangulo rectangulo\n");
    else
        printf("No es un triangulo rectangulo\n");


}

/* Para determminar el lado mas largo de un triangulo recto
   la formula es c^2 = a^2 +_ b ^2

*/