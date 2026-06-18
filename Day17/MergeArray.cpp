#include<bits//stdc++.h>
using namespace std;

int main(){
    int size1 , size2;
    cout<<"Enter size of 1st array:";cin>>size1;

    int arr1[size1];
    cout<<"Enter elements in 1st array:"<<endl;
    for(int i = 0 ;i < size1 ; i++){
        cout<<i+1<<" element :";cin>>arr1[i];
    }

    cout<<"Enter size of 2nd array:";cin>>size2;

    int arr2[size2];
    cout<<"Enter elements in 2nd array:"<<endl;
    for(int i = 0 ;i < size2 ; i++){
        cout<<i+1<<" element :";cin>>arr2[i];
    }

    int res[size1+size2];
    for(int i = 0 ; i < size1 ; i++){
        res[i] = arr1[i];
    }
    for(int i = 0 ; i < size2 ; i++){
        res[i+size1] = arr2[i];
    }

    cout<<"The merge array : ";
    for(int i = 0 ; i < (size1+size2) ; i++){
        cout<<res[i]<<" ";
    }

    return 0;
}