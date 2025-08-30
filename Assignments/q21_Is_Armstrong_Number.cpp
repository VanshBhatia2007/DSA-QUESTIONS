#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int no,cnt=0,d=0,sum=0,p=0;
    bool ans=false;
    cin>>no;
    int no2=no,no1=no;
    for(no;no>0;no/=10){
        cnt+=1;
    }
    while(no1>0){
        d=no1%10;
        no1=no1/10;
        p=p+pow(d,cnt);
    }
    if(no2==p) ans=true , cout<<boolalpha<<ans;
    else cout<<boolalpha<<ans;
    return 0;
}