#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int r=0;r<n;r++){
        int pt=1;
        cout<<pt<<" ";
        for(int i=1;i<=n;i++){
            int ct=pt*(r-i+1)/i;
            cout<<ct<<" ";
            pt=ct;
        }
    cout<<endl;
    }
    return 0;
}