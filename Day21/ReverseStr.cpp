//Write a program to Reverse a string. 
#include <bits.//stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int size = str.length();

    reverse(str.begin(),str.end());

    for(int i=0 ; i<size ; i++ ){
        cout<<str[i];
    }
    return 0;
}