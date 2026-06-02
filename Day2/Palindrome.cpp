//Write a program to check whether a number is palindrome or not
#include<iostream>
using namespace std;
int main(){
    int num;
    int reverse = 0;
    cout<<"Enter the number:";cin>>num;
    int copynum = num;
    while(num>0){
        int digit = num%10;
        reverse = reverse*10 + digit;
        num /= 10;
    }
    if(reverse == copynum) cout<<"The number is Palindrome!";
    else cout<<"The number is not Palindrome!";
    return 0;
}