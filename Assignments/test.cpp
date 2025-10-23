#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int target,sum;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum=a[i]+a[j];
            if(sum==target){
                cout<<a[i]<<" and "<<a[j]<<endl;
            }
        }
    }
    return 0;
}