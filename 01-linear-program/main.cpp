#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a;
	cout << "Enter alpha -> ";
	cin >> a;

	double z1 = (1 - 2 * sin(5 * a) * sin(5 * a)) / (1 + sin(2 * a) * (1 + sin(2 * a));
	double z2 = ((1 - tan(a)) / (1 - tan(a));
	cout << "\nz1= " << z1 << "\nz2= " << z2 << endl;

	return 0; //without errors
}