// Vectores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int numero[5];
	int suma;
	
	for (int i = 0; i <= 5; i++) 
	{
		cout << "Introduce un numero: ";
		cin >> numero[i];
		suma = +numero[1];

	}

	suma = numero[0] + numero[1] + numero[3] + numero[4];
	cout << "La suma es " << suma;
	return 0;

}
