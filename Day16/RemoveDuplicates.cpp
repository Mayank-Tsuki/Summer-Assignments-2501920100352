//Program to remove the duplicates from the array
#include<bits.//stdc++.h>
using namespace std;

//code to remove the duplicates from the array!
void RemoveDupli(int arr[] ,int &n ){
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i]==arr[j]){
                for(int k = j ; k < n-1 ; k++){
                    arr[k] = arr[k+1];
                }
                n--;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,2,9,3,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    RemoveDupli(arr,size);

    return 0;
}