//Print Character Pyramid

#include<bits//stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the length of the Pyramid : ";cin>>n;

    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j <=n-i ; j++){
            cout<<"   ";
        }

        for (int k=1 ; k <=i ; k++){
            char c = char(k+64);
            cout<<" "<<c<<" ";
        }

        for (int l=i-1 ; l >=1 ; l--){
            char ch = char(64+l);
            cout<<" "<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}