//Print Amstronge number in range
#include<bits/stdc++.h>
using namespace std;
int main(){
    int low , high;
    cout<<"Enter the lower limit of the range:";cin>>low;
    cout<<"Enter the upper limit of the range:";cin>>high;

    cout<<"Amstrong numbers are:";
    for(int i = low ; i <= high ; i++){
        string s = to_string(i);
        int n = s.length();
        int copynum = i;
        int compare = 0;
        while(copynum > 0){
            int t = copynum%10;
            compare += pow(t,n);
            copynum /= 10;  
        }
        if(compare==i) cout<<i<<" ";
    }
    return 0;
}