#include <iostream>
using namespace std;

int main(){
    int i , n , step;
    int c;
    cin>>i;
    cin>>n;
    cin>>step;
    while(i<=n){
        c=(5/9.0)*(i-32);
        cout<<i<<" "<<c;
        i=i+step;
        cout<<endl;
    }
    return 0;
}