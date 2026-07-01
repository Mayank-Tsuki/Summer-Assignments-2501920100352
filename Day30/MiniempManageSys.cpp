//Write a program to Create mini employee management system. 

#include<bits.//stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of employees: ";
    cin>>n;

    int empId[50];
    string name[50];
    string department[50];
    float salary[50];

    for (int i = 0; i < n; i++) {
        cout<<"Enter details of Employee "<< i + 1 <<endl;

        cout<<"Employee ID: ";cin>>empId[i];

        cout<<"Employee Name: ";cin>>name[i];

        cout<<"Department: ";cin>>department[i];

        cout<<"Salary: ";cin>>salary[i];
    }

    cout << ": EMPLOYEE RECORDS :"<<endl;

    for (int i = 0; i < n; i++) {
        cout<<"Employee " << i + 1<<endl;
        cout<<"Employee ID   : "<<empId[i]<<endl;
        cout<<"Employee Name : "<<name[i]<<endl;
        cout<<"Department    : "<<department[i]<<endl;
        cout<<"Salary        : "<<salary[i]<<endl;
    }
    return 0;
}