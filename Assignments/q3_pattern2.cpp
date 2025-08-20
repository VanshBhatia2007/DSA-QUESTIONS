#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int r=1;r<=n;r++){
        if(r<=2){
            for(int i=1;i<=r;i++){
                cout<<1;
            }
        }
        else{
            cout<<r-1;
            for(int i=1;i<=r-2;i++){
                cout<<0;
            }
            cout<<r-1;
        }
        cout<<endl;
    }

    return 0;
}