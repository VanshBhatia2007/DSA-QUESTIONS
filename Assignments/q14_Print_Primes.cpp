#include<iostream>
using namespace std;
int main () {
    int  a,n,b=0,c=2,cnt;
    bool p;
    cin>>n;
    for(int i=2;i<=n;i++){
        p=true;
        for(int j=2;j<i;++j){
            if(i%j==0){
                p = false;
            }
        }
        if(p){
            cout<<i<<endl;
        }
        
    }
    return 0;
}