//Write a program to Sort words by length.

#include<bits.//stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of words: ";
    cin>>n;
    string words[n];

    cout<<"Enter the words:";
    for(int i = 0; i < n; i++){
        cin>>words[i];
    }
    // Sort words by length
    for(int i = 0; i < n-1; i++){
        for (int j = i + 1; j < n; j++){
            if (words[i].length() > words[j].length()){
                swap(words[i], words[j]);
            }
        }
    }
    cout<<"Words sorted by length:"<<endl;
    for(int i = 0; i < n; i++){
        cout<<words[i]<<endl;
    }
    return 0;
}