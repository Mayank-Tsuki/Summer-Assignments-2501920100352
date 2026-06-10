//Write a program to find the nth term in fibonacci series
#include<bits/stdc++.h>
using namespace std;

int fibseries(int n) {
    if(n == 1 || n == 0)
        return n;
    return fibseries(n-1) + fibseries(n-2);
}

int main() {
    int n;
    cout<<"Enter nth term that you want to find: ";cin>>n;

    cout<<"The nth term of the fibonacci series is : "<<fibseries(n);

    return 0;
}
