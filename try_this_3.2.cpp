#include <iostream>

using namespace std;

int main() {

	cout << "Please enter an integer value: ";
	int n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nn-1 == " << n - 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nreminder of n == " << n % 2
		<< "\nsquare of root of n == " << sqrt(n)
		<< "\n";
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}