//Write a program to Merge two sorted arrays. 

#include<bits.//stdc++.h>
using namespace std;

void merge(vector<int>& v1,vector<int>& v2,vector<int>& v3){
    int n = v1.size();
    int m = v2.size();
    
    int i = 0;
    int j = 0;
    int k = 0;
    while( i <= n-1 && j <= m-1){
        if(v1[i] < v2[j]){
            v3[k]=v1[i];
            i++;
        }
        else {
            v3[k]=v2[j];
            j++;
        }
        k++;
    }
    if ( i == n ){
        while (j <= m-1){
            v3[k] = v2[j];
            k++;
            j++;
        }
    }
    if ( j == m ){
        while (i <= n-1){
            v3[k] = v1[i];
            k++;
            i++;
        }
    }
    return;
}

int main(){
    vector<int>v1={1,2,7,9};
    vector<int>v2={1,2,3,5,8,9};
    vector<int> res(v1.size() + v2.size());

    merge(v1,v2,res);
    return 0;
}
