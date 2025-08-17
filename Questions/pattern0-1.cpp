#include <iostream>
using namespace std;

int main(){

    int n,i,x,r;
    cin>>n;
    i=1;
    x=1;
    r=1;
    while(i<=n){
        i=1;
        x=r%2;
        while(i<=r){
            cout<<x;
            
            x=1-x;
            i+=1;
        }
        cout<<'\n';
        
        r+=1;
    }
    return 0;
}