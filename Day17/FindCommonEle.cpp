#include<bits//stdc++.h>
using namespace std;

void commonEle(int arr1[] ,int size1 ,int arr2[] ,int size2){
    int com[50];
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
            com[k] = arr2[i];
            k++;
        }
    }
    cout<<"Common elements in the arrays are:";
    for(int i = 0 ; i < k ; i++){
        cout<<com[i]<<" ";
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

    commonEle(arr1,size1,arr2,size2);
    return 0;
}