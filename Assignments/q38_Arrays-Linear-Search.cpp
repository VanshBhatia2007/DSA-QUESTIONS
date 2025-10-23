
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<n;i++){
        if(a[i]==m){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return -1;

}