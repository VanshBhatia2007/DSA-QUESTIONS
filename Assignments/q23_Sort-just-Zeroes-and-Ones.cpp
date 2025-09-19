#include<iostream>
using namespace std;

int main(){
    int n;
    int num;
    int cnt=0,cnt1=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num==0){
        cnt++;
        }
        else{
        cnt1++;
        }
    }
    for(int i=0;i<cnt;i++){
        cout<<0<<" ";
    }
    for(int i=0;i<cnt1;i++){
        cout<<1<<" ";
    }
    return 0;

}