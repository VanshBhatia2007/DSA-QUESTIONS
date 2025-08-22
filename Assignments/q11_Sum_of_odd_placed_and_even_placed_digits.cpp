#include<iostream>
using namespace std;
int main() {
    int no,d,pos=0,odd=0,even=0;
    
    for(cin>>no;no>0;no/=10){
        d=no%10;
        pos=pos+1;
        if(pos%2==0){
            odd=odd+d;
        }
        else{
            even=even+d;
        }
        
    }
    cout<<odd<<endl<<even;
	return 0;
}