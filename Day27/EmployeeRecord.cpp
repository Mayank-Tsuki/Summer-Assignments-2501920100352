//Write a program to Create employee record system. 

#include<bits.//stdc++.h>
using namespace std;

struct Employee {
    int Employee_ID;
    string Name;
    string Department;
};

int main() {
    Employee s[100];
    int n = 0;
    int choice;

    do {
        cout << " : Employee Record Management System : ";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employee\n";
        cout << "3. Search Employee by Employee_ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Employee_ID: ";
            cin >> s[n].Employee_ID;

            cin.ignore();  
            cout << "Enter Name: ";
            getline(cin, s[n].Name);

            cout << "Enter Department: ";
            cin >> s[n].Department;

            n++;
            cout << "Employee record added successfully!"<<endl;
            break;

        case 2:
            if (n == 0) {
                cout << "No records found!"<<endl;
            } else {
                cout << "Employee Records:";
                for (int i = 0; i < n; i++) {
                    cout << "\nEmployee " << i + 1 << endl;
                    cout << "Employee_ID: " << s[i].Employee_ID << endl;
                    cout << "Name    : " << s[i].Name << endl;
                    cout << "Department   : " << s[i].Department << endl;
                }
            }
            break;

        case 3:
        {
            int Employee_ID;
            bool found = false;

            cout << "Enter Employee_ID to search: ";
            cin >> Employee_ID;

            for (int i = 0; i < n; i++) {
                if (s[i].Employee_ID == Employee_ID) {
                    cout << "Record Found:";
                    cout << "Employee_ID: " << s[i].Employee_ID << endl;
                    cout << "Name   : " << s[i].Name << endl;
                    cout << "Department  : " << s[i].Department << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Employee record not found!"<<endl;
            }
            break;
        }

        case 4:
            cout << "Exiting program..."<<endl;
            break;

        default:
            cout << "Invalid choice!"<<endl;
        }

    } while (choice>=1 && choice<4);

    return 0;
}