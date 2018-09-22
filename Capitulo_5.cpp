#include "Includes.h"

/*
int main()
{
	//Todos estos son errores de sintaxis comunes, que no te das cuenta cuando estas cansado... Como hoy.
	int s1 = area(7; 
	int s2 = area(7) 
	Int s3 = area(7); 
	int s4 = area('7); 

	int x0 = arena(7); // No esta declarada la función
	int x1 = area(7); // Falta la cantidad deseada
	int x2 = area("seven", 2); // Son enteros, no strings

	int x4 = area(10, –7);       // Valores negativos
	int x5 = area(10.7, 9.3);   // Esta dando flotantes en vez de enteros
	char x6 = area(100, 9999); // Se le asigna caracter a un valor
*/

//Ejercicio 2
/*
int main ()
{
	double kalvin = 0.0;
	cout << "Ingrese los grados Celcius que quiera convertir a Kalvin\n";
	cin >> kalvin;
	kalvin = kalvin + 273.15;
	cout << kalvin << " Kalvin\n";
	keep_window_open();
}
*/

// Ejercicio 5

int main() 
{
	double C = 0.0;
	int x = 0;
	cout << "Ingrese 1 si quiere convertir de Faherenheit a Celsius\n";
	cout << "Ingrese 2 si quiere convertir de Celsius a Fahrenheit\n";
	cin >> x;
	switch (x)
	{
	case 1:
	{
		cout << "Ingrese los grados faherenheit para convertir a celcius\n";
		cin >> C;
		C = C - 32;
		cout << C << " Grados Celsius\n";
		keep_window_open();
		break;
	}

	case 2:
	{
		cout << "Ingresa los grados celcius que quieras convertir a Faherenheit\n";
		cin >> C;
		C = C + 32;
		cout << C << " Grados Fahrenheit\n";
		keep_window_open();
		break;
	}
	}
}


