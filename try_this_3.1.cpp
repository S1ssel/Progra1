#include <iostream>

using namespace std;

int main() {

	
	cout << "Please enter your age " << endl;
	double age = 0;
	cin >> age;

	age = age * 12;
	
	cout << "Your age in months is: " << age << " " << endl;

	cout << "Press enter key to continue...";
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}