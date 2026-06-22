//Write a program to Check palindrome string.

#include<bits.//stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int idx = s.size()-1;
    for(int i = 0 ; i < idx/2 ; i++){
        if(s[i] == s[idx-i]) continue;
        else{
            return false;
        }
    }
    return true;
}
int main(){
    string str ;
    cout<<"Enter the string that you want to check: ";
    getline(cin,str);
    bool check = isPalindrome(str);
    if(check == true) cout<<"Yes, it is a Palindrome string.";
    else cout<<"No , the string is not palindrome.";

    return 0;
}