#include <iostream>
using namespace std;

int main() {
    char letter;
    cout << "Check a letter if consonant or vowel\n";
    cout << "Enter any letter: ";
    cin >> letter;

    char lowcase = tolower(letter);

    if (lowcase == 'a' || lowcase == 'e' || lowcase == 'i' || lowcase == 'o' || lowcase == 'u') {
        cout << "\nThe letter " << letter << " is a VOWEL.\n";
    }
    else
        cout << "\nThe letter " << letter << " is a CONSONANT.\n";
}
