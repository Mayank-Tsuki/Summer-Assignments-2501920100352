#include<bits.//stdc++.h>
using namespace std;

//Substraction of two matrix!

int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{42,56,22}};
    int b[3][3] = {{7,8,9},{10,11,12},{23,79,100}};
    int result[2][3];

    //Adding matrix
    for( int i = 0 ; i < 3 ; i++){
        for ( int j = 0 ; j < 3 ; j++){
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<"The resultant sum of the matrix :"<<endl;
    for( int i = 0 ; i < 3 ; i++){
        for ( int j = 0 ; j < 3 ; j++){
            cout<<a[i][j] - b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}