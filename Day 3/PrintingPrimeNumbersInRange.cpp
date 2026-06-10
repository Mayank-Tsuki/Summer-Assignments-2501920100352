//Write a program to print all the prime number within the range
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n) ; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){
    int lowerBound;
    int upperBound;
    cout<<"Enter the lowerbound of the range:";cin>>lowerBound;
    cout<<"Enter the upperbound of the range:";cin>>upperBound;

    for(int i = lowerBound ; i <= upperBound ; i++){
        if(isPrime(i)) cout<<i<<" ";
    }
    return 0;
}