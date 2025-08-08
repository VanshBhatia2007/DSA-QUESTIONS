#include <iostream>
using namespace std;
int main() {
    int i , n;
    cin >> n;
    i = 2;
    while(i<=n-1){
        if(n%i==0){
            cout<<"not a prime number";
            return 0;
        }
        else{
            i=i+1;
        }
        
    }
    cout<<"prime number";
    return 0;
}