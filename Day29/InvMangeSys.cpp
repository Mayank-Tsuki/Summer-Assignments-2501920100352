//Write a program to Create inventory management system.

#include <iostream>
using namespace std;

class Inventory {
    int id;
    string name;
    float price;

public:
    void getData() {
        cout << "Enter Product ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, name);
        cout << "Enter Price: ";
        cin >> price;
    }

    void showData() {
        cout << "\n----- Product Details -----\n";
        cout << "Product ID   : " << id << endl;
        cout << "Product Name : " << name << endl;
        cout << "Price        : " << price << endl;
    }
};

int main() {
    Inventory p;

    p.getData();
    p.showData();

    return 0;
}