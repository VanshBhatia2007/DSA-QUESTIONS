#include <iostream>
using namespace std;

void selection(int a[] , int n){
    for(int i=0;i<n;++i){
        int mi=i;
        for(int j=i+1;j<n;++j){
            if(a[j]<a[mi]){
                mi=j;
            }
        }
        swap(a[i],a[mi]);
    }
}

void print(int a[] , int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[5]={5,3,24,1,2};
    int n = sizeof(a)/sizeof(int);
    selection(a,n);
    print(a,n);

    return 0;
}

   