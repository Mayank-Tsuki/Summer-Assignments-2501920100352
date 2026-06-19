#include<bits.//stdc++.h>
using namespace std;

int main(){
    int n , m;
    cout<<"Enter the no of rows :";cin>>n;
    cout<<"Enter the no of columns :";cin>>m;
    int arr[n][m];

    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            cout<<"Enter the value of ["<<i<<","<<j<<"] : ";cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Given Matrix:"<<endl;
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    
    int sum = 0, size = n;
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            if(i==j || (i+j)==size-1){
                sum += arr[i][j];
            }
        }
    }
    cout<<"The sum of the diagonal elements in the array = "<<sum;
    return 0;
}