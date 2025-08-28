#include <iostream>
using namespace std;
int main() {
    int n,ncr=1;
    cin>>n;
    for(int r=0;r<n;r++){
        int ncr=1;
        for(int i=0;i<=r;i++){
             cout<<ncr<<" ";

            ncr =(((r-i)*ncr)/(i+1));
        }
    cout<<endl;
    }
    return 0;
}