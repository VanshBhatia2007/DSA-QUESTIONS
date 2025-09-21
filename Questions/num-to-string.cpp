#include<iostream>
using namespace std;

char a[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void inttostring(int n){
    int d;
    
    //base case
    if(n==0){
        return;
    }
    d=n%10;
    inttostring(n/10);
    
    cout<<a[d]<<" ";    
}
int main(){
    int n;
    cin>>n;
    inttostring(n);
    return 0;
}