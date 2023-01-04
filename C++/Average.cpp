#include <iostream>
using namespace std;

int main() {
    double grd1, grd2, grd3, grd4, avg;
    int noofgrd = 4;
    cout << "Enter your 1st Grade: ";
    cin >> grd1;

    cout << "Enter your 2nd Grade: ";
    cin >> grd2;

    cout << "Enter your 3rd Grade: ";
    cin >> grd3;

    cout << "Enter your 4th Grade: ";
    cin >> grd4;

    avg = (grd1 + grd2 + grd3 + grd4) / noofgrd;

    if (avg >= 98) {
        cout << "\nYour average is " << avg << " and is equal to 1.00\n";
    }
    else if (avg >= 95) {
        cout << "\nYour average is " << avg << " and is equal to 1.25\n";
    }
    else if (avg >= 91) {
        cout << "\nYour average is " << avg << " and is equal to 1.50\n";
    }
    else if (avg >= 88) {
        cout << "\nYour average is " << avg << " and is equal to 1.75\n";
    }
    else if (avg >= 85) {
        cout << "\nYour average is " << avg << " and is equal to 2.00\n";
    }
    else if (avg >= 82) {
        cout << "\nYour average is " << avg << " and is equal to 2.25\n";
    }
    else if (avg >= 79) {
        cout << "\nYour average is " << avg << " and is equal to 2.50\n";
    }
    else if (avg >= 76) {
        cout << "\nYour average is " << avg << " and is equal to 2.75\n";
    }
    else if (avg == 75) {
        cout << "\nYour average is " << avg << " and is equal to 3.00\n";
    }
    else
        cout << "\nYour average is " << avg << " and is equal to 5.00\n";
}
