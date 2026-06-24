//Write a program to Find longest word. 

#include <bits.//stdc++.h>
using namespace std;

int main(){
    string str, word, longestWord;

    cout << "Enter a sentence: ";
    getline(cin, str);

    stringstream ss(str);

    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }
    cout << "Longest word: " << longestWord << endl;
    cout << "Length: " << longestWord.length() << endl;

    return 0;
}

