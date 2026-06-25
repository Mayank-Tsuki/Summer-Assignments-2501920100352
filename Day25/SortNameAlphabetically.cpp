//Write a program to Sort names alphabetically.

#include<bits.//stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of names: ";
    cin >> n;
    string names[n];

    cout << "Enter the names:";
    for (int i = 0; i < n; i++){
        cin>>names[i];
    }

    // Sorting names alphabetically
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (names[i] > names[j]) {
                swap(names[i], names[j]);
            }
        }
    }

    cout << "Names in alphabetical order:"<<endl;
    for (int i = 0; i < n; i++){
        cout << names[i] << endl;
    }

    return 0;
}