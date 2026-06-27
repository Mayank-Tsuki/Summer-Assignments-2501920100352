//Write a program to Create ATM simulation. 

#include <bits.//stdc++.h>
using namespace std;

int main() {
    int choice;

    //intial amount
    double balance = 10000.0;
    double amount;

    do {
        cout << "===== ATM MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: Rs. "<<balance<<endl;
                break;

            case 2:
                cout<<"Enter amount to deposit: ";
                cin>>amount;

                if (amount>0) {
                    balance += amount;
                    cout<<"Rs. "<<amount<< " deposited successfully."<<endl;
                    cout<<"Updated Balance: Rs. "<<balance<<endl;
                } else {
                    cout<< "Invalid amount!"<<endl;
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                }
                else if (amount > balance) {
                    cout << "Insufficient Balance!" << endl;
                }
                else {
                    balance -= amount;
                    cout << "Please collect your cash." << endl;
                    cout << "Remaining Balance: Rs. " << balance << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        cout<<endl;

    } while (choice >=1 && choice < 4 );

    return 0;
}