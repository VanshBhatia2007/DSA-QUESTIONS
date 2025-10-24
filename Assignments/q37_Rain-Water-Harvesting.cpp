#include<iostream>
using namespace std;
int main(){
    int n,max,min;
    cin>>n;
    int left[n],right[n];
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    left[0]=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>left[0]){
            max=a[i];
            left[i]=max;
        }
        else{
            max=left[0];
            left[i]=max;
        }
    }
    for(int i=0;i<n;i++){
        cout<<left[i]<<" ";
    }
    cout<<endl;
    right[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i]>right[i+1]){
            max=a[i];
            right[i]=max;
        }
        else{
            max=right[i+1];
            right[i]=max;
        }
    }
    for(int i=0;i<n;i++){
        cout<<right[i]<<" ";
    }

    return 0;
}