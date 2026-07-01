//Write a program to Create student record system using arrays and strings. 

#include<bits.//stdc++.h>
using namespace std;

int main() {
    int size;
    cout << "Enter number of students: ";
    cin >> size;

    int roll[50];
    string name[50];
    int marks[50];

    for (int i = 0; i < size; i++) {
        cout<<"Enter details of Student "<< i + 1<<endl;

        cout<<"Roll No: ";cin>>roll[i];

        cout<<"Name: ";cin>>name[i];

        cout<<"Marks: ";cin>>marks[i];
    }

    cout << "----- Student Records -----"<<endl;

    for (int i = 0; i < size; i++) {
        cout<<"Student "<<i + 1<<endl;
        cout<<"Roll No : "<<roll[i]<<endl;
        cout<<"Name    : "<<name[i]<<endl;
        cout<<"Marks   : "<<marks[i]<<endl;
    }
    return 0;
}