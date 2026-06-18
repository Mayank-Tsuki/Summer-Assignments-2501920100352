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

    //Bubble Sort
    for(int i = 0; i < size-1 ; i++){
        for(int j = 0 ; j < size-1-i ; j++ ){
            if(arr[j] > arr[j+1]){  
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout<<"sorted array : ";
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;  
}