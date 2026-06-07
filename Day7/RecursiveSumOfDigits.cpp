//Write a program to recursive sum of digits

#include<bits//stdc++.h>
using namespace std;

int Digitsum(int n){
    if(n==0) return 0;
    return (n%10)+Digitsum(n/10);
}

int main(){
    int num;
    cout<<"Enter the number : ";cin>>num;

    cout<<"The sum of the digits of the numeber is: "<<Digitsum(num);
    return 0;
}