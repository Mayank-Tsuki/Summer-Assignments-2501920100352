//Print the factors of a number

#include<bits//stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";cin>>num;

    cout<<"The factors of the given number : ";
    for(int i = 1 ; i <= num/2 ; i++){
        if(num%i == 0) cout<<i<<" ";
    }
    cout<<num;
    return 0;
}