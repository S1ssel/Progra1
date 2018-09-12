#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string s = "Goodbye, cruel world! ";
	cout << s << endl;

	cout << "Press Enter key to continue..." << endl;
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}