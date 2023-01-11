#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;

void Register();
void Login();
bool IsloggedIn();
void ForgotPass();
void archive();
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

    cout << "\t\t\t_________________________________________________" << endl;
    cout << "\t\t\t|                   Main Page                   |" << endl;
    cout << "\t\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t\t|                                               |" << endl;
    cout << "\t\t\t| 1 :Register                                   |" << endl;
    cout << "\t\t\t| 2 :Login                                      |" << endl;
    cout << "\t\t\t| 3 :Forgot Password                            |" << endl;
    cout << "\t\t\t|                                               |" << endl;
    cout << "\t\t\t|===============================================|" << endl;
    cout << "\n\t\t\tEnter your choice: ";
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
        cout << "\t\t\t|------------------------------------------------|" << endl;
        cout << "\t\t\t|         You enter an invalid choice!           |" << endl;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        return 0;
    } 
}

void Register() {
    string username, password;

    cout << "\t\t\t|----------------------------------------------|" << endl;
    cout << "\t\t\t|                   Register                   |" << endl;
    cout << "\t\t\t|----------------------------------------------|" << endl;

    cout << "\n\t\t\tEnter Username: ";
    cin >> username;

    cout << "\n\t\t\tEnter Password: ";
    cin >> password;

    ifstream infile(username + ".txt");
    if (infile) {
        loading();
        int choice;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        cout << "\t\t\t|             Username Already Exist             |" << endl;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        Sleep(1000);
        cout << "\t\t\t|----------- Do You Want To Try Again? ----------|" << endl;
        cout << "\t\t\t|       Enter 1 if YES and 0 for Main Page       |" << endl;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        cout << "\t\t\tYour Choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            loading();
            Register();
            break;
        case 0:
            loading();
            main();
            break;
        default:
            loading();
            cout << "\t\t\t|------------------------------------------------|" << endl;
            cout << "\t\t\t|         You enter an invalid choice!           |" << endl;
            cout << "\t\t\t|------------------------------------------------|" << endl;
            return;
        }
    }
    
    ofstream file;
    file.open(username + ".txt");
    file << username << endl << password;
    file.close();
    
    loading();
    cout << "\t\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t\t|            Successfully Registered            |" << endl;
    cout << "\t\t\t|-----------------------------------------------|" << endl;
    system("pause");
    loading();
    main();
}

void Login() {
    bool status = IsloggedIn();

    if (!status) {
        loading();
        int choice;
        cout << "\t\t\t|-----------------------------------------------|" << endl;
        cout << "\t\t\t|         Invalid Username or Password!         |" << endl;
        cout << "\t\t\t|-----------------------------------------------|" << endl;
        Sleep(1000);
        cout << "\t\t\t|---------- Do You Want  To Try Again? ---------|" << endl;
        cout << "\t\t\t|       Enter 1 if YES and 0 for Main Page      |" << endl;
        cout << "\t\t\t|-----------------------------------------------|" << endl;
        cout << "\t\t\tYour Choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            loading();
            Login();
            break;
        case 0:
            loading();
            main();
            break;
        default:
            loading();
            cout << "\t\t\t|------------------------------------------------|" << endl;
            cout << "\t\t\t|         You enter an invalid choice!           |" << endl;
            cout << "\t\t\t|------------------------------------------------|" << endl;
            return;
        }
    }
    else {
        loading();
        archive();
    }
}

