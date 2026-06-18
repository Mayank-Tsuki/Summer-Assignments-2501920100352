#include<bits//stdc++.h>
using namespace std;

void IntersecArray(int arr1[] ,int size1 ,int arr2[] ,int size2){
    int inter[50];
    int k= 0;

    for(int i = 0 ; i  < size2 ; i++){
        bool flag = false;
        for(int j = 0 ; j < size1 ; j++ ){
            if(arr2[i] == arr1[j]){
                flag = true;
                break;
            }
        }
        if(flag==true) {
            inter[k] = arr2[i];
            k++;
        }
    }
    cout<<"Intersection of arrays:";
    for(int i = 0 ; i < k ; i++){
        cout<<inter[i]<<" ";
    }

}
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

    IntersecArray(arr1,size1,arr2,size2);
    return 0;
}