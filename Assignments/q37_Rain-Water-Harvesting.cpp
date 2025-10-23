#include<iostream>
using namespace std;



int main(){
    int n,max,min;
    int left[n],right[n];
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<a[i-1]){
            max=a[i-1];
            left[i]=max;
        }
        else{
            max=a[i];
            left[i]=max;
        }
    }
    for(int i=n-1;i>0;i--){
        if(a[i]<a[i-1]){
            min=a[i-1];
            right[i]=min;
        }
        else{
            min=a[i];
            right[i]=min;
        }
    }


}