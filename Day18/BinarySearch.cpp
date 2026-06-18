#include<bits.//stdc++.h>
using namespace std;

int main(){
    int size , ele;
    cout<<"Enter size of array:";cin>>size;

    int arr[size];
    cout<<"Enter elements in array:"<<endl;
    for(int i = 0 ;i < size ; i++){
        cout<<i+1<<" element :";cin>>arr[i];
    }
    cout<<"Enter the element that you want to search:";cin>>ele;

    int hi = size-1;
    int lo = 0;
    bool flag = false;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==ele) {
            flag = true;
            cout<<"Yes, the element is found at "<<mid<<" index.";
            break;
        }
        else if(arr[mid] < ele){
            lo = mid+1;
        }
        else hi = mid-1;
    }
    if(flag==0) cout<<"The element is not present!";
    return 0; 
} 