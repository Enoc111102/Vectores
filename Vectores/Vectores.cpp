// Vectores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int numero[5];
	int suma;
	numero[0] = 200;
	numero[1] = 150;
	numero[2] = 100;
	numero[3] = -50;
	numero[4] = 300;
	suma = numero[0] + numero[1] + numero[3] + numero[4];
	cout << "La suma es " << suma;
	return 0;

}
