
#include <iostream>
using namespace std;

int main() {
    int secret = 420;
    int guess;

    do {
        cout << "Guess the number: ";
        cin >> guess;

        if (guess > secret) {
            cout << "Too high!\n";
        }
        else if (guess < secret) {
            cout << "Too low!\n";
        }
        else {
            cout << "Correct! You win!\n";
        }

    } while (guess != secret);

    return 0;
}

