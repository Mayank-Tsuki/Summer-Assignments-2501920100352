//Write a program to Create marksheet generation system. 
#include<bits.//stdc++.h>
using namespace std;

int main() {
    string name;
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter marks of 5 subjects (out of 100):\n";
    cout << "Maths: ";
    cin >> m1;
    cout << "Chemistry: ";
    cin >> m2;
    cout << "Physics: ";
    cin >> m3;
    cout << "English: ";
    cin >> m4;
    cout << "Computer Science: ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    // Grading!!
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 40)
        grade = 'E';
    else
        grade = 'F';

    cout << " :Student MARKSHEET :";
    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << rollNo << endl;

    cout << "Marks:";
    cout << "Maths : " << m1 << endl;
    cout << "Chemistry : " << m2 << endl;
    cout << "Physics : " << m3 << endl;
    cout << "English : " << m4 << endl;
    cout << "Computer Science : " << m5 << endl;

    cout << "Total Marks : " << total << "/500" << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "Grade : " << grade << endl;

    if (grade == 'F')
        cout << "Result : FAIL" << endl;
    else
        cout << "Result : PASS" << endl;

    return 0;
}