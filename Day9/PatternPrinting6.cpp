//Write a program to Print reverse number triangle.
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3
// 1 2 
// 1

#include<bits//stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the value of n (height of pattern) : ";cin>>n;

    for(int i = n ; i >=1 ; i--){
        for(int j = 1 ; j <= i ; j++){
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
}