bool IsloggedIn() {
    string username, password, un, pw;

    cout << "\t\t\t|---------------------------------------------|" << endl;
    cout << "\t\t\t|                    Login                    |" << endl;
    cout << "\t\t\t|---------------------------------------------|" << endl;

    cout << "\n\t\t\tEnter Username: ";
    cin >> username;

    cout << "\n\t\t\tEnter Password: ";
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
    string username, newpassword;

    cout << "\t\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t\t|                 Forgot Password               |" << endl;
    cout << "\t\t\t|-----------------------------------------------|" << endl;

    cout << "\n\t\t\tEnter username :";
    cin >> username;

    cout << "\n\t\t\tEnter your new password: ";
    cin >> newpassword;

    ifstream infile(username + ".txt");
    if (!(infile)) {
        loading();
        int choice;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        cout << "\t\t\t|            Username does not exist!            |" << endl;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        Sleep(1000);
        cout << "\t\t\t|----------- Do You Want To Try Again? ----------|" << endl;
        cout << "\t\t\t|       Enter 1 if YES and 0 for Main Page       |" << endl;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        cout << "\t\t\tYour Choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            loading();
            Register();
            break;
        case 0:
            loading();
            main();
            break;
        default:
            cout << "\t\t\t|------------------------------------------------|" << endl;
            cout << "\t\t\t|         You enter an invalid choice!           |" << endl;
            cout << "\t\t\t|------------------------------------------------|" << endl;
            return;
        }
    }

    ofstream file;
    file.open(username + ".txt");
    file << username << endl << newpassword;
    file.close();

    loading();
    cout << "\t\t\t|------------------------------------------------|" << endl;
    cout << "\t\t\t|        Successfully Change the Password        |" << endl;
    cout << "\t\t\t|------------------------------------------------|" << endl;
    system("pause");
    loading();
    main();
}

void archive() {
    int choice;
    cout << "\t\t\t__________________________________________________" << endl;
    cout << "\t\t\t|               Activities Archive               |" << endl;
    cout << "\t\t\t|------------------------------------------------|" << endl;
    cout << "\t\t\t|1. Display Hello World                          |" << endl;
    cout << "\t\t\t|2. Display House                                |" << endl;
    cout << "\t\t\t|3. Lower Number Identifier                      |" << endl;
    cout << "\t\t\t|4. Higher Number Identifier                     |" << endl;
    cout << "\t\t\t|5. Average Calculator with equivalent grade     |" << endl;
    cout << "\t\t\t|6. Calculator                                   |" << endl;
    cout << "\t\t\t|7. Increment looping                            |" << endl;
    cout << "\t\t\t|8. Decrement looping                            |" << endl;
    cout << "\t\t\t|9. Logout                                       |" << endl;
    cout << "\t\t\t|================================================|" << endl;

    cout << "\n\t\t\tEnter your choice: ";
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
        cout << "\t\t\t|------------------------------------------------|" << endl;
        cout << "\t\t\t|         You enter an invalid choice!           |" << endl;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        system("pause");
        archive();
    }
}


void helloworld() {
    cout << "\t\t\t|------------------------------------------------|" << endl;
    cout << "\t\t\t|                  Hello World!                  |" << endl;
    cout << "\t\t\t|------------------------------------------------|" << endl;

    Sleep(1000);

    int input;
    cout << "\n\t\t\t|------------------------------------------------|";
    cout << "\n\t\t\t| Do you want to return to the Activity Archive? |";
    cout << "\n\t\t\t|       Press 1 if YES and ANY KEY to Exit       |";
    cout << "\n\t\t\t|------------------------------------------------|";
    cout << "\n\t\t\tYour Choice: ";
    cin >> input;
    switch (input) {
    case 1:
        loading();
        archive();
        break;
    default:
        loading();
        cout << "\t\t\t|------------------------------------------------|" << endl;
        cout << "\t\t\t|         This is Presented by Group 3           |" << endl;
        cout << "\t\t\t|                                                |" << endl;
        cout << "\t\t\t|              Mark Daniel Estorba               |" << endl;
        cout << "\t\t\t|                 Janryl Canaway                 |" << endl;
        cout << "\t\t\t|                  Lance Boco                    |" << endl;
        cout << "\t\t\t|             Laurence Lingcopenes               |" << endl;
        cout << "\t\t\t|                 Israel Berina                  |" << endl;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        return;
    }
}

