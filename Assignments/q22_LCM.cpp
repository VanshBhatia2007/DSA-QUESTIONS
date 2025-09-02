#include <iostream>
using namespace std;

int main() {
    long long int n,n2;
    cin>>n;
    long long int hcf=1;
    cin>>n2;
    for(int i=2;i<=min(n,n2);i++){
        if(n%i==0 and n2%i==0){
            hcf=i;
        }
        
    }
    long long int lcm=(n*n2)/hcf;
    cout<<lcm;
    return 0;
}