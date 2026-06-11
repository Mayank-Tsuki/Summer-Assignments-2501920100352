// Print the factorial of number n.

#include<bits//stdc++.h>
using namespace std;

int fac(int n){
    int fact=1;
    for (int i=2 ; i<=n ; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int num;
    cout<<"Enter the number :";cin>>num;

    cout<<"The factorial of the number is = "<<fac(num);
    return 0;
}