//Wrinte a program to print the multiplication of two matrix .

#include<bits.//stdc++.h>
using namespace std;
int main(){
    int p , q , m , n;
    cout<<"Enter the row of 1st matrix:";cin>>m;
    cout<<"Enter the column of 1st matrix:";cin>>n;
    cout<<"Enter the row of 2nd matrix:";cin>>p;
    cout<<"Enter the column of 2nd matrix:";cin>>q;

    if ( n == p){
        int  a[m][n];

        cout<<"Enter elements of 1st matrix:"<<endl;
        for (int i = 0 ; i < m ; i++){
            for (int j = 0 ; j < n ; j++){
                cout<<"a["<<i<<"]["<<j<<"] : ";
                cin>>a[i][j];
            }
        }

        int  b[p][q];
        cout<<"Enter elements of 2nd matrix:"<<endl;
        for (int i = 0 ; i < p ; i++){
            for (int j = 0 ; j < q ; j++){
                cout<<"b["<<i<<"]["<<j<<"] : ";
                cin>>b[i][j];
            }
        }

        //Multiplaication of matrix!
        int res[m][q];
        for( int i = 0 ; i < m ; i++){
            for ( int j = 0 ; j < q ; j++){
                res[i][j] = 0;
                for ( int k = 0 ; k < p ; k++){
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        //Printing resultant matrix!
        for( int i = 0 ; i < m ; i++){
            for ( int j = 0 ; j < q ; j++){
                cout<<res[i][j]<<"  ";
            }
            cout<<endl;
        }

    }

    else {
        cout<<"The corresponding order can't form a matrix!";
    }

    return 0;

}