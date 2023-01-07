#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
using namespace std;
void Register();
void Login();
bool IsloggedIn();
void ForgotPass();

int main(){
    int choice;

    cout << "1 :Register \n2 :Login \n3 :Forgot Password\nYour choice :";
    cin >> choice;

    switch (choice) {
    case 1:
        Register();
        break;
    case 2:
        Login();
        break;
    case 3:
        ForgotPass();
        break;
    default:
        cout << "Invalid Choices!";
    }
    
   
}

void Register() {
    string username, password;

    cout << "select a username :";
    cin >> username;
    
    ifstream infile(username + ".txt");
    if (infile) {
        cout << "username already exist";
        system("PAUSE");
    }

    cout << "select a password :";
    cin >> password;
    
    
    ofstream file;
    file.open(username + ".txt");
    file << username << endl  << password;
    file.close();

    main();
}

bool IsloggedIn() {
    string username, password, un, pw;

    cout << "Enter username :";
    cin >> username;

    cout << "Enter password :";
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

void Login() {
    bool status = IsloggedIn();

    if (!status) {
        cout << "Invalid user name password :" << endl;
        system("PAUSE");

    }
    else {
        cout << "You are successfully login";
    }
}

void ForgotPass() {
    string username, password;

    cout << "Enter username :";
    cin >> username;

    ifstream infile(username + ".txt");
    if (!(infile)) {
        cout << "Username doesnot exist!";
        system("pause");
    }

    cout << "Enter your new password: ";
    cin >> password; 

    

    ofstream file;
    file.open(username + ".txt");
    file << username << endl << password;
    main();
}
