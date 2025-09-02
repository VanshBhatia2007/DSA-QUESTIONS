#include <iostream>
using namespace std;
bool checktf(int n){
    bool p;
    for(int i=2;i<n;++i){
        if(n%i==0){
            return false;
        }
            
    }
    return true;
}

void checkprimes(int n){

    for (int i=2;i<=n;++i){
        if(checktf(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    bool p;
    cin>>n;
    checkprimes(n);

    return 0;
}