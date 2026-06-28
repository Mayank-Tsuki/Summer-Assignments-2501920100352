//Write a program to Create ticket booking system

#include<bits.//stdc++.h>
using namespace std;

class Ticket {
    int ticketNo, age;
    string name, from, to;
    bool booked = false;

public:
    void booking() {
        cout << "Enter Ticket Number: ";
        cin >> ticketNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter Pickup: ";
        getline(cin, from);

        cout << "Enter Destination: ";
        getline(cin, to);

        booked = true;
        cout << "\nTicket Booked Successfully!\n";
    }

    void display() {
        if (!booked) {
            cout << "No Ticket Booked!\n";
            return;
        }

        cout << "---: Ticket Details :---";
        cout << "Ticket No : " << ticketNo << endl;
        cout << "Name      : " << name << endl;
        cout << "Age       : " << age << endl;
        cout << "From      : " << from << endl;
        cout << "To        : " << to << endl;
    }

    void cancel() {
        if (!booked)
            cout << "No Ticket to Cancel!";
        else {
            booked = false;
            cout << "Ticket Cancelled Successfully!";
        }
    }
};

int main() {
    Ticket t;
    int ch;

    do {
        cout << "---: Ticket Booking System :---"<<endl;
        cout << "1. Book Ticket\n";
        cout << "2. Display Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> ch;

        switch (ch) {
            case 1: t.booking(); break;
            case 2: t.display(); break;
            case 3: t.cancel(); break;
            case 4: cout << "Thank You!"; break;
            default: cout << "Invalid Choice!";
        }

    } while (ch>=1 && ch<4);

    return 0;
}