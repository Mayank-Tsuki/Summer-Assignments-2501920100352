//Write a program to Find string length without strlen().
#include <bits.//stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int size = 0;

    while (str[size] != '\0') {
        size++;
    }
    cout << "Length of string = " <<size<< endl;
    return 0;
}