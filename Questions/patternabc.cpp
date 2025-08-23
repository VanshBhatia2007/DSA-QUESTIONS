#include <iostream>
using namespace std;

int main(){
    int n;
    
    cin>>n;
    for(int r=1;r<=n;r++){
        char c='A';
        for(int i=0;i<n-r+1;i++){
            cout<<c<<" ";
            c++;
        }
        c--;
        for(int i=1;i<=n-r+1;i++){
            cout<<c<<" ";
            c--;
        }
    cout<<endl;
    }
    return 0;
}