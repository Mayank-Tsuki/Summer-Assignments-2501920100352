//Write a program to Create menu-driven array operations system.

#include<bits.//stdc++.h>
using namespace std;

int main() {
    int arr[100], size, choice;
    cout<<"Enter the size of array: ";
    cin>>size;

    for (int i = 0; i < size; i++){
        cout<<"Enter " << i+1 << " element : ";cin>>arr[i];
    }

    do {
        cout<<"-::: ARRAY OPERATIONS :::-"<<endl;
        cout<<"1. Display Array"<<endl;
        cout<<"2. Find Maximum"<<endl;
        cout<<"3. Find Minimum"<<endl;
        cout<<"4. Find Sum"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice) {
            case 1:
                cout << "Array: ";
                for (int i = 0; i < size; i++){
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 2: {
                int max = arr[0];
                for (int i = 1; i < size; i++)
                    if (arr[i] > max) max = arr[i];
                cout << "Maximum = " << max << endl;
                break;
            }

            case 3: {
                int min = arr[0];
                for (int i = 1; i < size; i++)
                    if (arr[i] < min) min = arr[i];
                cout << "Minimum = " << min << endl;
                break;
            }

            case 4: {
                int sum = 0;
                for (int i = 0; i < size; i++){
                    sum += arr[i];
                }
                cout << "Sum = " << sum << endl;
                break;
            }

            case 5:
                cout << "Program Ended." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice>=1 && choice<5);

    return 0;
}