#include<bits.//stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the no of rows or column (both are equal): ";
    cin >> n;

    int arr[n][n];
    int transpose[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter value [" << i << "," << j << "] : ";
            cin >> arr[i][j];
        }
    }

    // Print matrix
    cout << "Given Matrix:";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;

    // Transpose
    cout << "Transpose:";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[i][j] = arr[j][i];
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Check symmetry
    bool flag = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != transpose[i][j]) {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << "Matrix is Symmetric";
    else
        cout << "Matrix is NOT Symmetric";

    return 0;
}