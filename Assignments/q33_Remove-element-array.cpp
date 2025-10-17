#include<iostream>
using namespace std;

int main(){
    int n,target;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>target;
    int x=n;
    for(int i=0;i<x;i++){
        if(a[i]==target){
            for(int j=i;j<x;j++){
                a[j]=a[j+1];
            }
            n--;
        }
    }
    for(int i=0;i<x;i++){
        if(a[i]==target){
            for(int j=i;j<x;j++){
                a[j]=a[j+1];
            }
            n--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}