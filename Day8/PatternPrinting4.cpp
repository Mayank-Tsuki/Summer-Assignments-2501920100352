//Write a program to Print repeated-number pattern.
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5

#include<bits//stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the value of n (height of number) : ";cin>>n;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j<= i ; j++){
            cout<<" "<<i<<" ";
        }
        cout<<endl;
    }
}

