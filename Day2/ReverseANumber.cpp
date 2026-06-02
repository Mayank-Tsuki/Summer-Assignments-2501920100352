//Write a program to reverse a number
#include<iostream>
using namespace std;
int main(){
    int num;
    int reverse = 0;
    cout<<"Enter the number:";cin>>num;
    while(num>0){
        int digit = num%10;
        reverse = reverse*10 + digit;
        num /= 10;
    }
    cout<<"The reverse of the number is : "<<reverse;
    return 0;
}