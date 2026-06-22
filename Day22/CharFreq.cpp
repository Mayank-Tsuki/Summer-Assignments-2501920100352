//Write a program to Character frequency.

#include<bits.//stdc++.h>
using namespace std;

int main(){
    string str ;
    cout<<"Enter the string that you want to check: ";
    getline(cin,str);
    char ch ;
    cout<<"Enter the character that you want frequency of : ";
    cin>>ch;
    int count = 0;
    
    int len = str.size() - 1;
    for(int i = 0 ; i <= len ; i++){
        if(str[i] == ch) count++;
    }
    cout<<"The total frequency of "<< ch <<" in the string is : "<<count;

    return 0;
}