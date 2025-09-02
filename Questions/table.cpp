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
    int i , a , step;
    cin>>i;
    cin>>a;
    cin>>step;
    table(i,a,step);
    
    return 0;
}