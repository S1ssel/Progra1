//Los comente todos porque es más sencillo que hacerlo con funciones y para ser sincero no se como xD
//Hasta ahora todos los programas funcionan :)

#include "Includes.h"

#include "Includes.h"

//drill
/*
int main()
{
cout << "Por favor ingrese el nombre de la persona a la que desea escribir:\n";
string primer_nombre;
cin >> primer_nombre;
cout << "Estimado " << primer_nombre << "\n";
cout << "	Espero que muy bien\n";
cout << "Ahora ingrese el nombre de un amigo: ";
string nombre_amigo;
cin >> nombre_amigo;
cout << "Has visto a " << nombre_amigo << " ultimamente?\n";
char sexo = '0';
cout << "Escriba una m si el sexo de su amigo es masculino\n";
cout << "Escriba una f si el sexo de su amigo es femenino\n";
cin >> sexo;

if (sexo == 'm')
cout << "Si lo llegas a ver dile que el me llame\n";
if (sexo == 'f')
cout << "Si la llegas a ver dile que ella me llame\n";
int edad;
cout << "Ingresa la edad de tu amigo: ";
cin >> edad;
cout << "Acabo de escuchar que cumpliste años y ahora tienes " << edad << "\n" ;
if (edad <= 0 || edad > 110)
simple_error("No mames, brother");

if (edad <= 12)
cout << "El siguiente año tendràs " << edad+1 << "\n";

if (edad == 17)
cout << "El siguiente año podràs votar" << "\n";

if (edad >= 70)
cout << "Disfruta tu retiro" << "\n";

cout << "Sinceramente \n\n Mario Ivàn.\n";

keep_window_open();
}
*/

//Ejercicio 2
/*
int main()
{
double kilo = 1.609;
double millas;

cout << "Ingrese las millas para convertirlas a kilometros: ";
cin >> millas;
millas = millas * kilo;

cout << "Hay " << millas << " en kilometros\n" ;

keep_window_open();
}
*/

//Ejercicio 4
/*
int main()
{
int val1;
int val2;
int suma;
int resta;
int multi;
float divi;
cout << "Ingrese dos valores enteros:\n";
cin >> val1;
cin >> val2;
if (val1 > val2)
cout << "El primer valor es màs grande\n";
if (val1 < val2)
cout << "El segundo valor es màs grande\n";
suma = val1 + val2;
cout << "La suma es: " << suma <<"\n";
resta = val1 - val2;
cout << "La resta es: " << resta <<"\n";
multi = val1 * val2;
cout << "La multiplicacion es: " << multi <<"\n";
divi = val1 / val2;
cout << "La divisiòn es: " << divi << "\n";

keep_window_open();
}
*/

//Ejercicio 5
/*
int main()
{
float val1;
float val2;
float suma;
float resta;
float multi;
float divi;
cout << "Ingrese dos valores enteros:\n";
cin >> val1;
cin >> val2;
if (val1 > val2)
cout << "El primer valor es màs grande\n";
if (val1 < val2)
cout << "El segundo valor es màs grande\n";
suma = val1 + val2;
cout << "La suma es: " << suma << "\n";
resta = val1 - val2;
cout << "La resta es: " << resta << "\n";
multi = val1 * val2;
cout << "La multiplicacion es: " << multi << "\n";
divi = val1 / val2;
cout << "La divisiòn es: " << divi << "\n";

keep_window_open();
}
*/


//Ejercicio 6
/*
int main()
{
	int val1;
	int val2;
	int val3;
	cout << "Ingresa 3 valores enteros: ";
	cin >> val1 >> val2 >> val3;
	if (val1 >= val2 && val1 >= val3)
	{
		if (val2 >= val3)
		cout << val3 << ", " << val2 << ", "<< val1 << "\n";
		if (val2 <= val3)
		cout << val2 << ", " << val3 << ", " << val1 << "\n";
	}
	if (val2 >= val1 && val2 >= val3)
	{
		if (val1 >= val3)
			cout << val3 << ", " << val1 << ", " << val2 << "\n";
		if (val1 <= val3)
			cout << val1 << ", " << val3 << ", " << val2 << "\n";
	}
	if (val3 >= val2 && val3 >= val1)
	{
		if (val1 >= val2)
			cout << val2 << ", " << val1 << ", " << val3 << "\n";
		if (val1 <= val2)
			cout << val1 << ", " << val2 << ", " << val3 << "\n";
	}
	if (val1 == val2 && val1 == val3)
		cout << val1 << ", " << val2 << ", " << val3 << "\n";

keep_window_open();
}
*/

//Ejercicio 7
/*
int main()
{
	string Fitz;
	string Hemi;
	string Stein;
	cout << "Ingrese los nombres Fitzgerald, Hemingway, Steinbeck. \n";
	cin >> Fitz >> Hemi >> Stein;
	if (Stein >= Hemi && Stein >= Fitz)
		if (Fitz <= Hemi)
			cout << Fitz << ", " << Hemi << ", " << Stein << "\n";

	keep_window_open();
}
*/

//Ejercicio 8
/*
int main()
{
	int d;
	int c;
	cout << "Ingrese un numero para determinar si es par o non: ";
	cin >> d;
	c = d % 2;
	if (c == 0)
		cout << "El numero " << d << " es par\n";

	else
		cout << "El numero " << d << " es non\n ";
	keep_window_open();
}
*/

//Ejercicio 9
/*
int main()
{
	int x;
	int cero;
	string uno;
	cout << "Presiona 1 si quieres escribir el nombre del numero\n Presiona 2 si quieres poner el numero\n";
	cin >> x;
	if (x == 1)
	{
		cout << "Ingresa el nombre: ";
		cin >> uno;	
			if (uno == "Cero")
				cout << "0\n";
			if (uno == "Uno")
				cout << "1\n";
			if (uno == "Dos")
				cout << "2\n";
			if (uno == "Tres")
				cout << "3\n";
			if (uno == "Cuatro")
				cout << "4\n";
			else
				cout << "Estupida computadora!!";
	}


	if (x == 2)
	{
		cout << "Ingresa el numero: ";
		cin >> cero;
			if (cero == 0)
				cout << "Cero\n";

			if (cero == 1)
				cout << "Uno\n";
			if (cero == 2)
				cout << "Dos\n";
			if (cero == 3)
				cout << "Tres\n";
			if (cero == 4)
				cout << "Cuatro\n";
			else
				cout << "Estupida computadora!!";

	}
	keep_window_open();

}
*/

int main()
{
	string operando;
	double x;
	double y;
	double z;
	cout << "Ingresa el signo de operación que quiera hacer y despues los dos valores: ";
	cin >> operando >> x >> y;
	if (operando == "+")
	{
		z = x + y;
		cout << "La suma de los numeros es: "<< z << "\n";
	}
	if (operando == "-")
	{
		z = x - y;
		cout << "La resta de los numeros es: " << z << "\n";
	}
	if (operando == "*")
	{
		z = x * y;
		cout << "La multiplicacion de los numeros es: " << z << "\n";
	}
	if (operando == "/")
	{
		z = x / y;
		cout << "La division de los numeros es: " << z << "\n";
	}

		keep_window_open();

}