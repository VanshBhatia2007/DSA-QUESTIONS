#include<iostream>
using namespace std;

int main(){
    int a[]={1,0,2,4,5,3};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==key){
                cout<<a[i]<<","<<a[j]<<endl;
            }
        }
    }
    return 0;   
}