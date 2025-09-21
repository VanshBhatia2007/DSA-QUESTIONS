#include<iostream>
using namespace std;

int first7(int *a,int n,int i=0){
    if(i==n){
        return -1;
    }
    if(a[i]==7){
        return i;
    }
    return first7(a,n,i+1);
    
}
int solve(int *a,int n){
    if(n==0){
        return -1;
    }
    if(a[0==7]){
        return 0;
    }
    int indx=solve(a+1,n-1);
    if(indx==-1){
        return -1;
    }
    else{
        return indx;
    }
}
int main() {

	int a[] = {1, 2, 3, 4, 5, 7};
	int n = sizeof(a) / sizeof(int);

	cout<<first7(a, n);

	return 0;
}