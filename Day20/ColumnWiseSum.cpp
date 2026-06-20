//Write a program to Find column-wise sum. 
#include<bits.//stdc++.h>
using namespace std;

int main() {
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
    cout<<endl;

    //Row wise Sum 
    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i][j];
        }
        cout<<"Sum of column "<<j+1<<" is "<<sum;
        cout << endl;
    }
    cout<<endl;
    
    return 0;
}