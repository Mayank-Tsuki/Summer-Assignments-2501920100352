//Program to find the missing number in an array
#include<bits.//stdc++.h>
using namespace std;

//code for missing finding number!
int missingNo(int arr[] ,int n){
    for(int i = 0 ; i < n ; i++){
        if(arr[i] != i+1) return i+1;
    }
    return 0;
}

int main(){
    int arr[] = {1,2,3,4,5,6,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int k = missingNo(arr,size);
    if(k != 0) cout<<"The missing number is = "<<k;
    else cout<<"There is no missing number.";
    return 0;
}