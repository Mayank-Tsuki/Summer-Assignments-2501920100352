//Write a program to Find first repeating character.

#include<bits.//stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

    bool flag = false;
    char ch ;
    for(int i = 0 ; i < str.length()-1 ; i++){
        for(int j = i + 1 ; j < str.length() ; j++){
            if(str[i] == str[j]){
                flag = true;
                ch = str[j];
                break;
            }
        }
        
    }
    if(flag==true) cout<<"The first repeating character is : "<<ch;
    else cout<<"All characters are non-repeating!";

    return 0;
}