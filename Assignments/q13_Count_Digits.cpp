#include<iostream>
using namespace std;
int main () {
    int n,d,b,cnt=0;
    cin>>n;
    cin>>d;
    for(n;n>0;n/=10){ //n=n/10
        b=n%10;
        if(b==d){
            cnt+=1;
        }
    }
    cout<<cnt;

	return 0;
}