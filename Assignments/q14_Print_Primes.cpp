#include<iostream>
using namespace std;
int main () {
    int  n,b=1,c=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        for(int a=2;a<=i;a++){
            while(c=a%a+b){
                while(b<b-1){
                    b=b+1;
                }
            }
            if(c==1){
                cout<<a<<endl;
            }
        }
    }

	return 0;
}