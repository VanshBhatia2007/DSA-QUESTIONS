#include<iostream>
using namespace std;

int solve(int x,int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive case
    return x*solve(x,n-1);
}

int main(){
    int x,n;
    cout<<solve(2,3);
    return 0;
}