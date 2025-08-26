#include <iostream>
using namespace std;

int main(){
    float n=7;
    int n1=n/2+0.5,n2=n/2-0.5;
    

    for(int r=1;r<=n1;r++){
        
        for(int i=1;i<=n1-r;i++){
            cout<<"    ";
        }
        int a=r;
        for(int i=1;i<=r;i++){
            cout<<a;
            r!=1 ? cout<<" " : cout<<"";
            a=a-1;
        }
        for(int i=1;i<=r-1 and r>1;i++){
            cout<<"    ";
        }
        int b=1;
        for(int i=1;i<=r and r>1;i++){
            cout<<b<<" ";
            b=b+1;
        }
    cout<<endl;
    }
    for(int r=n1-1;r>=1;r--){
        for(int i=1;i<=n1-r;i++){
            cout<<"    ";
        }
        int a=r;
        for(int i=1;i<=r;i++){
            cout<<a<<" ";
            a=a-1;
        }
        for(int i=1;i<=r-1 and r>1;i++){
            cout<<"    ";
        }
        int b=1;
        for(int i=1;i<=r and r>1;i++){
            cout<<b<<" ";
            b=b+1;
        }
    cout<<endl;
    }
    
    return 0;
}