#include <iostream>
using namespace std;
int main() {
    int n1,n2,term;
    cin>>n1;
    cin>>n2;
    int cnt=0;
    for(int i=1;cnt<n1;i++){
        
        term = (3*i)+2;
        if(term%n2!=0){
            cout<<term<<endl;
            cnt=cnt+1;
        }
    }
    return 0;
}