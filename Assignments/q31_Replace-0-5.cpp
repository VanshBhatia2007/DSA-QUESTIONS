#include<iostream>
using namespace std;

int main(){
    int a[1],n,d,revrsevalue[100],ans=0,cnt=0;
    cin>>n;
    int x=n;
    for(int i=0;x>0;x/=10){
        d=x%10;
        revrsevalue[i]=d;
        i++;
        cnt++;
    }
    for(int i=cnt-1;i>=0;i--){
        d=revrsevalue[i];
        if(d==0){
            d=5;
        }

        ans=ans*10+d;
    }
    a[0]=ans;
    cout<<a[0];
    return 0;
}