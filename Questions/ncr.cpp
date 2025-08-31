#include <iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}

int ncr(int n,int r){
    int fn=fact(n);
    int fr=fact(r);
    int fnr=fact(n-r);
    int ans= fn/(fr*fnr);
    return ans;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<ncr(a,b);
    return 0;
}