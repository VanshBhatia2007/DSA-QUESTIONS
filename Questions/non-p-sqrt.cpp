#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    float ans=0,i=1;
    int c=1;
    while(c<=4){
        while(ans*ans<=n){
            ans=ans+i;
        }
        ans=ans-i;
        i=i/10;
        c=c+1;
    }
    cout<<ans<<endl;
   return 0;
}