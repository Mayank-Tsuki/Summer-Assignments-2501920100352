#include<bits.//stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    string ans = "";

    for(int i = 0; i < str.size(); i++) {
        if(str[i] != ' ') {
            ans += str[i];
        }
    }

    cout << "String without spaces: " << ans;
    return 0;
}