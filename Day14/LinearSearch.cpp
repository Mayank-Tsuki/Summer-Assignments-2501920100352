//Write a program to Linear Search

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
    int n ;
    cout<<"Enter number of element:";cin>>n;
    int arr[n];
    cout<<"Enter elements:"<<endl;
    for (int i = 0 ; i < n ; i++){
        cout<<"Element "<<i+1<<" :";
        cin>>arr[i];
    }
    displayArray(arr,n);

    int num;
    cout<<"Enter the element you want to find:";cin>>num;

    //Linear search!
    bool check = false;
    int Idx = 0;
    for (int i = 0 ; i < n ; i++){
        if(num==arr[i]){
            Idx = i;
            check = true;
            break;
        }
    }
    if(check) cout<<"The element is at index "<<Idx;
    else cout<<"There is no such element in the array!";
     
    return 0;
}