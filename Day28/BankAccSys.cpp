//Write a program to Create bank account system. 

#include<bits.//stdc++.h>
using namespace std;

class BankAccount{
private:
    int accountNo;
    string name;
    double balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNo;
        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, name);
        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "Account Created Successfully!"<<endl;
    }

    void deposit() {
        double amount;

        cout << "Enter Amount to Deposit: ";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Amount Deposited Successfully.";
        } else {
            cout << "Invalid Amount!";
        }
    }

    void withdraw() {
        double amount;
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient Balance!\n";
        }
        else if (amount <= 0) {
            cout << "Invalid Amount!\n";
        }
        else {
            balance -= amount;
            cout << "Withdrawal Successful.\n";
        }
    }

    void checkBalance() {
        cout << "Current Balance: " << balance << endl;
    }

    void displayDetails() {
        cout << "---: Account Details :---";
        cout << "Account Number : " << accountNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    account.createAccount();

    do {
        cout << "---: Bank Account System :--"<<endl;
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.deposit();
                break;

            case 2:
                account.withdraw();
                break;

            case 3:
                account.checkBalance();
                break;

            case 4:
                account.displayDetails();
                break;

            case 5:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice>=1 && choice<5);

    return 0;
}