#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
using namespace std;

void Register();
void Login();
bool IsloggedIn();
void ForgotPass();
void mainmenu();
void helloworld();
void house();
void lownum();
void highnum();
void avecal();
void cal();
void increment();
void decrement();
void logout();
void loading();

int main(){

    int choice;

    cout << "\t\t_________________________________________________" << endl;
    cout << "\t\t|                   Main Page                   |" << endl;
    cout << "\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t|1 :Register                                    |" << endl;
    cout << "\t\t|2 :Login                                       |" << endl;
    cout << "\t\t|3 :Forgot Password                             |" << endl;
    cout << "\t\t|===============================================|" << endl;
    cout << "\n\t\tEnter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        loading();
        Register();
        break;
    case 2:
        loading();
        Login();
        break;
    case 3:
        loading();
        ForgotPass();
        break;
    default:
        loading();
        cout << "\t\t|------------------------------------------------|" << endl;
        cout << "\t\t|         You enter an invalid choice!           |" << endl;
        cout << "\t\t|------------------------------------------------|" << endl;
        return 0;
    } 
}

void Register() {
    string username, password;

    cout << "\t\t|----------------------------------------------|" << endl;
    cout << "\t\t|                   Register                   |" << endl;
    cout << "\t\t|----------------------------------------------|" << endl;

    cout << "\n\t\tEnter Username: ";
    cin >> username;

    cout << "\n\t\tEnter Password: ";
    cin >> password;

    ifstream infile(username + ".txt");
    if (infile) {
        loading();
        cout << "\t\t|------------------------------------------------|" << endl;
        cout << "\t\t|             username already exist             |" << endl;
        cout << "\t\t|------------------------------------------------|" << endl;
        system("pause");
        loading();
        main();
    }
    
    ofstream file;
    file.open(username + ".txt");
    file << username << endl << password;
    file.close();
    
    loading();
    cout << "\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t|            Successfully Registered            |" << endl;
    cout << "\t\t|-----------------------------------------------|" << endl;
    system("pause");
    loading();
    main();
}

void Login() {
    bool status = IsloggedIn();

    if (!status) {
        loading();
        cout << "\t\t|-----------------------------------------------|" << endl;
        cout << "\t\t|         Invalid Username or Password!         |" << endl;
        cout << "\t\t|-----------------------------------------------|" << endl;
        system("pause");
        loading();    
        main();
    }
    else {
        loading();
        mainmenu();
    }
}

bool IsloggedIn() {
    string username, password, un, pw;

    cout << "\t\t|---------------------------------------------|" << endl;
    cout << "\t\t|                    Login                    |" << endl;
    cout << "\t\t|---------------------------------------------|" << endl;

    cout << "\n\t\tEnter Username: ";
    cin >> username;

    cout << "\n\t\tEnter Password: ";
    cin >> password;

    ifstream read(username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password) {
        return true;
    } else {
        return false;
    }
}

void ForgotPass() {
    string username, password;

    cout << "\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t|                 Forgot Password               |" << endl;
    cout << "\t\t|-----------------------------------------------|" << endl;

    cout << "\n\t\tEnter username :";
    cin >> username;

    cout << "\n\t\tEnter your new password: ";
    cin >> password;

    ifstream infile(username + ".txt");
    if (!(infile)) {
        loading();
        cout << "\t\t|------------------------------------------------|" << endl;
        cout << "\t\t|            Username does not exist!            |" << endl;
        cout << "\t\t|------------------------------------------------|" << endl;
        system("pause");
        loading();
        main();
    }

    ofstream file;
    file.open(username + ".txt");
    file << username << endl << password;
    file.close();

    loading();
    cout << "\t\t|------------------------------------------------|" << endl;
    cout << "\t\t|        Successfully Change the Password        |" << endl;
    cout << "\t\t|------------------------------------------------|" << endl;
    system("pause");
    loading();
    main();
}

void mainmenu() {
    int choice;
    cout << "\t\t__________________________________________________" << endl;
    cout << "\t\t|               Activities Archive               |" << endl;
    cout << "\t\t|------------------------------------------------|" << endl;
    cout << "\t\t|1. Display Hello World                          |" << endl;
    cout << "\t\t|2. Display House                                |" << endl;
    cout << "\t\t|3. Lower Number Identifier                      |" << endl;
    cout << "\t\t|4. Higher Number Identifier                     |" << endl;
    cout << "\t\t|5. Average Calculator with equivalent grade     |" << endl;
    cout << "\t\t|6. Calculator                                   |" << endl;
    cout << "\t\t|7. Increment looping                            |" << endl;
    cout << "\t\t|8. Decrement looping                            |" << endl;
    cout << "\t\t|9. Logout                                       |" << endl;
    cout << "\t\t|================================================|" << endl;

    cout << "\n\t\tEnter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        loading();
        helloworld();
        break;
    case 2:
        loading();
        house();
        break;
    case 3:
        loading(); 
        lownum();
        break;
    case 4:
        loading(); 
        highnum();
        break;
    case 5:
        loading(); 
        avecal();
        break;
    case 6:
        loading(); 
        cal();
        break;
    case 7:
        loading(); 
        increment();
        break;
    case 8:
        loading(); 
        decrement();
        break;
    case 9: 
        logout();
        break;
    default:
        loading(); 
        cout << "\t\t|------------------------------------------------|" << endl;
        cout << "\t\t|         You enter an invalid choice!           |" << endl;
        cout << "\t\t|------------------------------------------------|" << endl;
        system("pause");
        mainmenu();
    }
}


