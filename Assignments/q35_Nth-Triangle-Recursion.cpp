#include<iostream>
using namespace std;

int solve(int n){
    //base case
    if(n==0) return 0;
    //recursive case
    return solve(n-2)+solve(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}