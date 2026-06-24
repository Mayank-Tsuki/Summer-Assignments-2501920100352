//Write a program to Remove duplicate characters. 

#include <bits.//stdc++.h>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string ans = "";

    for (int i = 0; i<str.length(); i++) {
        bool flag = false;
        for (int j = 0; j < ans.length(); j++) {
            if(str[i] == ans[j]) {
                flag = true;
                break;
            }
        }

        if (flag == false) {
            ans += str[i];
        }
    }
    cout << "String after removing duplicates: " <<ans;
    return 0;
}