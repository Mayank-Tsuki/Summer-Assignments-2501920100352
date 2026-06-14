//Program to find the second largest element in the array

#include<bits//stdc++.h>
using namespace std;

void displayArray(int arr[], int size) {
    cout<<"Array : ";
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    //array input and display
    int n ;
    cout<<"Enter number of element:";cin>>n;
    int arr[n];
    cout<<"Enter elements:"<<endl;
    for (int i = 0 ; i < n ; i++){
        cout<<"Element "<<i+1<<" :";
        cin>>arr[i];
    }
    displayArray(arr,n);

    //Sec largent element
    int larNum = arr[0], secLar = INT_MIN ;

    for (int i = 1 ; i < n ; i++){
        if(larNum<arr[i]){
            secLar = larNum;
            larNum = arr[i];
        }
        else if(arr[i]>secLar && arr[i] != larNum){
            secLar = arr[i];
        }
    }
    cout<<"The second largest element in the array is:"<<secLar<<endl;
    return 0;
}