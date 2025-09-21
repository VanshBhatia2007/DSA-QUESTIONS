#include<iostream>
using namespace std;

bool solve(int *a,int n){
    //base case
    if(n==1||n==0){
        return true;
    }
    //recursive case
    if(a[0]<a[1] && solve(a+1,n-1)==true){
        return true;
    }
    else{
        return false;
    }
}
bool solve1(int *a,int n){
    //base case
    if(n==1||n==0){
        return true;
    }
    //recursive case
    if(a[n-2]<a[n-1] && solve(a+1,n-1)==true){
        return true;
    }
    else{
        return false;
    }

}
bool solve2(int *a,int n,int i){
    //base acse
    if(i==n-1 || i==n){
        return true;
    }
    //recursive case
    if(a[i]<a[i+1] && solve2(a,n,i+1)==true){
        return true;
    }
    return false;
}

int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    if(solve(a,n)==true){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }
    return 0;
}