//Write a program to Create student record management system. 

#include<bits.//stdc++.h>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s[100];
    int n = 0;
    int choice;

    do {
        cout << " : Student Record Management System : ";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> s[n].rollNo;

            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, s[n].name);

            cout << "Enter Marks: ";
            cin >> s[n].marks;

            n++;
            cout << "Student record added successfully!"<<endl;
            break;

        case 2:
            if (n == 0) {
                cout << "No records found!\n";
            } else {
                cout << "Student Records:";
                for (int i = 0; i < n; i++) {
                    cout << "Student " << i + 1 << endl;
                    cout << "Roll No: " << s[i].rollNo << endl;
                    cout << "Name    : " << s[i].name << endl;
                    cout << "Marks   : " << s[i].marks << endl;
                }
            }
            break;

        case 3:
        {
            int roll;
            bool found = false;

            cout << "Enter Roll Number to search: ";
            cin >> roll;

            for (int i = 0; i < n; i++) {
                if (s[i].rollNo == roll) {
                    cout << "\nRecord Found:\n";
                    cout << "Roll No: " << s[i].rollNo << endl;
                    cout << "Name   : " << s[i].name << endl;
                    cout << "Marks  : " << s[i].marks << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student record not found!"<<endl;
            }
            break;
        }

        case 4:
            cout << "..Thank you.."<<endl;
            break;

        default:
            cout << "Invalid choice!"<<endl;
        }

    } while (choice>=1 && choice<4);

    return 0;
}