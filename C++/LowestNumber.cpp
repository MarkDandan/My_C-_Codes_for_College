#include <iostream>
using namespace std;

int main()
{
	int A, B, C, D;
	cout << "Enter a 1st value: ";
	cin >> A;

	cout << "Enter a 2nd value: ";
	cin >> B;

	cout << "Enter a 3rd value: ";
	cin >> C;
	
	cout << "Enter a 4th value: ";
	cin >> D;

	if (A < B && A < C && A < D) {
		cout << endl << A <<" IS THE LOWEST NUMBER\n";
	}
	else if (B < A && B < C && B < D) {
		cout << endl << B << " IS THE LOWEST NUMBER\n";
	}
	else if (C < A && C < B && C < D) {
		cout << endl << C << " IS THE LOWEST NUMBER\n";
	}
	else
		cout << endl << D << " IS THE LOWEST NUMBER\n";
}
