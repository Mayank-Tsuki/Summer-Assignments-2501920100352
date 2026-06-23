//Write a program to Find first non-repeating character. 

#include<bits.//stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

    char ch = str[0];
    bool flag = false;
    for(int i = 1 ; i < str.length() ; i++){
        if(str[i] != ch){
            flag = true;
            ch = str[i];
            break;
        }
    }
    if(flag==true) cout<<"The first non repeating character is : "<<ch;
    else cout<<"All characters are repeating!";

    return 0;
}