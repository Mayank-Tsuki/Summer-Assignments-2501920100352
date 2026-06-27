//Write a program to Create number guessing game. 

#include <bits.//stdc++.h>
using namespace std;

int main() {
    srand(time(0));

    // Generating number from 1 to 100
    int secretNumber = rand() % 100 + 1;

    int guess,attempt = 0;

    cout<<"Number guess({O*O})"<<endl;
    cout<<"Try to guess a number between 1 to 100"<<endl;
    while (true) {
        cout<<"Enter your "<<attempt + 1<<" guess: ";
        cin >> guess;
        attempt++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number." << endl;
            cout << "Number of attempts: " << attempt << endl;
            break;
        }
    }

    return 0;
}