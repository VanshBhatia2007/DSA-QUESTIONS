#include<iostream>

using namespace std;
int main() {
    int n;
    cin>>n;
    int a=0,b=1,c=a+b;
    for(int r=1;r<=n;r++){
        if(r<3){
            for(int i=1;i<=r;i++){
                cout<<a<<" ";
                a=b;
                
            }
        
        }
        
        else{
            
            for(int i=1;i<=r;i++){
                a=b;
                b=c;
                c=a+b;
                cout<<c<<" ";
                
            }
        }
    cout<<endl;    
    }
    return 0;
}
