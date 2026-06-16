//Program to find maximum frequency element

#include<bits.//stdc++.h>
using namespace std;

//Code of finding max frequency number!
void mxFreqNo(int arr[] ,int n){
    int mxFreq = 0 ,mxEle;

    for(int i = 0 ; i < n ; i++){
        int count = 1;
        for(int j = i+1 ; j < n ; j++){
            if(arr[i]==arr[j]) count++;
        }
        if(count>mxFreq){
            mxFreq = count;
            mxEle = arr[i];
        }
    }
    cout<<"The max frequency element = "<<mxEle<<" with frequency = "<<mxFreq;
}

int main(){
    int arr[] = {1,2,3,4,5,5,1,2,3,1,1,3,8,6,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    mxFreqNo(arr,size);
}