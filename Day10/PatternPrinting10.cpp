//Print Reverse Star Pyramid

#include<bits//stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the length of the Pyramid : ";cin>>n;

    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=i-1 ; j++){
            cout<<"   ";
        }
        for (int k=2*n-i ; k >= i ; k--){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}