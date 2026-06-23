//Write a program to Check anagram strings. 

#include<bits.//stdc++.h>
using namespace std;
int main(){
    string str1;
    cout<<"Enter the first string : ";
    getline(cin,str1);

    string str2;
    cout<<"Enter the second string : ";
    getline(cin,str2);

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    if(str1==str2)  cout<<"Yes,it is an anagram!";
    else cout<<"No! its not an anagram.";

    return 0;
}