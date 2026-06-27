//Write a program to Create quiz application.

#include <bits.//stdc++.h>
using namespace std;

int main() {
    int ans ;
    int score = 0;

    cout << "=====Welcome to a quiz application====="<<endl;
    cout << "!!!We will check whether you are better then a 5th grader!!!";

    cout << "Question 1 :- ";
    cout << "Which planet is known as the Red Planet?"<<endl;
    cout << "1. Earth\n";
    cout << "2. Mars\n";
    cout << "3. Jupiter\n";
    cout << "4. Venus\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if (ans == 2) {
        cout << "Yeahhh!! Correct!\n";
        score++;
    } else {
        cout << "Booo! Correct answer is Mars.\n";
    }

    cout << "Question 2 :- ";
    cout << "Complete the analogy: Sheep is to wool as tree is to which of these?"<<endl;
    cout << "1. Strawberries\n";
    cout << "2. oranges\n";
    cout << "3. Froot\n";
    cout << "4. grapes\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if (ans == 2) {
        cout << "Yeahhh!! Correct!\n";
        score++;
    } else {
        cout << "Booo! Correct answer is Mars.\n";
    }

    cout << "Question 3 :- ";
    cout << "What is the numeric value of the Roman numeral L?"<<endl;
    cout << "1. 100\n";
    cout << "2. 500\n";
    cout << "3. 50\n";
    cout << "4. 150\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if (ans == 3) {
        cout << "Yeahhh!! Correct!\n";
        score++;
    } else {
        cout << "Booo! Correct answer is Mars.\n";
    }

    cout << "Question 4 :- ";
    cout << "True or false? Light is the only thing that can escape a black hole."<<endl;
    cout << "1. True\n";
    cout << "2. False\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if (ans == 2) {
        cout << "Yeahhh!! Correct!\n";
        score++;
    } else {
        cout << "Booo! Correct answer is Mars.\n";
    }

    cout << "Question 5 :- ";
    cout << "What gas do plants absorb from the atmosphere at night ?"<<endl;
    cout << "1. Oxygen\n";
    cout << "2. Carbon dioxide\n";
    cout << "3. Nitrogen\n";
    cout << "4. Non of the above\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if (ans == 1) {
        cout << "Yeahhh!! Correct!\n";
        score++;
    } else {
        cout << "Booo! Correct answer is Mars.\n";
    }


    cout << "\n===== Quiz Finished =====\n";
    cout << "Your Score: " << score << " out of 5" << endl;

    if (score == 5)
        cout << "Excellent! (* *)";
    else if (score >= 3)
        cout << "Good Job! (o o)";
    else
        cout << "Keep Practicing! (' ')";

    return 0;
}