void house() {
    cout << "\t\t\t|-----------------------------------|" << endl;
    cout << "\t\t\t|        ________________           |" << endl;
    cout << "\t\t\t|       /\\***************\\          |" << endl;
    cout << "\t\t\t|      //*\\***************\\         |" << endl;
    cout << "\t\t\t|     //***\\***************\\        |" << endl;
    cout << "\t\t\t|    //*****\\***************\\       |" << endl;
    cout << "\t\t\t|   //*******\\***************\\      |" << endl;
    cout << "\t\t\t|  //*********\\***************\\     |" << endl;
    cout << "\t\t\t| //-----------\\---------------\\    |" << endl;
    cout << "\t\t\t|  |           |    _______    |    |" << endl;
    cout << "\t\t\t|  |   _____   |   |\\ _____\\   |    |" << endl;
    cout << "\t\t\t|  |   |   |   |   | \\______\\  |    |" << endl;
    cout << "\t\t\t|  |   |  o|   |   |________|  |    |" << endl;
    cout << "\t\t\t|  |___|___|___|_______________|    |" << endl;
    cout << "\t\t\t| /=============\\===============\\   |" << endl;
    cout << "\t\t\t|-----------------------------------|" << endl;

    Sleep(1000);

    int input;
    cout << "\n\t\t|------------------------------------------------|";
    cout << "\n\t\t| Do you want to return to the Activity Archive? |";
    cout << "\n\t\t|       Press 1 if YES and ANY KEY to Exit       |";
    cout << "\n\t\t|------------------------------------------------|";
    cout << "\n\t\tYour Choice: ";
    cin >> input;
    switch (input) {
    case 1:
        loading();
        archive();
        break;
    default:
        loading();
        cout << "\t\t\t|------------------------------------------------|" << endl;
        cout << "\t\t\t|         This is Presented by Group 3           |" << endl;
        cout << "\t\t\t|                                                |" << endl;
        cout << "\t\t\t|              Mark Daniel Estorba               |" << endl;
        cout << "\t\t\t|                 Janryl Canaway                 |" << endl;
        cout << "\t\t\t|                  Lance Boco                    |" << endl;
        cout << "\t\t\t|             Laurence Lingcopenes               |" << endl;
        cout << "\t\t\t|                 Israel Berina                  |" << endl;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        return;
    }
}

void lownum() {

    cout << "\t\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t\t|            Find the Lowest Number             |" << endl;
    cout << "\t\t\t|-----------------------------------------------|" << endl;
    
    int A, B, C, D;
    cout << "\n\t\t\tEnter a 1st number: ";
    cin >> A;

    cout << "\t\t\tEnter a 2nd number: ";
    cin >> B;

    cout << "\t\t\tEnter a 3rd number: ";
    cin >> C;

    cout << "\t\t\tEnter a 4th number: ";
    cin >> D;

    cout << "\n\t\t\t";

    if (A <= B && A <= C && A <= D) {
        cout << A << " IS THE LOWEST NUMBER\n";
    }
    else if (B <= A && B <= C && B <= D) {
        cout  << B << " IS THE LOWEST NUMBER\n";
    }
    else if (C <= A && C <= B && C <= D) {
        cout << C << " IS THE LOWEST NUMBER\n";
    }
    else
        cout  << D << " IS THE LOWEST NUMBER\n";

    Sleep(1000);

    int input;
    cout << "\n\t\t\t|------------------------------------------------|";
    cout << "\n\t\t\t| Do you want to return to the Activity Archive? |";
    cout << "\n\t\t\t|       Press 1 if YES and ANY KEY to Exit       |";
    cout << "\n\t\t\t|------------------------------------------------|";
    cout << "\n\t\t\tYour Choice: ";
    cin >> input;
    switch (input) {
    case 1:
        loading();
        archive();
        break;
    default:
        loading();
        cout << "\t\t\t|------------------------------------------------|" << endl;
        cout << "\t\t\t|         This is Presented by Group 3           |" << endl;
        cout << "\t\t\t|                                                |" << endl;
        cout << "\t\t\t|              Mark Daniel Estorba               |" << endl;
        cout << "\t\t\t|                 Janryl Canaway                 |" << endl;
        cout << "\t\t\t|                  Lance Boco                    |" << endl;
        cout << "\t\t\t|             Laurence Lingcopenes               |" << endl;
        cout << "\t\t\t|                 Israel Berina                  |" << endl;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        return;
    }
}

