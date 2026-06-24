//Write a program to Check string rotation. 

#include<bits.//stdc++.h>
using namespace std;
int main(){
    string str1, str2;
    cout<<"Enter the string1 : ";
    cin>>str1;
    cout<<"Enter the string2 : ";
    cin>>str2;
    bool flag = false;

    for(int i = 0 ; i < str1.length() ; i++){
        if(str1==str2) flag =  true;
        rotate(str1.begin(),str1.begin()+1,str1.end());
    }
    if(flag == true) cout<<"Yes, string can be equal";
    else cout<<"No string can't be rotated";

    return 0;
}