#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,temp=a[0];
    while(i<n){
        cout<<temp<<" ";
        i++;
        temp=temp+a[i];
    }
    
    return 0;
}
