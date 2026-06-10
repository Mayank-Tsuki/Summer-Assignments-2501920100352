//Write a program to Print repeated character pattern.
// A
// B B
// C C C
// D D D D 
// E E E E E 

#include<bits//stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the value of n (height of pattern) : ";cin>>n;

    for(int i = 65 ; i <= 65+n ; i++){
        for(int j = 65 ; j <= i ; j++){
            char ch = char(i);
            cout<<" "<<ch<<" ";
        }
        cout<<endl;
    }
}