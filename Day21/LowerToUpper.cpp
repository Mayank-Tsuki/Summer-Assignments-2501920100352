//Write a program to Convert lowercase to uppercase. 
#include <bits.//stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int size = str.length();
    int vowels = 0 , cons = 0;

    for(int i = 0 ; i < size ;i++){
        if((str[i] >= 'a' ||str[i] <= 'z' )){
            str[i] = toupper(str[i]);
        }
        
    }
    for(int i = 0 ; i < size ; i++){
        cout<<str[i];
    }
    return 0;
}