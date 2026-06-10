//Write a program to check Amstrong number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter your numeber:";cin>>num;
    string s = to_string(num);
    int n = s.length();
    int copynum = num;
    int compare = 0;
    while(copynum > 0){
        int t = copynum%10;
        compare += pow(t,n);
        copynum /= 10;  
    }
    if(num==compare) cout<<"The number is an Amstrong number!";
    else cout<<"The number is not an Amstrong number!";
    return 0;
}