/* Programa 3.47 */

#include<stdio.h>

int main(void)
{
    /* declarando variables e inicializandolas */
    int n, contador = 0;

    /* obteniendo datos */
    printf("Introducir el numero para realizar su factorial: ");
    scanf("%d", &n);

    /* Iniciando ciclo*/
    while ( contador < 0 ){
        printf("Introducir el numero para realizar su factorial: ");
        scanf("%d", &n);
    }

    /* realizando su factorial*/
    contador = n -1;
    while (contador > 0){
        n = n * contador;
        printf("n %d\n", n);
        contador--;
    }

    /* imprimiendo el resultado */
    printf("Su factorial es %d\n", n);

    return 0;
}
/* necesito que a contador se le reste -1 antes de ser multiplicado
    para hacer factorial el numero introducio debe ser restado cada vez es decir
    n = (n-1) * (n -1)
    */