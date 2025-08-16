#include <iostream>
using namespace std;

int main(){
    int i , n;
    int c;
    i=0;
    cin>>n;
    cout<<"f"<<" |  "<<"c"<<"\n";
    cout<<"_"<<" |  "<<"_"<<"\n";
    while(i<=n){
        c=(5/9.0)*(i-32);
        cout<<i<<" |  "<<c;
        i=i+20;
        cout<<'\n';
    }
    return 0;
}