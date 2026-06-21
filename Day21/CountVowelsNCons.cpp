//Write a program to Count vowels and consonants.
#include <bits.//stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int size = str.length();
    int vowels = 0 , cons = 0;

    for(int i = 0 ; i < size ;i++){
        if(str[i] == 'a'||str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] =='A' ||str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vowels++;
        }
        else if((str[i] > 'A' ||str[i] <= 'Z' ||str[i] > 'a' ||str[i] <= 'z' )){
            cons++;
        }
        
    }

    cout<<"Consonants = "<<cons<<endl;
    cout<<"Vowels = "<<vowels<<endl;
    return 0;
}