void helloworld() {
    cout << "\t\t|------------------------------------------------|" << endl;
    cout << "\t\t|                  Hello World!                  |" << endl;
    cout << "\t\t|------------------------------------------------|" << endl;
    system("pause");
   
}

void house() {
    cout << "\t\t|-----------------------------------|" << endl;
    cout << "\t\t|        ________________           |" << endl;
    cout << "\t\t|       /\\***************\\          |" << endl;
    cout << "\t\t|      //*\\***************\\         |" << endl;
    cout << "\t\t|     //***\\***************\\        |" << endl;
    cout << "\t\t|    //*****\\***************\\       |" << endl;
    cout << "\t\t|   //*******\\***************\\      |" << endl;
    cout << "\t\t|  //*********\\***************\\     |" << endl;
    cout << "\t\t| //-----------\\---------------\\    |" << endl;
    cout << "\t\t|  |           |    _______    |    |" << endl;
    cout << "\t\t|  |   _____   |   |\\ _____\\   |    |" << endl;
    cout << "\t\t|  |   |   |   |   | \\______\\  |    |" << endl;
    cout << "\t\t|  |   |  o|   |   |________|  |    |" << endl;
    cout << "\t\t|  |___|___|___|_______________|    |" << endl;
    cout << "\t\t| /=============\\===============\\   |" << endl;
    cout << "\t\t|-----------------------------------|" << endl;
}

void lownum() {

    cout << "\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t|            Find the Lowest Number             |" << endl;
    cout << "\t\t|-----------------------------------------------|" << endl;
    
    int A, B, C, D;
    cout << "Enter a 1st number: ";
    cin >> A;

    cout << "Enter a 2nd number: ";
    cin >> B;

    cout << "Enter a 3rd number: ";
    cin >> C;

    cout << "Enter a 4th number: ";
    cin >> D;

    if (A < B && A < C && A < D) {
        cout << endl << A << " IS THE LOWEST NUMBER\n";
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

void highnum() {
    cout << "\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t|            Find the Lowest Number             |" << endl;
    cout << "\t\t|-----------------------------------------------|" << endl;

    int A, B, C, D;
    cout << "Enter a 1st number: ";
    cin >> A;

    cout << "Enter a 2nd number: ";
    cin >> B;

    cout << "Enter a 3rd number: ";
    cin >> C;

    cout << "Enter a 4th number: ";
    cin >> D;

    if (A > B && A > C && A > D) {
        cout << endl << A << " IS THE HIGHEST NUMBER\n";
    }
    else if (B > A && B > C && B > D) {
        cout << endl << B << " IS THE HIGHEST NUMBER\n";
    }
    else if (C > A && C > B && C > D) {
        cout << endl << C << " IS THE HIGHEST NUMBER\n";
    }
    else
        cout << endl << D << " IS THE HIGHEST NUMBER\n";
}

void avecal() {
    cout << "\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t|              Average Calculator               |" << endl;
    cout << "\t\t|-----------------------------------------------|" << endl;

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

void cal() {
    cout << "\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t|                  Calculator                   |" << endl;
    cout << "\t\t|-----------------------------------------------|" << endl;

    double num1, num2;
    char op;
    double result;

    cout << "Input the 1st value: ";
    cin >> num1;

    cout << "Enter the operator to use: ";
    cin >> op;

    cout << "Input the 2nd Value: ";
    cin >> num2;

    if (op == '+') {
        result = num1 + num2;
        cout << "\nSum: " << result << endl;
    }
    else if (op == '-') {
        result = num1 - num2;
        cout << "\nDifference: " << result << endl;
    }
    else if (op == '*') {
        result = num1 * num2;
        cout << "\nProduct: " << result << endl;
    }
    else if (op == '/') {
        result = num1 / num2;
        cout << "\nQuotient: " << result << endl;
    }
    else
        cout << "\nInvalid operator\n";
}

void increment() {
    cout << "\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t|              Increment a Number               |" << endl;
    cout << "\t\t|-----------------------------------------------|" << endl;

    int num;

    cout << "Enter a number: ";
    cin >> num;
    
    for (int i = 0; i <= num; i++) {
        cout << i << endl;
    }
}
void decrement() {
    cout << "\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t|              Decrement a Number               |" << endl;
    cout << "\t\t|-----------------------------------------------|" << endl;

    int num;

    cout << "Enter a number: ";
    cin >> num;
    while (num >= 0){
        cout << num << endl;
        num--;
    }
}
void logout() {
    system("cls");
    cout << "\t\t|--------------------------------------------|" << endl;
    cout << "\t\t|                Logging out                 |" << endl;
    cout << "\t\t|--------------------------------------------|" << endl;
    Sleep(1000);
    loading();
    main();
}

void loading() {
    system("cls");
    cout << "\n\n\n\t\t\t\t- Presented by Group 3 -\n\n";
    cout << "\n\n\n\t\t\t\tPlease wait while loading\n\n";
    char a = 177, b = 219;
    cout << "\t\t\t\t";
    for (int i = 0; i <= 24; i++) {
        cout << a;
    }
    cout << "\r";
    cout << "\t\t\t\t";
    for (int i = 0; i <= 23; i++)
    {
        Sleep(25);
        cout << b;
    }
    system("cls");
}
