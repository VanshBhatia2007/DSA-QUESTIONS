#include <iostream>
#include <climits>
using namespace std;

int main() {
    int l=INT_MIN,no;
    int a[]={1,2,3,4,3};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;++i){
        no=a[i];
        if(no>l) l=no;
    }
    cout<<"largest no in array:"<<l;
    
    
    return 0;
}