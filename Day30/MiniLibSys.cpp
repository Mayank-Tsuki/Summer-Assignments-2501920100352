//Write a program to Create mini library system. 

#include<bits.//stdc++.h>
using namespace std;

int main() {
    int total;
    cout<<"Enter number of books: ";
    cin>>total;

    int bookId[50];
    string bookName[50];
    string author[50];
    int copies[50];

    for (int i = 0; i < total; i++) {
        cout<<"Enter details of Book "<<i + 1<<endl;

        cout<<"Book ID: ";cin>>bookId[i];

        cout<<"Book Name: ";cin>>bookName[i];

        cout<<"Author Name: ";cin>>author[i];

        cout<<"Number of Copies: ";cin>>copies[i];
    }

    cout << "--- LIBRARY RECORD ---:"<<endl;

    for (int i = 0; i < total; i++) {
        cout << "Book " << i + 1 << endl;
        cout << "Book ID : " << bookId[i] << endl;
        cout << "Book Name : " << bookName[i] << endl;
        cout << "Author : " << author[i] << endl;
        cout << "Copies : " << copies[i] << endl;
    }

    return 0;
}