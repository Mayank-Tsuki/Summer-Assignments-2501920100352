//Function Of Perfect Number

#include<bits//stdc++.h>
using namespace std;
int isPerfNo(int n) {
    int check = 1;
    for(int i = 2 ; i <= n/2 ; i++){
        if(n%i == 0) check += i;
    }
    return ( check == n );
}

int main(){
    int num;
    cout<<"Enter the number that you want to check : ";cin>>num;
    
    if(isPerfNo(num)) cout <<"Yes, "<< num <<" is a Perfect number !";
    else cout<<"No, "<< num << " is not a Perfect number!";

    return 0;
}