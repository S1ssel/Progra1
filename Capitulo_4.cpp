#include "Includes.h"


//Try this 1 y 2, lo modifique con el switch pero se me olvido guardar el otro xd
/*
int main()
{
	constexpr double Peso_Libra = 0.041;
	constexpr double Peso_Yen = 5.93;
	constexpr double Peso_Corona = 0.34;
	double moneda = 1;
	int a = 0;
	char unit = ' ';

	cout << "Ingrese L si quiere hacer un cambio de Libras a pesos\n";
	cout << "ingrese Y si quiere hacer un cambio de Yen a Pesos\n";
	cout << "ingrese C si quiere hacer un cambio de Corona a Pesos\n";

	cin >> unit;

	switch (unit) {


	case 'L':
	{
		cout << "Ingresa 1 si quieres cambiar de pesos a libras:\nIngresa 2 si quieres cambiar de libras a pesos: ";
		cin >> a;
		if (a == 1)
		{
			cout << "Cuanto quiere cambiar? ";
			cin >> moneda;
			cout << moneda << " Pesos son: " << moneda*Peso_Libra << " En Libras\n";
		}
		if (a == 2)
		{
			cout << "Cuanto quieres cambiar? ";
			cin >> moneda;
			cout << moneda << " Libras son: " << moneda/Peso_Libra << " En Pesos\n";
		}
		keep_window_open();
		break;
		
	}
	case 'Y':
	{
		cout << "Ingresa 1 si quieres cambiar de pesos a yenes:\nIngresa 2 si quieres cambiar de yenes a pesos: ";
		cin >> a;
		if (a == 1)
		{
			cout << "Cuanto quiere cambiar? ";
			cin >> moneda;
			cout << moneda << " Pesos son: " << moneda * Peso_Yen << " En Yenes\n";
		}
		if (a == 2)
		{
			cout << "Cuanto quieres cambiar? ";
			cin >> moneda;
			cout << moneda << " Yenes son: " << moneda / Peso_Yen << " En Pesos\n";
		}
		keep_window_open();
		break;
	}	
	case 'C':
	{
		cout << "Ingresa 1 si quieres cambiar de pesos a Coronas:\nIngresa 2 si quieres cambiar de Coronas a pesos: ";
		cin >> a;
		if (a == 1)
		{
			cout << "Cuanto quiere cambiar? ";
			cin >> moneda;
			cout << moneda << " Pesos son: " << moneda * Peso_Corona << " En Coronas\n";
		}
		if (a == 2)
		{
			cout << "Cuanto quieres cambiar? ";
			cin >> moneda;
			cout << moneda << " Coronas son: " << moneda / Peso_Corona << " En Pesos\n";
		}
		keep_window_open();
		break;
	}
	default:
		cout << "No pusiste el caracter que te dije\n";
		keep_window_open();
		break;
	}
}
*/

//Try this 3 y 4. Este si lo guarde. 

/*
int main()
{
	int i = 0;
	while (i <= 25) {
		cout << char('a' + i) << i << "\n";
		++i;
	}
	keep_window_open();
		
}

int main()
{
	for (int i = 0; i <= 25; i++)
	{
		cout << char('a' + i) << "\t" << i << "\n";
	}
	keep_window_open();
}
*/
int main()
{
double x;
double y;
char operacion;
cout << "Ingrese dos numeros:\n";
cin >> x >> y;
cout << "Ahora ingresa + si quieres suma\nIngresa - si quieres resta\ningresa * si quieres multiplicar\nIngresa / si quieres dividir\n";
cin >> operacion;
switch (operacion)
{
	case '+':
		cout << "La suma de " << x << " y " << y << " es " << x + y << "\n";
		keep_window_open();
		break;

	case '-':
		cout << "La resta de " << x << " y " << y << " es " << x - y << "\n";
		keep_window_open();
		break;

	case '*':
		cout << "La multiplicacion de " << x << " y " << y << " es " << x * y << "\n";
		keep_window_open();
		break;

	case '/':
		cout << "Se dividira" << x << " y " << y << " es " << x / y << "\n";
		keep_window_open();
		break;
}

 }