void highnum() {
    cout << "\t\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t\t|            Find the Lowest Number             |" << endl;
    cout << "\t\t\t|-----------------------------------------------|" << endl;

    int A, B, C, D;
    cout << "\n\t\t\tEnter a 1st number: ";
    cin >> A;

    cout << "\t\t\tEnter a 2nd number: ";
    cin >> B;

    cout << "\t\t\tEnter a 3rd number: ";
    cin >> C;

    cout << "\t\t\tEnter a 4th number: ";
    cin >> D;

    cout << "\n\t\t\t";

    if (A >= B && A >= C && A >= D) {
        cout << A << " IS THE HIGHEST NUMBER\n";
    }
    else if (B >= A && B >= C && B >= D) {
        cout << B << " IS THE HIGHEST NUMBER\n";
    }
    else if (C >= A && C >= B && C >= D) {
        cout << C << " IS THE HIGHEST NUMBER\n";
    }
    else
        cout << D << " IS THE HIGHEST NUMBER\n";

    Sleep(1000);

    int input;
    cout << "\n\t\t\t|------------------------------------------------|";
    cout << "\n\t\t\t| Do you want to return to the Activity Archive? |";
    cout << "\n\t\t\t|       Press 1 if YES and ANY KEY to Exit       |";
    cout << "\n\t\t\t|------------------------------------------------|";
    cout << "\n\t\t\tYour Choice: ";
    cin >> input;
    switch (input) {
    case 1:
        loading();
        archive();
        break;
    default:
        loading();
        cout << "\t\t\t|------------------------------------------------|" << endl;
        cout << "\t\t\t|         This is Presented by Group 3           |" << endl;
        cout << "\t\t\t|                                                |" << endl;
        cout << "\t\t\t|              Mark Daniel Estorba               |" << endl;
        cout << "\t\t\t|                 Janryl Canaway                 |" << endl;
        cout << "\t\t\t|                  Lance Boco                    |" << endl;
        cout << "\t\t\t|             Laurence Lingcopenes               |" << endl;
        cout << "\t\t\t|                 Israel Berina                  |" << endl;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        return;
    }
}

void avecal() {
    cout << "\t\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t\t|              Average Calculator               |" << endl;
    cout << "\t\t\t|-----------------------------------------------|" << endl;

    double grd1, grd2, grd3, grd4, avg;
    int noofgrd = 4;
    cout << "\n\t\t\tEnter your 1st Grade: ";
    cin >> grd1;

    cout << "\t\t\tEnter your 2nd Grade: ";
    cin >> grd2;

    cout << "\t\t\tEnter your 3rd Grade: ";
    cin >> grd3;

    cout << "\t\t\tEnter your 4th Grade: ";
    cin >> grd4;

    avg = (grd1 + grd2 + grd3 + grd4) / noofgrd;

    if (avg >= 98) {
        cout << "\n\t\t\tYour average is " << avg << " and is equal to 1.00\n";
    }
    else if (avg >= 95) {
        cout << "\n\t\t\tYour average is " << avg << " and is equal to 1.25\n";
    }
    else if (avg >= 91) {
        cout << "\n\t\t\tYour average is " << avg << " and is equal to 1.50\n";
    }
    else if (avg >= 88) {
        cout << "\n\t\t\tYour average is " << avg << " and is equal to 1.75\n";
    }
    else if (avg >= 85) {
        cout << "\n\t\t\tYour average is " << avg << " and is equal to 2.00\n";
    }
    else if (avg >= 82) {
        cout << "\n\t\t\tYour average is " << avg << " and is equal to 2.25\n";
    }
    else if (avg >= 79) {
        cout << "\n\t\t\tYour average is " << avg << " and is equal to 2.50\n";
    }
    else if (avg >= 76) {
        cout << "\n\t\t\tYour average is " << avg << " and is equal to 2.75\n";
    }
    else if (avg == 75) {
        cout << "\n\t\t\tYour average is " << avg << " and is equal to 3.00\n";
    }
    else
        cout << "\n\t\t\tYour average is " << avg << " and is equal to 5.00\n";

    Sleep(1000);

    int input;
    cout << "\n\t\t\t|------------------------------------------------|";
    cout << "\n\t\t\t| Do you want to return to the Activity Archive? |";
    cout << "\n\t\t\t|       Press 1 if YES and ANY KEY to Exit       |";
    cout << "\n\t\t\t|------------------------------------------------|";
    cout << "\n\t\t\tYour Choice: ";
    cin >> input;
    switch (input) {
    case 1:
        loading();
        archive();
        break;
    default:
        loading();
        cout << "\t\t\t|------------------------------------------------|" << endl;
        cout << "\t\t\t|         This is Presented by Group 3           |" << endl;
        cout << "\t\t\t|                                                |" << endl;
        cout << "\t\t\t|              Mark Daniel Estorba               |" << endl;
        cout << "\t\t\t|                 Janryl Canaway                 |" << endl;
        cout << "\t\t\t|                  Lance Boco                    |" << endl;
        cout << "\t\t\t|             Laurence Lingcopenes               |" << endl;
        cout << "\t\t\t|                 Israel Berina                  |" << endl;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        return;
    }
}

