#include<iostream>
using namespace std;

int main(){
    int n,cnt=0,j=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cnt++;
            continue;
        }
        b[j]=a[i];
        j++;
        
    }
    for(int i=n;i<cnt+n;i++){
        b[j]=0;
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}