//Write a program to Develop complete mini project using arrays, strings and functions.


//                      Student Management System

#include<bits.//stdc++.h>
using namespace std;

int roll[50], marks[50], n;
string name[50];

void addStudents() {
    cout<<"Enter number of students: ";
    cin>>n;

    for (int i = 0; i < n; i++) {
        cout<<"Student "<<i + 1<<endl;
        cout<<"Roll No: ";cin>>roll[i];
        cout<<"Name: ";cin>>name[i];
        cout<<"Marks: ";cin>>marks[i];
    }
}

void displayStudents() {
    cout<<"----- STUDENT RECORDS -----"<<endl;

    for (int i = 0; i < n; i++) {
        cout<<"Student " << i + 1 <<endl;
        cout<<"Roll No : " << roll[i]<<endl;
        cout<<"Name    : " << name[i]<<endl;
        cout<<"Marks   : " << marks[i]<<endl;
    }
}

void searchStudent() {
    int r;
    cout << "Enter Roll No to Search: ";
    cin >> r;

    for (int i = 0; i < n; i++) {
        if (roll[i] == r) {
            cout << "Student Found"<<endl;
            cout << "Roll No : " << roll[i] << endl;
            cout << "Name    : " << name[i] << endl;
            cout << "Marks   : " << marks[i] << endl;
            return;
        }
    }

    cout << "Student Not Found."<<endl;
}

int main() {
    int choice;

    do {
        cout << "----: STUDENT MANAGEMENT SYSTEM :----"<<endl;
        cout << "1. Add Students"<<endl;
        cout << "2. Display Students"<<endl;
        cout << "3. Search Student"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudents();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                cout << "Program Ended."<<endl;
                break;

            default:
                cout << "Invalid Choice!"<<endl;
        }

    } while (choice >= 1 && choice < 4);

    return 0;
}