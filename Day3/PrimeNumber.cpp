//Write a program to check whether a number is prime or not
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    bool flag = true;
    cout<<"Enter the number that you want to check:";cin>>num;

    for(int i = 2 ; i <= sqrt(num) ; i++){
        if(num%i==0){
            flag=false;
            break;
        }
    }
    
    if(flag==true) cout<<"The number is Prime!";
    else cout<<"The number is not Prime";
    return 0;
}