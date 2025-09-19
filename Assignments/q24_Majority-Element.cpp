#include<iostream>
using namespace std;

int main(){
    int a[100];
    int n,ans;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        int fre=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                fre++;
            }
        }
        if(fre>n/2){
            ans=a[i];
        }
    }
    return ans;
}