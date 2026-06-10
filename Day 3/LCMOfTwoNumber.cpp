//Write a program to find the LCM of two numbers
//Formula = LCM(a,b) = (a*b)/gcd(a,b)

#include<iostream>
using namespace std;

int gcd(int a , int b){
    for(int i = min(a,b) ; i > 1 ; i--){
        if(a%i == 0 && b%i == 0){
            return i;
        }
    }
    return 1;
}
int main(){
    int num1 , num2;
    int LCM;
    bool flag = false;
    cout<<"Enter the first number:";cin>>num1;
    cout<<"Enter the second number:";cin>>num2;
    
    cout<<"The LCM of the two given numbers = "<<(num1*num2)/gcd(num1,num2);
    return 0;
}
