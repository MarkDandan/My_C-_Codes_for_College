#include <iostream>
using namespace std;

int main() {
	string member1, member2, member3, member4, member5;
	int age1, age2, age3, age4, age5;
	int Fage1, Fage2, Fage3, Fage4, Fage5;

	cout << "Enter your name: ";
	cin >> member1;
	cout << "Enter your age: ";
	cin >> age1;
	Fage1 = age1 + 10;

	cout << "Enter your name: ";
	cin >> member2;
	cout << "Enter your age: ";
	cin >> age2;
	Fage2 = age2 + 10;

	cout << "Enter your name: ";
	cin >> member3;
	cout << "Enter your age: ";
	cin >> age3;
	Fage3 = age3 + 10;

	cout << "Enter your name: ";
	cin >> member4;
	cout << "Enter your age: ";
	cin >> age4;
	Fage4 = age4 + 10;

	cout << "Enter your name: ";
	cin >> member5;
	cout << "Enter your age: ";
	cin >> age5;
	Fage5 = age5 + 10;

	cout << "\nHi " << member1 << " In ten years, you will be " << Fage1 << " years old.\n";
	cout << "While " << member2 << " will be " << Fage2 << " years old after 10 years.\n";
	cout << member3 << " will be " << Fage3 << " years old after 10 years.\n";
	cout << member4 << " will be " << Fage4 << " years old after 10 years.\n";
	cout << "and " << member5 << " will be " << Fage5 << " years old after 10 years.\n";
}
