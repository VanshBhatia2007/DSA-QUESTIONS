#include<iostream>
using namespace std;

int main(){
    int n,sum,target;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>target;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                sum=a[i]+a[j]+a[k];
                if(sum==target){
                    cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<endl;
                }
            }
        }
    }
    return 0;
}