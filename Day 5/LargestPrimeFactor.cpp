//Finding the largest Prime factor

#include<bits//stdc++.h>
using namespace std;

bool checkPrime(int n){
    if(n<2) return false;

    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter the number : ";cin>>num;

    for(int i = num/2 ; i >=2 ; i--){
        if(num%i == 0 && checkPrime(i)){
            cout<<"The largest prime factor of "<<num<<" is: "<<i;
            break;
        }
    }
    return 0;
}