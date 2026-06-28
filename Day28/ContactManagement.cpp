//Write a program to Create contact management system. 

#include <bits/stdc++.h>
using namespace std;

class Contact {
    string name, phone, email;
    bool conCreated = false;

public:
    void addContact() {
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Phone Number: ";
        getline(cin, phone);
        cout << "Enter Email: ";
        getline(cin, email);

        conCreated = true;
        cout << "Contact Saved Successfully!";
    }

    void displayContact() {
        if (!conCreated) {
            cout << "No Contact Found!";
            return;
        }

        cout << "---: Contact Details :---";
        cout << "Name  : " << name << endl;
        cout << "Phone : " << phone << endl;
        cout << "Email : " << email << endl;
    }

    void deleteContact() {
        if (!conCreated) {
            cout << "No Contact to Delete!";
        } else {
            conCreated = false;
            cout << "Contact Deleted Successfully!";
        }
    }
};

int main() {
    Contact c;
    int ch;

    do {
        cout << "---: Contact Management System :---"<<endl;
        cout << "1. Add Contact\n";
        cout << "2. Display Contact\n";
        cout << "3. Delete Contact\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> ch;

        switch (ch) {
            case 1: c.addContact(); break;
            case 2: c.displayContact(); break;
            case 3: c.deleteContact(); break;
            case 4: cout << "Thank You!\n"; break;
            default: cout << "Invalid Choice!\n";
        }

    } while (ch>=1 && ch<4);

    return 0;
}