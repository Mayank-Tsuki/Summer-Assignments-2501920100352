#include<bits.//stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array:";cin>>size;

    int arr[size];
    cout<<"Enter elements in array:"<<endl;
    for(int i = 0 ;i < size ; i++){
        cout<<i+1<<" element :";cin>>arr[i];
    }

    cout<<"Given array :";
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Selection sort
    for(int i = 0 ; i < size-1; i++){
        int min = INT_MAX;
        int minidx;

        for(int j = i; j < size; j++){
            if(arr[j] < min){
                min = arr[j];
                minidx = j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}