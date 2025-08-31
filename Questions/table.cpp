#include <iostream>
using namespace std;

void table(int i , int n , int step){
    int c;
    
    while(i<=n){
        c=(5/9.0)*(i-32);
        cout<<i<<" "<<c;
        i=i+step;
        cout<<endl;
    }
}

int main(){
    int i , n , step;
    cin>>i;
    cin>>n;
    cin>>step;
    table(i,n,step);
    
    return 0;
}