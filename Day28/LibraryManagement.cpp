//Write a program to Create library management system. 

#include<bits.//stdc++.h>
using namespace std;

struct library {
    int rollNo;
    string name;
    string BookName;
};

int main() {
    library s[100];
    int n = 0;
    int choice;

    do {
        cout << " ---: Library Record Management System :--- "<<endl;
        cout << "1.  Issue Book\n";
        cout << "2. Display All Books that are issued\n";
        cout << "3. Search Book that is issued by a student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Roll Number: ";
            cin >> s[n].rollNo;

            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, s[n].name);

            cout << "Enter Book Name: ";
            cin >> s[n].BookName;

            n++;
            cout << "Book record added successfully!"<<endl;
            break;

        case 2:
            if (n == 0) {
                cout << "No books are issued till now!\n";
            } else {
                cout << "Book issued Records:";
                for (int i = 0; i < n; i++) {
                    cout << "Student " << i + 1 << endl;
                    cout << "Roll No: " << s[i].rollNo << endl;
                    cout << "Name    : " << s[i].name << endl;
                    cout << "Book name : " << s[i].BookName << endl;
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
                    cout << "Book name : " << s[i].BookName << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Book record not found!"<<endl;
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
