//Program to find the pairs with given sum
#include<bits.//stdc++.h>
using namespace std;

//code for finding the pairs with given sum!
void SumPair(int arr[] ,int n ,int sum){
    cout<<"The pairs are : ";
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++ ){
            if((arr[i]+arr[j]) == sum){
                cout<<"("<<arr[i]<<","<<arr[j]<<") ";
            }
        }
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 5;

    SumPair(arr,size,sum);
    return 0;
}