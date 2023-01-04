#include <iostream>
using namespace std;

int main()
{
	int A, B;
	char op;
	double result;

	cout << "Input the 1st value: ";
	cin >> A;

	cout << "Enter the operator to use: ";
	cin >> op;

	cout << "Input the 2nd Value: ";
	cin >> B;

	if (op == '+') {
		result = A + B;
		cout << "\nSum: " << result << endl;
	}
	else if (op == '-') {
		result = A - B;
		cout << "\nDifference: " << result << endl;
	}
	else if (op == '*') {
		result = A * B;
		cout << "\nProduct: " << result << endl;
	}
	else if (op == '/') {
		result = (double(A) / B);
		cout << "\nQuotient: " << result << endl;
	}
	else
		cout << "\nInvalid operator\n";
}