void cal() {
    cout << "\t\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t\t|                  Calculator                   |" << endl;
    cout << "\t\t\t|-----------------------------------------------|" << endl;

    double num1, num2;
    char op;
    double result;

    cout << "\n\t\t\tInput the 1st value: ";
    cin >> num1;

    cout << "\t\t\tEnter the operator to use: ";
    cin >> op;

    cout << "\t\t\tInput the 2nd Value: ";
    cin >> num2;

    if (op == '+') {
        result = num1 + num2;
        cout << "\n\t\t\tSum: " << result << endl;
    }
    else if (op == '-') {
        result = num1 - num2;
        cout << "\n\t\t\tDifference: " << result << endl;
    }
    else if (op == '*') {
        result = num1 * num2;
        cout << "\n\t\t\tProduct: " << result << endl;
    }
    else if (op == '/') {
        result = num1 / num2;
        cout << "\n\t\t\tQuotient: " << result << endl;
    }
    else
        cout << "\n\t\t\tInvalid operator\n";

    Sleep(1000);

    int input;
    cout << "\n\t\t\t|------------------------------------------------|";
    cout << "\n\t\t\t| Do you want to return to the Activity Archive? |";
    cout << "\n\t\t\t|       Press 1 if YES and ANY KEY to Exit       |";
    cout << "\n\t\t\t|------------------------------------------------|";
    cout << "\n\t\t\tYour Choice: ";
    cin >> input;
    switch (input) {
    case 1:
        loading();
        archive();
        break;
    default:
        loading();
        cout << "\t\t\t|------------------------------------------------|" << endl;
        cout << "\t\t\t|         This is Presented by Group 3           |" << endl;
        cout << "\t\t\t|                                                |" << endl;
        cout << "\t\t\t|              Mark Daniel Estorba               |" << endl;
        cout << "\t\t\t|                 Janryl Canaway                 |" << endl;
        cout << "\t\t\t|                  Lance Boco                    |" << endl;
        cout << "\t\t\t|             Laurence Lingcopenes               |" << endl;
        cout << "\t\t\t|                 Israel Berina                  |" << endl;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        return;
    }
}

