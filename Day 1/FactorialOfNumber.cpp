#include<iostream>
using namespace std;

//Factorial by recursion

int factorial(int n){
    if(n==1 || n==0) return 1;
    return n * factorial(n-1);
}

int main(){
    int num;
    cout<<"Enter number which you want factorial of :";
    cin>>num;
    cout<<"The factorial of "<<num<<" is "<<factorial(num);

    return 0;
}