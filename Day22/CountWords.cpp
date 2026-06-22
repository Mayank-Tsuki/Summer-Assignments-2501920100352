//Write a program to Count words in a sentence. 

#include<bits.//stdc++.h>
using namespace std;

int main(){
    string str ;
    cout<<"Enter the string that you want to check: ";
    getline(cin,str);

    int len = str.size() - 1;
    int count = 0;
    for(int i = 0 ; i <= len ; i++){
        if(str[i] == ' ') count++;
    }
    cout<<"The total words in the string is : "<<count+1;

    return 0;
}