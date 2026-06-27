//Write a program to Create salary management system. 

#include<bits.//stdc++.h>
using namespace std;

int main() {
    int employee_ID;
    string name, department, designation;
    float basicSalary;
    cout << "Enter Employee ID: ";
    cin >> employee_ID;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Department: ";
    getline(cin, department);
    cout << "Enter Designation: ";
    getline(cin, designation);

    float hra, da, pf, netSalary;
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
    cout << "HRA(House Rent Allowance) = 30%"<<endl;
    cout << "DA(Dearness Allowance) = 12%"<<endl;
    cout << "PF(Provident Fund)=15%"<<endl;
    hra = basicSalary * 0.30; 
    da = basicSalary * 0.12;
    pf = basicSalary * 0.15; 
    netSalary = basicSalary + hra + da - pf;
     
    cout<<"!! Net salary slip!!:"<<endl;
    cout << "Employee ID   : " << employee_ID << endl;
    cout << "Employee Name : " << name << endl;
    cout << "Department    : " << department << endl;
    cout << "Designation   : " << designation << endl;

    cout << "Basic Salary : Rs. " << basicSalary << endl;
    cout << "HRA (30%)    : Rs. " << hra << endl;
    cout << "DA (12%)     : Rs. " << da << endl;
    cout << "PF (15%)     : Rs. " << pf << endl;

    cout<<endl;
    cout << "Net Salary   : Rs. " << netSalary << endl;

    return 0;



}