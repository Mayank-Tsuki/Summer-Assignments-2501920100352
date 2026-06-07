//Write a program to recursive factorial

#include<bits//stdc++.h>
using namespace std;

int fact(int n){
    if(n==1) return 1;
    return n * fact(n-1);
}

int main(){
    int num;
    cout<<"Enter the number : ";cin>>num;
    
    cout<<"The factorial of the number is : "<<fact(num);
    return 0;
}