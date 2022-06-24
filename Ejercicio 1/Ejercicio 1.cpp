/*Ejercicio 1: Escribe un programa que lea de la entrada estándar
dos números y muestre en la salida estándar su suma, resta, 
multiplicacióny división.*/

#include <iostream>
using namespace std;

int main()
{
	float n1, n2;
	float suma = 0; //uso float varias veces para suma, resta, multiplicacion y división porque tiene un = y no sé, me parece mas...elegante por asi decirlo xD
	float resta = 0;
	float multiplicacion = 0;
	float division = 0;

	cout << "Introduzca numero 1: \n";
	cin >> n1;
	cout << "Introduzca numero 2: \n";
	cin >> n2;


	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;

	cout << "La suma es: " << suma << endl;
	cout << "La resta es: " << resta << "\n";
	cout << "La multiplicacion es:" << multiplicacion << endl;
	cout << "La division es: " << division << "\n";

	return 0;
}