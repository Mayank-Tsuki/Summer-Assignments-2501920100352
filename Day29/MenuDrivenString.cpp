//Write a program to Create menu-driven string operations system.

#include<bits.//stdc++.h>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, str);

    do {
        cout << "-::: STRING OPERATIONS :::-"<<endl;
        cout << "1. Display String"<<endl;
        cout << "2. Find Length"<<endl;
        cout << "3. Reverse String"<<endl;
        cout << "4. Convert to Uppercase"<<endl;
        cout << "5. Convert to Lowercase"<<endl;
        cout << "6. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "String: " << str << endl;
                break;

            case 2:
                cout << "Length = " << str.length() << endl;
                break;

            case 3: {
                string temp = str;
                reverse(temp.begin(), temp.end());
                cout << "Reversed String: " << temp << endl;
                break;
            }

            case 4: {
                string temp = str;
                for (int i = 0; i < temp.length(); i++)
                    temp[i] = toupper(temp[i]);
                cout << "Uppercase: " << temp << endl;
                break;
            }

            case 5: {
                string temp = str;
                for (int i = 0; i < temp.length(); i++)
                    temp[i] = tolower(temp[i]);
                cout << "Lowercase: " << temp << endl;
                break;
            }

            case 6:
                cout << "Program Ended." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice>=1 && choice<6);

    return 0;
}