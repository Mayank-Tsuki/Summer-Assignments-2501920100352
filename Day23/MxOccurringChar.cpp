//Write a program to Find maximum occurring character. 

#include<bits.//stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

    char ch = str[0];
    int len = 0;
    for(int i = 0 ; i < str.length()-1 ; i++){
        int count = 1;
        for(int j = i+1 ; j < str.length()-1 ; j++){
            if(str[i]==str[j]) count++;
        }
        if(count > len) {
            len = count;
            ch = str[i];
        }  
    }

    cout<<"The maximum occurring character : "<<ch;
    return 0;
}