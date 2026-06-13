//Program to find the smallest and largest number in the array

#include<bits//stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter number of element:";cin>>n;
    int arr[n];
    cout<<"Enter elements:"<<endl;
    for (int i = 0 ; i < n ; i++){
        cout<<"Element "<<i+1<<" :";
        cin>>arr[i];
    }
    cout<<"Array : ";
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int larNum = arr[0], smallNum = arr[0] ;
    for (int i = 1 ; i < n ; i++){
        if(larNum>arr[i]) larNum = arr[i];
        if(smallNum<arr[i]) smallNum = arr[i];
    }
    cout<<"The largest number in the array is:"<<larNum<<endl;
    cout<<"The smallest number in the array is:"<<smallNum;
    return 0;
}