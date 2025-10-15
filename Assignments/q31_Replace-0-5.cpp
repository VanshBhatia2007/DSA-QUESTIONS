#include<iostream>
using namespace std;

int main(){
    int a[1],d,revrsevalue=0,ans=0;
    cin>>a[0];
    int x=a[0];
    for(int i=0;x>0;x/=10){
        d=x%10;
        revrsevalue=revrsevalue*10+d;
    }
    int y=revrsevalue;
    for(int i=0;y>0;y/=10){
        d=y%10;
        if(d==0){
            d=5;
        }
        ans=ans*10+d;
    }
    cout<<ans;
    return 0;
}