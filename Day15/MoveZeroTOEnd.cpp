#include<bits//stdc++.h>
using namespace std;

//Reverse array!
void ZeroToEnd(int arr[] , int n){
    int i = 0 , j = n-1;
    while(i<j){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            j--;
        }
        else i++;
    }
}
//Display array!
void DisplayArray(int arr[] , int n){
    cout<<"Array : "<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,0,3,0,0,7,0,9,10,0,91,87,0,5,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    ZeroToEnd(arr , size);

    DisplayArray(arr , size);
    return 0;
}