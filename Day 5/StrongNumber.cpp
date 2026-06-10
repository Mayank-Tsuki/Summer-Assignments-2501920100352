//Program to check Strong Number

#include<bits//stdc++.h>
using namespace std;

int fact(int n){
    if(n==1) return 1;
    return n * fact(n-1);
}

int main(){
    int num;
    cout<<"Enter the number that you want to check : ";cin>>num;

    int copynum = num;
    int check = 0;
    while(copynum>0){
        int temp = copynum % 10;
        check += fact(temp);
        copynum /= 10;
    }
    if(check==num) cout<<"Yes,the number is perfect number!";
    else cout<<"The number is not a strong number.";
    return 0;
}