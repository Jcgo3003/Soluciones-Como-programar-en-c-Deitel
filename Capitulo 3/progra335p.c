#include <stdio.h>

int main(){

	int numEntero;
	int char1, char2, char3, char4, char5;

	/* Ejemplo con el numero 73466, quedando 7 3 4 6 6 */
	printf("Introduzca un entero de cinco digitos: ");
		scanf("%d", &numEntero);


	char1 = numEntero / 10000;
	char2 = (numEntero % 10000) / 1000;
	char3 = ((numEntero % 10000) % 1000) / 100;
	char4 = (((numEntero % 10000) % 1000) % 100) / 10;
	char5 = (((numEntero % 10000) % 1000) % 100) % 10;

	printf("%d \n%d \n%d \n%d \n%d \n", char1, char2, char3, char4, char5);

	// char5 = numEntero *1;
	// char4 = numEntero *0.1;
	// char3 = numEntero *0.01;
	// char2 = numEntero *0.001;
	// char1 = numEntero *0.0001;

	// printf("%f \n%f \n%f \n%f \n%f \n", char1, char2, char3, char4, char5);
	// printf("%f \n", char1);

	return 0;
}
/*  cualquier division que se haga a un Int hace que
	se pierdan los valores decimales sin importar que se depositen en un float (3.000000 4.000000 1.00000)

	ahora si todos son float desde el pricipio no puedo hacer modulo pero los numeros si conservan sus deciamales
	multiplicado cada valor por 0.01, 0.0001 y asi 1.234500 12.345000 123.449997, solo separa los resultados a manera
	numero de digitos por 0.0001 me arroja el valor de mas a la izquierda con 0.001 me arroja los 2 valores de mas a la izquierda
	y asi sucesivamente NO ME SIRVE aunque el siguiente digito puedo restar char1 por 10000 asi NumeroEntero quedaria con cuatro digitos y
	asi hasta terminar pero es POCO eficiente y con un pesimo estilo

	Dejando el programa en su estado original cuando hago la operacion para obterner char2 numEntero % 10000 arroja un
	resuldo como este 2345, los 4 primeros digitos cuando  /1000 me da el digito de mas a la izquierda
	para char3 esto es lo que pasa a 2345 % 1000 elimina el numero de mas la izquierda con /100 elimino los 2 numeros de la derecha

	Conclusion:
	para eliminar numeros a la derecha en un Int se utiliza la division en funcion de cuantos lugares eliminare a la derecha
	se divide en 10000 si se quieren eliminar 4 lugares entre 1000 si se quieren eliminar 3 lugares y asi

	Para eliminar numeros a la izquierda en un Int se utiliza modulo % en funcion de cuantos numeros quieren eliminarse
	eliminar un el primer numero de la izquierda en un numero de 5 digitos utilizo %10000 para eliminar 2 numeros tengo que
	primero eliminar el numero de mas a la izquierda y despues utilizo % 1000 para eliminar el primer digito de un numero de 4 digitos
	y asi sucesivamente

	echar un vistazo a estea version con recursividad

#include <iostream>
#include<cmath>

using namespace std;

void separarNumeros(int numero,int digitos){

   if(digitos==0)return;

   int div = pow(10,digitos-1);

   cout<<numero/div%10<<endl;
   separarNumeros(numero,digitos-1);
}

int main()
{
   //separa el numero segun el numero de digitos
    int numero=73465;
    separarNumeros(numero,5);

    cout<<endl;
    numero=3465;
    separarNumeros(numero,4);

    return 0;
}

Esta MAL este programa es muy malo y puede ser mejorado

fuente: https://foro.elhacker.net/programacion_cc/c_separar_los_digitos_de_un_numero-t446223.0.html

*/