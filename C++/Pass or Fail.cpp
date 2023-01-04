#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int grd1, grd2, grd3, grd4, grd5, grd6;
	int numofgrd = 6;
	double avg;

	cout << "Enter your name: ";
	getline(cin, name);

	cout << "Input your 1st grade: ";
	cin >> grd1;

	cout << "Input your 2nd grade: ";
	cin >> grd2;

	cout << "Input your 3rd grade: ";
	cin >> grd3;

	cout << "Input your 4th grade: ";
	cin >> grd4;

	cout << "Input your 5th grade: ";
	cin >> grd5;

	cout << "Input your 6th grade: ";
	cin >> grd6;
	
	avg = (grd1 + grd2 + grd3 + grd4 + grd5 + grd6) / numofgrd;
	
	if(avg >= 75){
		cout << "\nhi " << name << " your average is " << avg << " and happy to tell you that you passed.\n";
	}
	else
		cout << "\nhi " << name << " your average is " << avg << " and sorry to tell you that you failed.\n";
}
