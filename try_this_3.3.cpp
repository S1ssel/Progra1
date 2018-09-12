#include <iostream>
#include <string>

using namespace std;

int main() {

	string previous = " ";
	string current;
	int repeated{ 0 };
	cout << "Type something to see the repeated words" << endl;
	cin >> current;
	while (cin>>current) {
		
		if (previous == current) {
			cout << "repeated word: " << current << endl;
			repeated++;

		}
		previous = current;
	}

	cout << "Press Enter key to continue..." << endl;
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}