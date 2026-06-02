//Write a program to find the sum of the digits of a number:
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";cin>>num;
    int sum = 0;
    while(num>0){
            int digit = num % 10;
            sum += digit;
            num /= 10;
    }
    cout<<"The sum of the digits in the number : "<<sum;
    return 0;
}