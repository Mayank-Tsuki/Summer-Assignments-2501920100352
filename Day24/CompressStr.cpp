//Write a program to Compress a string.

#include <bits.//stdc++.h>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string ans = "";
    for (int i = 0; i < str.length(); i++){
        int count = 1;
        while (i < str.length() - 1 && str[i] == str[i + 1]){
            count++;
            i++;
        }
        ans += str[i];
        ans += to_string(count);
    }

    cout << "Compressed string: "<<ans;
    return 0;
}