void increment() {
    cout << "\t\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t\t|              Increment a Number               |" << endl;
    cout << "\t\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t  Print out every number from 0 to the number of your choice" << endl;

    int num;

    cout << "\n\t\t\tEnter a number: ";
    cin >> num;
    
    for (int i = 0; i <= num; i++) {
        cout << "\t\t\t" << i << endl;
    }

    Sleep(1000);

    int input;
    cout << "\n\t\t\t|------------------------------------------------|";
    cout << "\n\t\t\t| Do you want to return to the Activity Archive? |";
    cout << "\n\t\t\t|       Press 1 if YES and ANY KEY to Exit       |";
    cout << "\n\t\t\t|------------------------------------------------|";
    cout << "\n\t\t\tYour Choice: ";
    cin >> input;
    switch (input) {
    case 1:
        loading();
        archive();
        break;
    default:
        loading();
        cout << "\t\t\t|------------------------------------------------|" << endl;
        cout << "\t\t\t|         This is Presented by Group 3           |" << endl;
        cout << "\t\t\t|                                                |" << endl;
        cout << "\t\t\t|              Mark Daniel Estorba               |" << endl;
        cout << "\t\t\t|                 Janryl Canaway                 |" << endl;
        cout << "\t\t\t|                  Lance Boco                    |" << endl;
        cout << "\t\t\t|             Laurence Lingcopenes               |" << endl;
        cout << "\t\t\t|                 Israel Berina                  |" << endl;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        return;
    }
}

void decrement() {
    cout << "\t\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t\t|              Decrement a Number               |" << endl;
    cout << "\t\t\t|-----------------------------------------------|" << endl;
    cout << "\t\t  Print out every number from the number of your choice to 0" << endl;

    int num;

    cout << "\n\t\t\tEnter a number: ";
    cin >> num;
    while (num >= 0){
        
        cout << "\t\t\t" << num << endl;
        num--;
    }

    Sleep(1000);

    int input;
    cout << "\n\t\t\t|------------------------------------------------|";
    cout << "\n\t\t\t| Do you want to return to the Activity Archive? |";
    cout << "\n\t\t\t|       Press 1 if YES and ANY KEY to Exit       |";
    cout << "\n\t\t\t|------------------------------------------------|";
    cout << "\n\t\t\tYour Choice: ";
    cin >> input;
    switch (input) {
    case 1:
        loading();
        archive();
        break;
    default:
        loading();
        cout << "\t\t\t|------------------------------------------------|" << endl;
        cout << "\t\t\t|         This is Presented by Group 3           |" << endl;
        cout << "\t\t\t|                                                |" << endl;
        cout << "\t\t\t|              Mark Daniel Estorba               |" << endl;
        cout << "\t\t\t|                 Janryl Canaway                 |" << endl;
        cout << "\t\t\t|                  Lance Boco                    |" << endl;
        cout << "\t\t\t|             Laurence Lingcopenes               |" << endl;
        cout << "\t\t\t|                 Israel Berina                  |" << endl;
        cout << "\t\t\t|------------------------------------------------|" << endl;
        return;
    }
}

void logout() {   
    system("cls");
    cout << "\n\n\n\t\t\t\t   - Presented by Group 3 -\n\n";
    cout << "\t\t\t|--------------------------------------------|" << endl;
    cout << "\t\t\t|                Logging out                 |" << endl;
    cout << "\t\t\t|--------------------------------------------|";
    cout << "\n\t\t\t\tPlease wait while loading\n\n";
    char a = 177, b = 219;
    cout << "\t\t\t\t";
    for (int i = 0; i <= 24; i++) {
        cout << a;
    }
    cout << "\r";
    cout << "\t\t\t\t";
    for (int i = 0; i <= 23; i++)
    {
        Sleep(50);
        cout << b;
    }
    system("cls");
    main();
}

void loading() {
    system("cls");
    cout << "\n\n\n\t\t\t\t- Presented by Group 3 -\n\n";
    cout << "\n\t\t\t\tPlease wait while loading\n\n";
    char a = 177, b = 219;
    cout << "\t\t\t\t";
    for (int i = 0; i <= 24; i++) {
        cout << a;
    }
    cout << "\r";
    cout << "\t\t\t\t";
    for (int i = 0; i <= 23; i++)
    {
        Sleep(50);
        cout << b;
    }
    system("cls");
}
